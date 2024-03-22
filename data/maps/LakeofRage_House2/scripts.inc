LakeofRage_House2_MapScripts::
	.byte 0

LakeofRageHouse2_1::
end



LakeofRageHouse2_EventScript_ReceiveWailmer::
    lock
    faceplayer
	checkmoncatch SPECIES_WAILMER
	goto_if_eq VAR_RESULT, FALSE, LakeofRageHouse2_EventScript_TakeWailmer 
	msgbox LakeofRageHouse2_Text_1, MSGBOX_DEFAULT
	release
	end



LakeofRageHouse2_EventScript_TakeWailmer::
    msgbox LakeofRageHouse2_Text_TakeWailmer MSGBOX_DEFAULT
	msgbox LakeofRageHouse2_Text_TakeWailmer2 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox LakeofRageHouse2_Text_MensajeWailmer, MSGBOX_DEFAULT
	givemon SPECIES_WAILMER, 50, ITEM_WATER_GEM
	waitfanfare  
	release
	end 



LakeofRageHouse2_Text_TakeWailmer:
	.string "Throughout all my journeys, I have\n"
	.string "never witnessed a POKÉMON as colossal\l"
	.string "as this one traversing the oceans.$"


LakeofRageHouse2_Text_TakeWailmer2:
	.string "Here, take it, I want you to meet him\n"
	.string "too. Here you go, its pre-evolution has\l"
	.string "already the size of an adult LAPRAS!$"


LakeofRageHouse2_Text_MensajeWailmer:
	.string "YOU OBTAINED A LV.50 WAILMER!$"

LakeofRageHouse2_Text_1:
	.string "Witnessing a WAILORD surface, glide\n"
	.string "through the air for a few seconds, and\l"
	.string "then use SPLASH as it dives back into\l"
	.string "the sea is quite a spectacle.$"

