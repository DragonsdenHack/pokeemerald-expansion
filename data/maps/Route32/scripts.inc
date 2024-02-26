Route32_MapScripts::
	.byte 0

Route32_1::
lock          
msgbox Route32_Text_1, MSGBOX_DEFAULT
release     
end

Route32_Text_1:
.string "Damn…\n"
.string "I hope they open the ROUTE 26\l"
.string "borders soon…$"



Route32_2::
lock          
msgbox Route32_Text_2, MSGBOX_DEFAULT
release     
end

Route32_Text_2:
	.string "I've already mentioned this, but\n"
	.string "RHYHORN are exclusive to KANTO. You'll\l"
	.string "have to wait for the political\l"
	.string "conditions to improve before you can\l"
	.string "capture one there.$"



Route32_3::
end



Route32_4::
lock     
faceplayer     
msgbox Route32_Text_4, MSGBOX_DEFAULT
release     
end

Route32_Text_4:
	.string "SANDSLASH? Here we have DONPHAN, which\n"
	.string "is much stronger and resistant!$"



Route32_5::
end



Route32_6::
end



Route32_7::
lock     
faceplayer     
msgbox Route32_Text_7, MSGBOX_DEFAULT
release     
end

Route32_Text_7:
	.string "A POKÉMON CENTER around here? I heard\n"
	.string "they're planning to build one soon. It's\l"
	.string "really needed. Anyway, the girl further\l"
	.string "down is very kind and will heal your\l"
	.string "POKÉMON.$"



Route32_8::
end



Route32_9::
end



Route32_10::
end



Route32_11::
end



Route32_12::
end



Route32_13::
end



Route32_14::
end



Route32_15::
end



Route32_16::
end



Route32_17::
end



Route32_18::
end



Route32_EventScript_Chica::
	trainerbattle_single TRAINER_TRENT_5, Route32_Text_ChicaIntro, Route32_Text_ChicaDefeated
	msgbox Route32_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route32_EventScript_Chico::
	trainerbattle_single TRAINER_TRENT_4, Route32_Text_ChicoIntro, Route32_Text_ChicoDefeated
	msgbox Route32_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



Route32_EventScript_Pescador::
	trainerbattle_single TRAINER_DEZ_AND_LUKE, Route32_Text_PescadorIntro, Route32_Text_PescadorDefeated
	msgbox Route32_Text_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route32_EventScript_Pescador2::
	trainerbattle_single TRAINER_LEA_AND_JED, Route32_Text_Pescador2Intro, Route32_Text_Pescador2Defeated
	msgbox Route32_Text_Pescador2PostBattle, MSGBOX_AUTOCLOSE
	end



Route32_EventScript_Pescador3::
	trainerbattle_single TRAINER_KIRA_AND_DAN_1, Route32_Text_Pescador3Intro, Route32_Text_Pescador3Defeated
	msgbox Route32_Text_Pescador3PostBattle, MSGBOX_AUTOCLOSE
	end



Route32_EventScript_Mecanico::
	trainerbattle_single TRAINER_KIRA_AND_DAN_3, Route32_Text_MecanicoIntro, Route32_Text_MecanicoDefeated
	msgbox Route32_Text_MecanicoPostBattle, MSGBOX_AUTOCLOSE
	end



Route32_EventScript_Guay::
	trainerbattle_single TRAINER_KIRA_AND_DAN_2, Route32_Text_GuayIntro, Route32_Text_GuayDefeated
	msgbox Route32_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end



Route32Documento_100::
msgbox Route32Documento_Text_100, MSGBOX_SIGN   
end

Route32Documento_Text_100:
	.string "ROUTE 32\n"
	.string "VIOLET CITY - AZALEA TOWN$"



Route32Documento_101::
msgbox Route32Documento_Text_101, MSGBOX_SIGN   
end

Route32Documento_Text_101:
	.string "UNION CAVE AHEAD$"

Curacion_Route32::
lock
faceplayer
msgbox Curacion_Curacion_Curacion_Route32_Texto_1 MSGBOX_AUTOCLOSE
fadescreen 1
playse SE_USE_ITEM
special HealPlayerParty
delay 20
fadescreen 0
msgbox Curacion_Centros_Johto_Texto_2 MSGBOX_AUTOCLOSE
release
end

Curacion_Curacion_Curacion_Route32_Texto_1:
	.string "Your POKÉMON seems very tired, let me\n"
	.string "heal them…$"

Curacion_Centros_Johto_Texto_2:
	.string "They're glowing with vitality now! Just\n"
	.string "like the vegetation here!$"

