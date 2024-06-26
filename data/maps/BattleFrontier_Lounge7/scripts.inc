BattleFrontier_Lounge7_MapScripts:: @ 8265254
	.byte 0

BattleFrontier_Lounge7_EventScript_LeftMoveTutor:: @ 8265255
	lock
	faceplayer
	setvar VAR_TEMP_C, SCROLL_MULTI_BF_MOVE_TUTOR_1
	goto_if_set FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR, BattleFrontier_Lounge7_EventScript_AlreadyMetLeftTutor
	msgbox BattleFrontier_Lounge7_Text_LeftTutorIntro, MSGBOX_DEFAULT
	setflag FLAG_MET_FRONTIER_BEAUTY_MOVE_TUTOR
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove
	end

BattleFrontier_Lounge7_EventScript_AlreadyMetLeftTutor:: @ 8265276
	msgbox BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove
	end

BattleFrontier_Lounge7_EventScript_ChooseLeftTutorMove:: @ 8265284
	message BattleFrontier_Lounge7_Text_TeachWhichMove
	waitmessage
	special ShowBattlePointsWindow
	setvar VAR_TEMP_E, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_D, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_Softboiled
	case 1, BattleFrontier_Lounge7_EventScript_SeismicToss
	case 2, BattleFrontier_Lounge7_EventScript_DreamEater
	case 3, BattleFrontier_Lounge7_EventScript_MegaPunch
	case 4, BattleFrontier_Lounge7_EventScript_MegaKick
	case 5, BattleFrontier_Lounge7_EventScript_BodySlam
	case 6, BattleFrontier_Lounge7_EventScript_RockSlide
	case 7, BattleFrontier_Lounge7_EventScript_Counter
	case 8, BattleFrontier_Lounge7_EventScript_ThunderWave
	case 9, BattleFrontier_Lounge7_EventScript_SwordsDance
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	end

BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove:: @ 826532F
	message BattleFrontier_Lounge7_Text_TeachWhichMove
	waitmessage
	setvar VAR_TEMP_E, 0
	setvar VAR_0x8004, SCROLL_MULTI_BF_MOVE_TUTOR_1
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_D, VAR_RESULT
	switch VAR_RESULT
	case 0, BattleFrontier_Lounge7_EventScript_Softboiled
	case 1, BattleFrontier_Lounge7_EventScript_SeismicToss
	case 2, BattleFrontier_Lounge7_EventScript_DreamEater
	case 3, BattleFrontier_Lounge7_EventScript_MegaPunch
	case 4, BattleFrontier_Lounge7_EventScript_MegaKick
	case 5, BattleFrontier_Lounge7_EventScript_BodySlam
	case 6, BattleFrontier_Lounge7_EventScript_RockSlide
	case 7, BattleFrontier_Lounge7_EventScript_Counter
	case 8, BattleFrontier_Lounge7_EventScript_ThunderWave
	case 9, BattleFrontier_Lounge7_EventScript_SwordsDance
	case 10, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	end

BattleFrontier_Lounge7_EventScript_Softboiled:: @ 82653D7
	setvar VAR_0x8008, 16
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_SeismicToss:: @ 82653E2
	setvar VAR_0x8008, 24
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_DreamEater:: @ 82653ED
	setvar VAR_0x8008, 24
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_MegaPunch:: @ 82653F8
	setvar VAR_0x8008, 24
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_MegaKick:: @ 8265403
	setvar VAR_0x8008, 48
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_BodySlam:: @ 826540E
	setvar VAR_0x8008, 48
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_RockSlide:: @ 8265419
	setvar VAR_0x8008, 48
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_Counter:: @ 8265424
	setvar VAR_0x8008, 48
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_ThunderWave:: @ 826542F
	setvar VAR_0x8008, 48
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_SwordsDance:: @ 826543A
	setvar VAR_0x8008, 48
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_RightMoveTutor:: @ 8265445
	lock
	faceplayer
	special ScriptMenu_CreatePKMNCenterMoveTutorMultichoice
	waitstate
	special GetPKMNCenterMoveListMultichoice
	switch VAR_RESULT
	case 0, testBlock
	case 1, testBlock
	case 2, testBlock
	case 3, testBlock
	case 4, testBlock
	case 5, testBlock
	case 6, testBlock
	case 7, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	case MULTI_B_PRESSED, BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	end

testBlock::
	setvar VAR_TEMP_C, SCROLL_MULTI_PC_TUTOR_SET_7
	goto BattleFrontier_Lounge7_EventScript_AlreadyMetRightTutor
	end

BattleFrontier_Lounge7_EventScript_AlreadyMetRightTutor:: @ 8265466
	msgbox BattleFrontier_Lounge7_Text_RightTutorWelcomeBack, MSGBOX_DEFAULT
	goto BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove
	end

