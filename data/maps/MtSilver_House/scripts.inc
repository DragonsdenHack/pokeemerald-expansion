MtSilver_House_MapScripts::
	.byte 0

MtSilverHouse1::
end



MtSilverHouseDocumento_100::
msgbox MtSilverHouseDocumento_Text_100, MSGBOX_SIGN   
end

MtSilverHouseDocumento_Text_100:
.string "JOHTO POKÉMON LEAGUE, 1978.\p"
	.string "CHAMPION'S TEAM:\p"
	.string "- CROBAT\n"
	.string "- HERACROSS\l"
	.string "- TAUROS\l"
	.string "- MAMOSWINE\l"
	.string "- URSALUNA\l"
	.string "- DARMANITAN$"



MtSilverHouse_EventScript_ReceiveDarumaka::
    lock
    faceplayer
	checkmoncatch SPECIES_DARUMAKA
	goto_if_eq VAR_RESULT, FALSE, MtSilverHouse_EventScript_TakeDarumaka 
	msgbox MtSilverHouse_Text_1, MSGBOX_DEFAULT
	release
	end



MtSilverHouse_EventScript_TakeDarumaka::
    msgbox MtSilverHouse_Text_TakeDarumaka MSGBOX_DEFAULT
	msgbox MtSilverHouse_Text_TakeDarumaka2 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox MtSilverHouse_Text_MensajeDarumaka, MSGBOX_DEFAULT
	givemon SPECIES_DARUMAKA, 15, ITEM_FIRE_GEM
	waitfanfare  
	release
	end 



MtSilverHouse_Text_TakeDarumaka:
	.string "My POKÉMON's sheer strength and\n"
	.string "relentless offensive strategy led me\l"
	.string "to victory as a CHAMPION, attacking\l"
	.string "without hesitation to endure any\l"
	.string "damage.$"

MtSilverHouse_Text_TakeDarumaka2:
	.string "Among all my POKÉMON, there was one\n"
	.string "that pushed that fighting style to the\l"
	.string "extreme like no other, recently I had\l"
	.string "several offspring from it, would you\l"
	.string "like to keep one? Here!$"

MtSilverHouse_Text_MensajeDarumaka:
.string "YOU OBTAINED A DARUMAKA AT LV.25!$"

MtSilverHouse_Text_1:
	.string "The FLARE BLITZ of a well-trained\n"
	.string "DARMANITAN is the most devastating\l"
	.string "move I know, TAUROS's charging power is\l"
	.string "a joke in comparison.$"
