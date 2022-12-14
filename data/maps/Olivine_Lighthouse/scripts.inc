Olivine_Lighthouse_MapScripts::
	.byte 0

OliivineLighthouse1::
end



OliivineLighthouse2::
end



OliivineLighthouse3::
end



OliivineLighthouse4::
lock     
faceplayer     
msgbox OlivineCity_LightHouse_Text_4, MSGBOX_DEFAULT
release     
end

OlivineCity_LightHouse_Text_4:
.string "Los CHINCHOU fueron los primeros\n"
.string "POKÉMON en servir como guía a los\l"
.string "marineros. Este FARO se construyó\l"
.string "en honor a ellos.$"



OliivineLighthouse5::
end



OliivineLighthouse6::
lock     
faceplayer     
msgbox OlivineCity_LightHouse_Text_6, MSGBOX_DEFAULT
release     
end

OlivineCity_LightHouse_Text_6:
.string "NOCTOWL es un POKÉMON común entre\n"
.string "los marineros de JOHTO, su gran\l"
.string "sentido de la orientación y visión\l"
.string "nocturna nos es de gran ayuda.$"



OliivineLighthouse7::
end



OliivineLighthouse8::
end



OliivineLighthouse9::
lock     
faceplayer     
msgbox OlivineCity_LightHouse_Text_9, MSGBOX_DEFAULT
release     
end

OlivineCity_LightHouse_Text_9:
.string "Me encantaría poder ver en persona\n"
.string "al poderoso POKÉMON que ilumina el\l"
.string "FARO, pero no sé cómo subir hasta\l"
.string "arriba…$"



OliivineLighthouse10::
end



OliivineLighthouse11::
end



OliivineLighthouse12::
end



OliivineLighthouse13::
lock     
faceplayer     
msgbox OlivineCity_LightHouse_Text_13, MSGBOX_DEFAULT
release     
end

OlivineCity_LightHouse_Text_13:
.string "La ruta marítima OLIVO-TRIGAL\n"
.string "está llena de rocas, lo que\l"
.string "la hace innavegable. Si no, hace\l"
.string "tiempo que TRIGAL hubiera\l"
.string "dispuesto un enorme puerto para\l"
.string "ampliar aún más sus\l"
.string "conexiones.$"



OliivineLighthouse14::
end



OliivineLighthouse15::
end



OliivineLighthouse16::
end



OliivineLighthouse17::
end



OliivineLighthouse18::
end



OliivineLighthouse19::
end



OliivineLighthouse20::
end



OliivineLighthouse_EventScript_Marinero::
	trainerbattle_single TRAINER_CHANDLER, OliivineLighthouse_Text_MarineroIntro, OliivineLighthouse_Text_MarineroDefeated
	msgbox OliivineLighthouse_Text_MarineroPostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Caballero::
	trainerbattle_single TRAINER_KALEB, OliivineLighthouse_Text_CaballeroIntro, OliivineLighthouse_Text_CaballeroDefeated
	msgbox OliivineLighthouse_Text_CaballeroPostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Chico::
	trainerbattle_single TRAINER_JOSEPH, OliivineLighthouse_Text_ChicoIntro, OliivineLighthouse_Text_ChicoDefeated
	msgbox OliivineLighthouse_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Caballero2::
	trainerbattle_single TRAINER_ALYSSA, OliivineLighthouse_Text_Caballero2Intro, OliivineLighthouse_Text_Caballero2Defeated
	msgbox OliivineLighthouse_Text_Caballero2PostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Marinero2::
	trainerbattle_single TRAINER_MARCOS, OliivineLighthouse_Text_Marinero2Intro, OliivineLighthouse_Text_Marinero2Defeated
	msgbox OliivineLighthouse_Text_Marinero2PostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Necio::
	trainerbattle_single TRAINER_RHETT, OliivineLighthouse_Text_NecioIntro, OliivineLighthouse_Text_NecioDefeated
	msgbox OliivineLighthouse_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Marinero3::
	trainerbattle_single TRAINER_TYRON, OliivineLighthouse_Text_Marinero3Intro, OliivineLighthouse_Text_Marinero3Defeated
	msgbox OliivineLighthouse_Text_Marinero3PostBattle, MSGBOX_AUTOCLOSE
	end