BattleFrontier_Lounge7_EventScript_ChooseRightTutorMove:: @ 8265474
	message BattleFrontier_Lounge7_Text_TeachWhichMove
	waitmessage
	setvar VAR_TEMP_E, 6
	setvar VAR_0x8004, SCROLL_MULTI_PC_TUTOR_SET_7
	setvar VAR_0x8006, 0
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_D, VAR_RESULT
	compare VAR_RESULT 17
	goto_if_eq BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	compare VAR_RESULT MULTI_B_PRESSED
	goto_if_eq BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove:: @ 826551F
	message BattleFrontier_Lounge7_Text_TeachWhichMove
	waitmessage
	setvar VAR_TEMP_E, 6
	setvar VAR_0x8004, SCROLL_MULTI_PC_TUTOR_SET_7
	setvar VAR_0x8006, 1
	special ShowScrollableMultichoice
	waitstate
	copyvar VAR_TEMP_D, VAR_RESULT
	compare VAR_RESULT 17
	goto_if_eq BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	compare VAR_RESULT MULTI_B_PRESSED
	goto_if_eq BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_DefenseCurl:: @ 82655C7
	setvar VAR_0x8008, 16
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_Snore:: @ 82655D2
	setvar VAR_0x8008, 24
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_MudSlap:: @ 82655DD
	setvar VAR_0x8008, 24
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_Swift:: @ 82655E8
	setvar VAR_0x8008, 24
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_IcyWind:: @ 82655F3
	setvar VAR_0x8008, 24
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_Endure:: @ 82655FE
	setvar VAR_0x8008, 48
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_PsychUp:: @ 8265609
	setvar VAR_0x8008, 48
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_IcePunch:: @ 8265614
	setvar VAR_0x8008, 48
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_ThunderPunch:: @ 826561F
	setvar VAR_0x8008, 48
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_FirePunch:: @ 826562A
	setvar VAR_0x8008, 48
	goto BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection
	end

BattleFrontier_Lounge7_EventScript_ExitTutorMoveSelect:: @ 8265635
	special CloseBattleFrontierTutorWindow
	special CloseBattlePointsWindow
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge7_EventScript_CancelChooseMon:: @ 8265645
	msgbox BattleFrontier_Lounge7_Text_YouDontWantTo, MSGBOX_DEFAULT
	release
	end

@ VAR_0x8008 is the price
@ VAR_TEMP_C is the scroll multichoice ID
@ VAR_TEMP_D is the move selection
@ VAR_TEMP_E is which move tutor was spoken to
BattleFrontier_Lounge7_EventScript_ConfirmMoveSelection:: @ 826564F
	copyvar VAR_0x8004, VAR_TEMP_D
	copyvar VAR_0x8005, VAR_TEMP_E
	special BufferBattleFrontierTutorMoveName
	buffernumberstring 1, VAR_0x8008
	copyvar VAR_0x8004, VAR_TEMP_C
	msgbox BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq BattleFrontier_Lounge7_EventScript_ChooseNewMove
	goto BattleFrontier_Lounge7_EventScript_TeachTutorMove
	end

BattleFrontier_Lounge7_EventScript_TeachTutorMove:: @ 8265696
	msgbox BattleFrontier_Lounge7_Text_TeachMoveToWhichMon, MSGBOX_DEFAULT
	special GetBattleFrontierTutorMoveIndex
	fadescreen FADE_TO_BLACK
	special CloseBattlePointsWindow
	special CloseBattleFrontierTutorWindow
	special ChooseMonForMoveTutor
	waitstate
	compare VAR_RESULT, FALSE
	goto_if_eq BattleFrontier_Lounge7_EventScript_CancelChooseMon
	msgbox BattleFrontier_Lounge7_Text_IllTakeBattlePoints, MSGBOX_DEFAULT
	release
	end

BattleFrontier_Lounge7_EventScript_ChooseNewMove:: @ 82656CA
	compare VAR_TEMP_E, 0
	goto_if_eq BattleFrontier_Lounge7_EventScript_ChooseNewLeftTutorMove
	goto BattleFrontier_Lounge7_EventScript_ChooseNewRightTutorMove
	end

BattleFrontier_Lounge7_EventScript_Sailor:: @ 82656DB
	msgbox BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong, MSGBOX_NPC
	end

BattleFrontier_Lounge7_EventScript_Gentleman:: @ 82656E4
	msgbox BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful, MSGBOX_NPC
	end

BattleFrontier_Lounge7_Text_LeftTutorIntro: @ 82656ED
	.string "Buhahaha!\p"
	.string "You couldn't tell it from looking now,\n"
	.string "but I used to be one tough Trainer.\p"
	.string "I had a reputation as the toughest\n"
	.string "BEAUTY around, I tell you!\p"
	.string "… … … … … …\p"
	.string "What is it now?\n"
	.string "You don't believe me.\p"
	.string "I'm not like that blowhard woman over\n"
	.string "there. I'm actually talented!\p"
	.string "Let me prove it to you.\n"
	.string "I can teach your Pokémon special and\l"
	.string "yet cute moves.\p"
	.string "But my lessons don't come free.\n"
	.string "How about paying for the moves I teach\l"
	.string "with a wee bit of Battle Points?$"

