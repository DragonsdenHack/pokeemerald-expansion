LakeofRage_MapScripts::
	.byte 0

LakeofRage2::
end



LakeofRage4::
end



LakeofRage6::
end



LakeofRage8::
lock     
faceplayer     
msgbox LakeofRage_Text_8, MSGBOX_DEFAULT
release     
end

LakeofRage_Text_8:
.string "Ese GURÚ de KANTO, que vive en\n"
.string "FUCSIA, lo único que hizo fue\l"
.string "capturar 3 GYARADOS aquí, cuando\l"
.string "había a montones, y mudarse a otra\l"
.string "región donde escasean. Ahora vive\l"
.string "de la fama que esos 3 GYARADOS le\l"
.string "dieron.$"



LakeofRage9::
lock     
faceplayer     
msgbox LakeofRage_Text_9, MSGBOX_DEFAULT
release     
end

LakeofRage_Text_9:
.string "¿AGUA/VOLADOR GYARADOS?\n"
.string "¿En qué mundo vives?\l"
.string "¡Como si GYARADOS pudiera volar!$"



LakeofRage10::
end



LakeofRage11::
end



LakeofRage12::
end



LakeofRage13::
end



LakeofRage14::
end



LakeofRage15::
end



LakeofRage_EventScript_Pescador::
	trainerbattle_single TRAINER_JOCELYN, LakeofRage_Text_PescadorIntro, LakeofRage_Text_PescadorDefeated
	msgbox LakeofRage_Text_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end



LakeofRage_EventScript_Sabio::
	trainerbattle_single TRAINER_ROBERT_2, LakeofRage_Text_SabioIntro, LakeofRage_Text_SabioDefeated
	msgbox LakeofRage_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



LakeofRage_EventScript_Guay::
	trainerbattle_single TRAINER_CHESTER, LakeofRage_Text_GuayIntro, LakeofRage_Text_GuayDefeated
	msgbox LakeofRage_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end



LakeofRageDocumento_100::
msgbox LakeofRageDocumento_Text_100, MSGBOX_SIGN   
end

LakeofRageDocumento_Text_100:
	.string "LAGO DE LA FURIA, conocido como\n"
	.string "LAGO DE IKARY.$"



LakeofRageDocumento_101::
msgbox LakeofRageDocumento_Text_101, MSGBOX_SIGN   
end

LakeofRageDocumento_Text_101:
	.string "CASA DEL GURÚ PESCADOR$"
