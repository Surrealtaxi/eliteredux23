PetalburgCity_House2_MapScripts:: @ 82078F2
	.byte 0

PetalburgCity_House2_EventScript_Woman:: @ 82078F3
	msgbox PetalburgCity_House2_Text_NormanBecameGymLeader, MSGBOX_NPC
	end

PetalburgCity_House2_EventScript_SchoolKid:: @ 82078FC
	msgbox PetalburgCity_House2_Text_BattledNormanOnce, MSGBOX_NPC
	end

PetalburgCity_House2_Text_NormanBecameGymLeader: @ 8207905
	.string "Norman became our town's new\n"
	.string "Gym Leader.\p"
	.string "I think he called his family over from\n"
	.string "the Johto Region.$"

PetalburgCity_House2_Text_BattledNormanOnce: @ 8207969
	.string "I battled Norman once, but, whew,\n"
	.string "he was way too strong.\p"
	.string "How would I put it?\p"
	.string "I just got the feeling that he\n"
	.string "lives for Pokémon.$"