BattleFrontier_Lounge7_Text_LeftTutorWelcomeBack: @ 82658AB
	.string "Buhahaha!\p"
	.string "Are you back to learn special and\n"
	.string "yet cute Pokémon moves?$"

BattleFrontier_Lounge7_Text_TeachWhichMove: @ 82658EF
	.string "Fine, fine, look here!\n"
	.string "Which move should I teach?$"

BattleFrontier_Lounge7_Text_MoveWillBeXBattlePoints: @ 8265921
	.string "The move {STR_VAR_1}, is it?\n"
	.string "That will be {STR_VAR_2} Battle Points, okay?$"

BattleFrontier_Lounge7_Text_TeachMoveToWhichMon: @ 826595A
	.string "Fine, fine, now pick the Pokémon\n"
	.string "I should teach the move to.$"

BattleFrontier_Lounge7_Text_HaventGotEnoughPoints: @ 8265997
	.string "What the…\n"
	.string "You haven't got enough Battle Points!$"

BattleFrontier_Lounge7_Text_IllTakeBattlePoints: @ 82659C7
	.string "Do you see how skilled I am now?\n"
	.string "I'll take your Battle Points, thanks!$"

BattleFrontier_Lounge7_Text_YouDontWantTo: @ 8265A0E
	.string "What's that?\n"
	.string "You don't want to…\p"
	.string "If you want to see how skilled I am,\n"
	.string "you come see me anytime!$"

BattleFrontier_Lounge7_Text_RightTutorIntro: @ 8265A6C
	.string "Ihihihi!\p"
	.string "I know it's hard to see now, but I used\n"
	.string "to be one fantastic Trainer.\p"
	.string "I had a reputation as the most\n"
	.string "invincible SWIMMER around, I tell you!\p"
	.string "… … … … … …\p"
	.string "What's wrong?\n"
	.string "You don't believe me.\p"
	.string "I'm not like that buffoonish woman over\n"
	.string "there. I'm actually experienced!\p"
	.string "I can prove it to you.\n"
	.string "I can teach your Pokémon hard and\l"
	.string "yet pretty moves.\p"
	.string "But my lessons don't come free.\n"
	.string "How about paying for the moves I teach\l"
	.string "with a wee bit of Battle Points?$"

BattleFrontier_Lounge7_Text_RightTutorWelcomeBack: @ 8265C2C
	.string "Ihihihi!\p"
	.string "Have you come to learn hard and\n"
	.string "yet pretty Pokémon moves?$"

BattleFrontier_Lounge7_Text_ThinkLadiesDontGetAlong: @ 8265C6F
	.string "Those ladies, the way they bad-mouth\n"
	.string "each other, you probably think that\l"
	.string "they don't get along.\p"
	.string "But if that were true, they wouldn't\n"
	.string "stay out here together, would they?$"

BattleFrontier_Lounge7_Text_LadiesWereStrongAndBeautiful: @ 8265D17
	.string "When I was just a wee YOUNGSTER,\n"
	.string "those ladies were strong and beautiful.\p"
	.string "They were idols among us Trainers.\p"
	.string "Even now, age hasn't dulled their\n"
	.string "abilities.\p"
	.string "In fact, their Pokémon moves have\n"
	.string "grown even more polished.\p"
	.string "But… For some reason, I can't help\n"
	.string "but feel this…\p"
	.string "Time is so cruel…$"

BattleFrontier_Lounge7_Text_SoftboiledDesc:: @ 8265E30
	.string "Recovers up to\n"
	.string "half the user's\n"
	.string "maximum HP.$"

BattleFrontier_Lounge7_Text_SeismicTossDesc:: @ 8265E5B
	.string "Inflicts damage\n"
	.string "identical to the\n"
	.string "user's level.$"

BattleFrontier_Lounge7_Text_DreamEaterDesc:: @ 8265E8A
	.string "Recovers half the\n"
	.string "damage inflicted\n"
	.string "on a sleeping foe.$"

BattleFrontier_Lounge7_Text_MegaPunchDesc:: @ 8265EC0
	.string "A strong punch\n"
	.string "thrown with\n"
	.string "incredible power.$"

BattleFrontier_Lounge7_Text_MegaKickDesc:: @ 8265EED
	.string "An extremely\n"
	.string "powerful kick with\n"
	.string "intense force.$"

BattleFrontier_Lounge7_Text_BodySlamDesc:: @ 8265F1C
	.string "A full-body slam\n"
	.string "that may cause\n"
	.string "paralysis.$"

