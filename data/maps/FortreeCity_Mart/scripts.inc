.set LOCALID_SPENSER, 5

FortreeCity_Mart_MapScripts:: @ 8217665
	.byte 0

FortreeCity_Mart_EventScript_Clerk:: @ 8217666
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart FortreeCity_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
FortreeCity_Mart_Pokemart:
	.2byte ITEM_PROTECTOR
	.2byte ITEM_ELECTIRIZER
	.2byte ITEM_MAGMARIZER
	.2byte ITEM_RAZOR_FANG
	.2byte ITEM_RAZOR_CLAW
	.2byte ITEM_DUBIOUS_DISC
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_DRAGON_SCALE
	.2byte ITEM_NONE
	release
	end

FortreeCity_Mart_EventScript_Woman:: @ 8217698
	msgbox FortreeCity_Mart_Text_SuperRepelBetter, MSGBOX_NPC
	end

FortreeCity_Mart_EventScript_Girl:: @ 82176A1
	msgbox FortreeCity_Mart_Text_StockUpOnItems, MSGBOX_NPC
	end

FortreeCity_Mart_EventScript_Boy:: @ 82176AA
	msgbox FortreeCity_Mart_Text_RareCandyMakesMonGrow, MSGBOX_NPC
	end

FortreeCity_Mart_EventScript_Spenser::
	lock
	faceplayer
	compare VAR_LAVARIDGE_LUCY_STATE, 2
	goto_if_eq FortreeCity_Mart_EventScript_SpenserBeatLucy
FortreeCity_Mart_EventScript_SpenserBattle::
	msgbox FortreeCity_Mart_Text_SpenserBeforeBattle, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_SPENSER_FORTREE, FortreeCity_Mart_Text_SpenserDefeat
	msgbox FortreeCity_Mart_Text_SpenserGiveChoiceScarf, MSGBOX_DEFAULT
	givecustommon SPECIES_LAPRAS, 55, ITEM_ASSAULT_VEST, ITEM_PARK_BALL, NATURE_MODEST, 2, 252, 0, 0, 4, 252, 0, 0, 0, 0, 0, 0, 0, MOVE_FREEZE_DRY, MOVE_SPARKLING_ARIA, MOVE_THUNDER, MOVE_PSYCHIC, FALSE
	playfanfare MUS_OBTAIN_ITEM
	message FortreeCity_Mart_Text_Got_Lapras
	waitfanfare
	msgbox FortreeCity_Mart_Text_SpenserFarewell, MSGBOX_AUTOCLOSE
	switch VAR_FACING
	case DIR_NORTH, FortreeCity_Mart_EventScript_SpenserExitNorth
	case DIR_WEST, FortreeCity_Mart_EventScript_SpenserExitDown
	case DIR_EAST, FortreeCity_Mart_EventScript_SpenserExitDown
	end

FortreeCity_Mart_EventScript_SpenserExitNorth::
	applymovement LOCALID_SPENSER, FortreeCity_Mart_Movement_SpenserExitNorth
	waitmovement 0
	goto FortreeCity_Mart_EventScript_SpenserLeave

FortreeCity_Mart_EventScript_SpenserExitDown::
	applymovement LOCALID_SPENSER, FortreeCity_Mart_Movement_SpenserExitDown
	waitmovement 0
	goto FortreeCity_Mart_EventScript_SpenserLeave

FortreeCity_Mart_EventScript_SpenserLeave::
	playse SE_SLIDING_DOOR
	removeobject LOCALID_SPENSER
	release
	end

FortreeCity_Mart_EventScript_SpenserBeatLucy::
	msgbox FortreeCity_Mart_Text_SpenserBeatLucy, MSGBOX_DEFAULT
	goto FortreeCity_Mart_EventScript_SpenserBattle

FortreeCity_Mart_Text_SpenserBeatLucy:
	.string "Hm? You're the youngster who beat Lucy!\n"
	.string "Gwahahah! She wasn't happy about that!$"

FortreeCity_Mart_Text_SpenserIntro:
	.string "Hm? You're the youngster Scott's\n"
	.string "always talking about!$"

FortreeCity_Mart_Text_SpenserBeforeBattle:
	.string "I'd like to see your skills for myself.\p"
	.string "Can your bonds of trust with your\n"
	.string "Pokémon match mine?\p"
	.string "If not, you will never beat my\n"
	.string "brethren!$"

FortreeCity_Mart_Text_SpenserDefeat:
	.string "Gwahahah!$"

FortreeCity_Mart_Text_SpenserGiveChoiceScarf:
	.string "Hahahaha! Saw right through my\n"
	.string "bluster, did you?\p"
	.string "Here, take one of my Pokémon!$"

FortreeCity_Mart_Text_SpenserFarewell:
	.string "I look forward to our next battle.\n"
	.string "Farewell for now!$"

FortreeCity_Mart_Text_SuperRepelBetter: @ 82176B3
	.string "Super Repel lasts a long time,\n"
	.string "and it gets the job done.\p"
	.string "It's much better than an ordinary\n"
	.string "Repel.$"

FortreeCity_Mart_Text_StockUpOnItems: @ 8217715
	.string "I always stock up on more items than\n"
	.string "I'm sure I'll need.\p"
	.string "You never know what might happen.\n"
	.string "Better to be safe than sorry!$"

FortreeCity_Mart_Text_RareCandyMakesMonGrow: @ 821778E
	.string "A Rare Candy makes a Pokémon grow\n"
	.string "immediately by one level.$"

FortreeCity_Mart_Movement_SpenserExitNorth:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	delay_8
	step_end

FortreeCity_Mart_Movement_SpenserExitDown:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	delay_8
	step_end

FortreeCity_Mart_Text_Got_Lapras::
	.string "{PLAYER} got a {COLOR BLUE}Lapras{COLOR DARK_GRAY} as a gift!$"
