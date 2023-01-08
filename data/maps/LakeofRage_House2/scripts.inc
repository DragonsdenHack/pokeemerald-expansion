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
.string "En todos mis viajes, jamás vi un\n"
	.string "POKÉMON tan enorme surcar los\l"
	.string "mares.$"



LakeofRageHouse2_Text_TakeWailmer2:
	.string "Ten, quiero que tú también lo\n"
	.string "conozcas. Aquí tienes, ¡su\l"
	.string "preevolución es ya del tamaño de\l"
	.string "un LAPRAS adulto!$"



LakeofRageHouse2_Text_MensajeWailmer:
.string "¡OBTUVISTE UN WAILMER AL NV.50!$"


LakeofRageHouse2_Text_1:
    .string "Ver a un WAILORD salir a flote,\n"
	.string "planear en el aire durante unos\l"
	.string "segundos y después usar SALPICAR\l"
	.string "mientras se zambulle de nuevo en\l"
	.string "el mar es todo un espectáculo.$"