BattleFrontier_Lounge7_Text_RockSlideDesc:: @ 8265F47
	.string "Large boulders\n"
	.string "are hurled. May\n"
	.string "cause flinching.$"

BattleFrontier_Lounge7_Text_CounterDesc:: @ 8265F77
	.string "Retaliates any\n"
	.string "physical hit with\n"
	.string "double the power.$"

BattleFrontier_Lounge7_Text_ThunderWaveDesc:: @ 8265FAA
	.string "A weak jolt of\n"
	.string "electricity that\n"
	.string "paralyzes the foe.$"

BattleFrontier_Lounge7_Text_SwordsDanceDesc:: @ 8265FDD
	.string "A fighting dance\n"
	.string "that sharply\n"
	.string "raises ATTACK.$"

BattleFrontier_Lounge7_Text_DefenseCurlDesc:: @ 826600A
	.string "Curls up to con-\n"
	.string "ceal weak spots\n"
	.string "and raise DEFENSE.$"

BattleFrontier_Lounge7_Text_SnoreDesc:: @ 826603E
	.string "A loud attack\n"
	.string "that can be used\n"
	.string "only while asleep.$"

BattleFrontier_Lounge7_Text_MudSlapDesc:: @ 8266070
	.string "Hurls mud in the\n"
	.string "foe's face to re-\n"
	.string "duce its accuracy.$"

BattleFrontier_Lounge7_Text_SwiftDesc:: @ 82660A6
	.string "Sprays star-\n"
	.string "shaped rays\n"
	.string "that never miss.$"

BattleFrontier_Lounge7_Text_IcyWindDesc:: @ 82660D0
	.string "A chilling attack\n"
	.string "that lowers the\n"
	.string "foe's SPEED.$"

BattleFrontier_Lounge7_Text_EndureDesc:: @ 82660FF
	.string "Endures any at-\n"
	.string "tack for 1 turn,\n"
	.string "leaving 1HP.$"

BattleFrontier_Lounge7_Text_PsychUpDesc:: @ 826612D
	.string "Copies the foe's\n"
	.string "effect(s) and\n"
	.string "gives to the user.$"

BattleFrontier_Lounge7_Text_IcePunchDesc:: @ 826615F
	.string "An icy punch\n"
	.string "that may\n"
	.string "freeze the foe.$"

BattleFrontier_Lounge7_Text_ThunderPunchDesc:: @ 8266185
	.string "An electrified\n"
	.string "punch that may\n"
	.string "paralyze the foe.$"

BattleFrontier_Lounge7_Text_FirePunchDesc:: @ 82661B5
	.string "A fiery punch\n"
	.string "that may burn\n"
	.string "the foe.$"

@@@@@

@ Set 1
PokemonCenterMoveTutor_Text_FuryCutterDesc::
	.string "An attack that\n"
	.string "intensifies on\n"
	.string "successive hits.$"

PokemonCenterMoveTutor_Text_RolloutDesc::
	.string "An attack that\n"
	.string "intensifies each\n"
	.string "turn.$"

PokemonCenterMoveTutor_Text_SeismicTossDesc::
	.string "Inflicts damage\n"
	.string "identical to the\n"
	.string "user's level.$"

PokemonCenterMoveTutor_Text_CovetDesc::
	.string "Cutely begs to\n"
	.string "steal the foe's\n"
	.string "held item.$"

PokemonCenterMoveTutor_Text_VacuumWaveDesc::
	.string "A wave of pure\n"
	.string "vacuum that al-\n"
	.string "ways goes first.$"

PokemonCenterMoveTutor_Text_ShockWaveDesc::
	.string "A rapid jolt of\n"
	.string "electricity that\n"
	.string "can't be avoided.$"

PokemonCenterMoveTutor_Text_BugBiteDesc::
	.string "Steals and eats\n"
	.string "the target's held\n"
	.string "Berry.$"

PokemonCenterMoveTutor_Text_AirCutterDesc::
	.string "Hits both foes.\n"
	.string "High critical hit\n"
	.string "ratio.$"

PokemonCenterMoveTutor_Text_SwiftDesc::
	.string "Sprays star-\n"
	.string "shaped rays\n"
	.string "that never miss.$"

PokemonCenterMoveTutor_Text_SnatchDesc::
	.string "Steals effects\n"
	.string "of the target's\n"
	.string "next move.$"

PokemonCenterMoveTutor_Text_MimicDesc::
	.string "Copies a move\n"
	.string "used by the foe\n"
	.string "for one battle.$"

PokemonCenterMoveTutor_Text_MudSlapDesc::
	.string "Hurls mud in the\n"
	.string "foe's face to re-\n"
	.string "duce its accuracy.$"

PokemonCenterMoveTutor_Text_MetronomeDesc::
	.string "Waggles a finger\n"
	.string "to use any move\n"
	.string "at random.$"

PokemonCenterMoveTutor_Text_OminousWindDesc::
	.string "A repulsive gust\n"
	.string "of wind that may\n"
	.string "raise all stats.$"

PokemonCenterMoveTutor_Text_SuperFangDesc::
	.string "Bites with sharp\n"
	.string "fangs and halves\n"
	.string "the foe's HP.$"

PokemonCenterMoveTutor_Text_HoneClawsDesc::
	.string "Sharpens claws\n"
	.string "to boost Attack\n"
	.string "and accuracy.$"

PokemonCenterMoveTutor_Text_PsychUpDesc::
	.string "Copies the foe's\n"
	.string "effect(s) and\n"
	.string "gives to the user.$"

PokemonCenterMoveTutor_Text_FocusEnergyDesc::
	.string "Focuses power to\n"
	.string "raise critical-hit\n"
	.string "ratio.$"

PokemonCenterMoveTutor_Text_SpikesDesc::
	.string "Sets spikes that\n"
	.string "hurt a foe\n"
	.string "switching in.$"

PokemonCenterMoveTutor_Text_InfestationDesc::
	.string "Infests and\n"
	.string "attacks the foe\n"
	.string "for 2 to 5 turns.$"

@ Set 2
PokemonCenterMoveTutor_Text_CounterDesc::
	.string "Retaliates any\n"
	.string "physical hit with\n"
	.string "double the power.$"

PokemonCenterMoveTutor_Text_EndeavorDesc::
	.string "Cuts the target's\n"
	.string "HP to equal the\n"
	.string "user's HP.$"

PokemonCenterMoveTutor_Text_WorrySeedDesc::
	.string "Makes target's\n"
	.string "ability Insomnia,\n"
	.string "preventing sleep.$"

PokemonCenterMoveTutor_Text_DefenseCurlDesc::
	.string "Curls up to con-\n"
	.string "ceal weak spots\n"
	.string "and raise Defense.$"

PokemonCenterMoveTutor_Text_DefogDesc::
	.string "Blows away spikes,\n"
	.string "screens, etc. Also\n"
	.string "lowers evasion.$"

PokemonCenterMoveTutor_Text_MagicCoatDesc::
	.string "Reflects Leech\n"
	.string "Seed and status\n"
	.string "effects.$"

PokemonCenterMoveTutor_Text_UproarDesc::
	.string "Causes an uproar\n"
	.string "for three turns,\n"
	.string "preventing sleep.$"

PokemonCenterMoveTutor_Text_HexDesc::
	.string "Doubles damage if\n"
	.string "the target has a\n"
	.string "status condition.$"

PokemonCenterMoveTutor_Text_GastroAcidDesc::
	.string "Hurls stomach\n"
	.string "acid to nullify\n"
	.string "target's Ability.$"

PokemonCenterMoveTutor_Text_SynthesisDesc::
	.string "Restores HP. The\n"
	.string "amount varies\n"
	.string "with the weather.$"

PokemonCenterMoveTutor_Text_PainSplitDesc::
	.string "Adds the user and\n"
	.string "target's HP, then\n"
	.string "shares it equally.$"

PokemonCenterMoveTutor_Text_LowKickDesc::
	.string "A kick that does\n"
	.string "more damage to\n"
	.string "heavier targets.$"

PokemonCenterMoveTutor_Text_IronDefenseDesc::
	.string "Body surface is\n"
	.string "hardened, sharply\n"
	.string "raising Defense.$"

PokemonCenterMoveTutor_Text_MagnetRiseDesc::
	.string "Levitates using\n"
	.string "electromagnetism\n"
	.string "for five turns.$"

PokemonCenterMoveTutor_Text_SwaggerDesc::
	.string "Confuses target,\n"
	.string "but sharply raises\n"
	.string "its Attack stat.$"

PokemonCenterMoveTutor_Text_PinMissileDesc::
	.string "Fires sharp pins\n"
	.string "that strike 2 to 5\n"
	.string "times.$"

PokemonCenterMoveTutor_Text_MudShotDesc::
	.string "Hurls mud at the\n"
	.string "target, reducing\n"
	.string "its Speed stat.$"

PokemonCenterMoveTutor_Text_AgilityDesc::
	.string "Relaxes the body\n"
	.string "to sharply boost\n"
	.string "Speed.$"

@ Set 3
PokemonCenterMoveTutor_Text_SignalBeamDesc::
	.string "A sinister beam\n"
	.string "that may also\n"
	.string "cause confusion.$"

PokemonCenterMoveTutor_Text_GravityDesc::
	.string "For 5 turns flight\n"
	.string "is impossible and\n"
	.string "accuracy rises.$"

PokemonCenterMoveTutor_Text_SeedBombDesc::
	.string "A barrage of hard-\n"
	.string "shelled seeds is\n"
	.string "rained on the foe.$"

PokemonCenterMoveTutor_Text_PsychoCutDesc::
	.string "Has an increased\n"
	.string "critical-hit\n"
	.string "ratio.$"

PokemonCenterMoveTutor_Text_IcyWindDesc::
	.string "A chilling attack\n"
	.string "that lowers the\n"
	.string "foe's Speed.$"

PokemonCenterMoveTutor_Text_ElectroWebDesc::
	.string "An electric net\n"
	.string "captures foes.\n"
	.string "Lowers Speed.$"

PokemonCenterMoveTutor_Text_ThunderFangDesc::
	.string "An electrified\n"
	.string "bite that may\n"
	.string "paralyze the foe.$"

PokemonCenterMoveTutor_Text_FireFangDesc::
	.string "A fiery bite\n"
	.string "that may burn\n"
	.string "the foe.$"

PokemonCenterMoveTutor_Text_IceFangDesc::
	.string "An icy bite\n"
	.string "that may\n"
	.string "freeze the foe.$"

PokemonCenterMoveTutor_Text_BrineDesc::
	.string "Power is doubled\n"
	.string "if foe's HP is\n"
	.string "half or less.$"

PokemonCenterMoveTutor_Text_RazorShellDesc::
	.string "High critical-hit\n"
	.string "ratio. May also\n"
	.string "lower Defense.$"

PokemonCenterMoveTutor_Text_RevengeDesc::
	.string "Doubles damage\n"
	.string "if user was hurt\n"
	.string "by foe this turn.$"

PokemonCenterMoveTutor_Text_DrainingKissDesc::
	.string "A kiss that steals\n"
	.string "half the damage\n"
	.string "inflicted.$"

PokemonCenterMoveTutor_Text_LeafBladeDesc::
	.string "Has an increased\n"
	.string "critical-hit\n"
	.string "ratio.$"

PokemonCenterMoveTutor_Text_RockBlastDesc::
	.string "Hurls boulders at\n"
	.string "the foe 2 to 5\n"
	.string "times in a row.$"

PokemonCenterMoveTutor_Text_SoftBoiledDesc::
	.string "Recovers up to\n"
	.string "half the user's\n"
	.string "maximum HP.$"

PokemonCenterMoveTutor_Text_AuroraBeamDesc::
	.string "Fires a rainbow-\n"
	.string "colored beam that\n"
	.string "may lower Attack.$"

PokemonCenterMoveTutor_Text_TeleportDesc::
	.string "A psychic move\n"
	.string "for fleeing from\n"
	.string "battle instantly.$"

@ Set 4
PokemonCenterMoveTutor_Text_ThunderPunchDesc::
	.string "An electrified\n"
	.string "punch that may\n"
	.string "paralyze the foe.$"

PokemonCenterMoveTutor_Text_FirePunchDesc::
	.string "A fiery punch\n"
	.string "that may burn\n"
	.string "the foe.$"

PokemonCenterMoveTutor_Text_IcePunchDesc::
	.string "An icy punch\n"
	.string "that may\n"
	.string "freeze the foe.$"

PokemonCenterMoveTutor_Text_TailwindDesc::
	.string "A turbulent wind\n"
	.string "ups allies' Speed\n"
	.string "for 4 turns.$"

PokemonCenterMoveTutor_Text_ZenHeadbuttDesc::
	.string "Focuses willpower,\n"
	.string "rams the foe. May\n"
	.string "cause flinching.$"

PokemonCenterMoveTutor_Text_BodySlamDesc::
	.string "A full-body slam\n"
	.string "that may cause\n"
	.string "paralysis.$"

PokemonCenterMoveTutor_Text_IcicleSpearDesc::
	.string "Sharp icicles are\n"
	.string "fired at the foe.\n"
	.string "Hits 2 to 5 times.$"

PokemonCenterMoveTutor_Text_DualChopDesc::
	.string "Attacks with\n"
	.string "brutal strikes.\n"
	.string "Hits 2 times.$"

PokemonCenterMoveTutor_Text_ReversalDesc::
	.string "Inflicts more\n"
	.string "damage if the\n"
	.string "user's HP is down.$"

PokemonCenterMoveTutor_Text_BugBuzzDesc::
	.string "Creates a harmful\n"
	.string "sound wave. May\n"
	.string "lower Sp. Def.$"

PokemonCenterMoveTutor_Text_LastResortDesc::
	.string "User must use its\n"
	.string "other known moves\n"
	.string "before this one.$"

PokemonCenterMoveTutor_Text_RolePlayDesc::
	.string "Mimics the target\n"
	.string "and copies its\n"
	.string "Ability.$"

PokemonCenterMoveTutor_Text_DrillRunDesc::
	.string "Spins, slams the\n"
	.string "foe. High critical\n"
	.string "-hit ratio.$"

PokemonCenterMoveTutor_Text_BlazeKickDesc::
	.string "High critical-hit\n"
	.string "ratio. May also\n"
	.string "burn the target.$"

PokemonCenterMoveTutor_Text_CrossPoisonDesc::
	.string "High critical-hit\n"
	.string "ratio. May also\n"
	.string "poison the target.$"

PokemonCenterMoveTutor_Text_WeatherBallDesc::
	.string "The move's type\n"
	.string "and power change\n"
	.string "with the weather.$"

PokemonCenterMoveTutor_Text_AirSlashDesc::
	.string "Cuts with a blade\n"
	.string "of air. May also\n"
	.string "cause flinching.$"

PokemonCenterMoveTutor_Text_StompingTantrumDesc::
	.string "Stomps around\n"
	.string "angrily. Stronger\n"
	.string "after a failure.$"

@ Set 5
PokemonCenterMoveTutor_Text_IronHeadDesc::
	.string "Slams the foe with\n"
	.string "a steel-hard head.\n"
	.string "Foe may flinch.$"

PokemonCenterMoveTutor_Text_AquaTailDesc::
	.string "User swings its\n"
	.string "tail as if it were\n"
	.string "a wave in a storm.$"

PokemonCenterMoveTutor_Text_PowerGemDesc::
	.string "Attacks with a ray\n"
	.string "of light that\n"
	.string "sparkles like gems.$"

PokemonCenterMoveTutor_Text_BounceDesc::
	.string "Bounces up, then\n"
	.string "down next turn.\n"
	.string "May paralyze.$"

PokemonCenterMoveTutor_Text_HealBellDesc::
	.string "Chimes soothingly\n"
	.string "to eliminate all\n"
	.string "status problems.$"

PokemonCenterMoveTutor_Text_SuperpowerDesc::
	.string "Attacks with full\n"
	.string "power, but lowers\n"
	.string "Attack & Defense.$"

PokemonCenterMoveTutor_Text_CrunchDesc::
	.string "Crunches with\n"
	.string "sharp fangs. May\n"
	.string "lower Defense.$"

PokemonCenterMoveTutor_Text_MysticalFireDesc::
	.string "Breathes special,\n"
	.string "hot fire. May\n"
	.string "lower Sp. Atk.$"

PokemonCenterMoveTutor_Text_GunkShotDesc::
	.string "Shoots filthy\n"
	.string "garbage at the\n"
	.string "foe. May poison.$"

PokemonCenterMoveTutor_Text_HyperVoiceDesc::
	.string "A loud attack\n"
	.string "that uses sound\n"
	.string "waves to injure.$"

PokemonCenterMoveTutor_Text_SkyAttackDesc::
	.string "Searches out weak\n"
	.string "spots, then\n"
	.string "strikes next turn.$"

PokemonCenterMoveTutor_Text_HeatCrashDesc::
	.string "Does more damage\n"
	.string "if the user weighs\n"
	.string "more than the foe.$"

PokemonCenterMoveTutor_Text_StoredPowerDesc::
	.string "Ups damage the\n"
	.string "more the user's\n"
	.string "stats are raised.$"

PokemonCenterMoveTutor_Text_TrickDesc::
	.string "Tricks the foe\n"
	.string "into trading\n"
	.string "held items.$"

PokemonCenterMoveTutor_Text_DynamicPunchDesc::
	.string "Powerful, sure to\n"
	.string "cause confusion,\n"
	.string "but inaccurate.$"

PokemonCenterMoveTutor_Text_HelpingHandDesc::
	.string "Boosts the power\n"
	.string "of an ally's\n"
	.string "attack in battle.$"

PokemonCenterMoveTutor_Text_ToxicSpikesDesc::
	.string "Sets spikes that\n"
	.string "poison a foe\n"
	.string "switching in.$"

PokemonCenterMoveTutor_Text_HighHorsepowerDesc::
	.string "Slams hard into\n"
	.string "the foe with its\n"
	.string "entire body.$"

@ Set 6
PokemonCenterMoveTutor_Text_MegahornDesc::
	.string "A brutal ramming\n"
	.string "attack using\n"
	.string "out-thrust horns.$"

PokemonCenterMoveTutor_Text_AuraSphereDesc::
	.string "A blast of aura\n"
	.string "power that cannot\n"
	.string "be avoided.$"

PokemonCenterMoveTutor_Text_ThroatChopDesc::
	.string "Strikes the foe's\n"
	.string "throat to silence\n"
	.string "it for 2 turns.$"

PokemonCenterMoveTutor_Text_EarthPowerDesc::
	.string "Ground under the\n"
	.string "foe erupts. May\n"
	.string "lower Sp. Def.$"

PokemonCenterMoveTutor_Text_HeatWaveDesc::
	.string "Exhales a hot\n"
	.string "breath on the foe.\n"
	.string "May inflict a burn.$"

PokemonCenterMoveTutor_Text_LiquidationDesc::
	.string "Slams the target\n"
	.string "with a water blast.\n"
	.string "May lower Defense.$"

PokemonCenterMoveTutor_Text_BatonPassDesc::
	.string "Switches out the\n"
	.string "user while keeping\n"
	.string "effects in play.$"

PokemonCenterMoveTutor_Text_FoulPlayDesc::
	.string "Does damage based\n"
	.string "on the foe's\n"
	.string "Attack stat.$"

PokemonCenterMoveTutor_Text_SolarBladeDesc::
	.string "Absorbs light in\n"
	.string "one turn, attacks\n"
	.string "the next turn.$"

PokemonCenterMoveTutor_Text_PhantomForceDesc::
	.string "Vanishes, then\n"
	.string "strikes next turn.\n"
	.string "Ignores Protect.$"

PokemonCenterMoveTutor_Text_MeteorMashDesc::
	.string "Fires a Meteor\n"
	.string "-like punch.\n"
	.string "May raise Attack.$"

PokemonCenterMoveTutor_Text_PsychicFangsDesc::
	.string "Bites with Psychic\n"
	.string "power. Also\n"
	.string "destroys Screens.$"

PokemonCenterMoveTutor_Text_EncoreDesc::
	.string "Makes the foe\n"
	.string "repeat its last\n"
	.string "move for 3 turns.$"

PokemonCenterMoveTutor_Text_GrassyTerrainDesc::
	.string "Covers the field\n"
	.string "in grass, healing\n"
	.string "grounded Pokémon.$"

PokemonCenterMoveTutor_Text_ElectricTerrainDesc::
	.string "Electrifies the\n"
	.string "ground,\n"
	.string "preventing sleep.$"

PokemonCenterMoveTutor_Text_MistyTerrainDesc::
	.string "Covers the field\n"
	.string "in mist. Prevents\n"
	.string "status conditions.$"

PokemonCenterMoveTutor_Text_PsychicTerrainDesc::
	.string "Protects Pokémon\n"
	.string "on the ground from\n"
	.string "priority moves.$"

PokemonCenterMoveTutor_Text_PowerUpPunchDesc::
	.string "A hard punch that\n"
	.string "raises the user's\n"
	.string "Attack.$"

@ Set 7
PokemonCenterMoveTutor_Text_DoubleEdgeDesc::
	.string "A life-risking\n"
	.string "tackle that also\n"
	.string "hurts the user.$"

PokemonCenterMoveTutor_Text_PlayRoughDesc::
	.string "The user plays ro-\n"
	.string "ugh with the foe.\n"
	.string "May lower Attack.$"

PokemonCenterMoveTutor_Text_NastyPlotDesc::
	.string "Thinking bad\n"
	.string "thoughts sharply\n"
	.string "raises Sp. Atk.$"

PokemonCenterMoveTutor_Text_SelfDestructDesc::
	.string "Inflicts severe\n"
	.string "damage but makes\n"
	.string "the user faint.$"

PokemonCenterMoveTutor_Text_CloseCombatDesc::
	.string "Fights the foe up\n"
	.string "close. Lowers\n"
	.string "Defense & Sp. Def.$"

PokemonCenterMoveTutor_Text_FlareBlitzDesc::
	.string "A flame-cloaked\n"
	.string "charge that also\n"
	.string "hurts the user.$"

PokemonCenterMoveTutor_Text_BraveBirdDesc::
	.string "A low altitude\n"
	.string "charge that also\n"
	.string "hurts the user.$"

PokemonCenterMoveTutor_Text_LeafStormDesc::
	.string "A storm of sharp\n"
	.string "leaves. Harshly\n"
	.string "lowers Sp. Atk.$"

PokemonCenterMoveTutor_Text_PowerWhipDesc::
	.string "Violently whirls\n"
	.string "vines, etc. to\n"
	.string "lash the foe.$"

PokemonCenterMoveTutor_Text_HurricaneDesc::
	.string "Attacks with a\n"
	.string "fierce wind that\n"
	.string "may also confuse.$"

PokemonCenterMoveTutor_Text_HydroPumpDesc::
	.string "Blasts water at\n"
	.string "high power to\n"
	.string "strike the foe.$"

PokemonCenterMoveTutor_Text_DragonDanceDesc::
	.string "A mystical dance\n"
	.string "that ups Attack\n"
	.string "and Speed.$"

PokemonCenterMoveTutor_Text_OutrageDesc::
	.string "A rampage of 2 to\n"
	.string "3 turns. The user\n"
	.string "is confused after.$"

PokemonCenterMoveTutor_Text_KnockOffDesc::
	.string "Knocks down the\n"
	.string "foe's held item to\n"
	.string "prevent its use.$"

PokemonCenterMoveTutor_Text_QuiverDanceDesc::
	.string "A mystic dance\n"
	.string "that ups Sp. Atk,\n"
	.string "Sp. Def & Speed.$"
