NationalPark_MapScripts::
	.byte 0

NationalPark1::
end



NationalPark2::
end



NationalPark3::
end



NationalPark4::
end



NationalPark5::
end



NationalPark6::
lock     
faceplayer     
msgbox NationalPark_Text_6, MSGBOX_DEFAULT
release     
end

NationalPark_Text_6:
.string "Estoy harto de andar…\n"
.string "Deberían de poner unos cuantos\l"
.string "bancos por esta zona…$"



NationalPark7::
end



NationalPark8::
lock     
faceplayer     
msgbox NationalPark_Text_8, MSGBOX_DEFAULT
release     
end

NationalPark_Text_8:
.string "A mi querido NIDORAN le encanta\n"
.string "pasear por aquí.\l"
.string "¡Es tan encantador!$"



NationalPark9::
end



NationalPark10::
lock     
faceplayer     
msgbox NationalPark_Text_10, MSGBOX_DEFAULT
release     
end

NationalPark_Text_10:
.string "Me encanta pasear por aquí, este\n"
.string "lugar es una gran fuente de\l"
.string "inspiración para mi.$"



NationalPark11::
end



NationalPark12::
lock     
faceplayer     
msgbox NationalPark_Text_12, MSGBOX_DEFAULT
release     
end

NationalPark_Text_12:
.string "Si miras la hierba alta desde\n"
.string "arriba, ¡parece una POKÉ BALL!$"



NationalPark13::
end



NationalPark_EventScript_Cazabichos::
	trainerbattle_single TRAINER_KIM_AND_IRIS, NationalPark_Text_CazabichosIntro, NationalPark_Text_CazabichosDefeated
	msgbox NationalPark_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end



NationalPark_EventScript_Guarda::
	trainerbattle_single TRAINER_TORI_AND_TIA, NationalPark_Text_GuardaIntro, NationalPark_Text_GuardaDefeated
	msgbox NationalPark_Text_GuardaPostBattle, MSGBOX_AUTOCLOSE
	end



NationalPark_EventScript_Chico::
	trainerbattle_single TRAINER_TYRA_AND_IVY, NationalPark_Text_ChicoIntro, NationalPark_Text_ChicoDefeated
	msgbox NationalPark_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



NationalParkDocumento_100::
msgbox NationalParkDocumento_Text_100, MSGBOX_SIGN   
end

NationalParkDocumento_Text_100:
	.string "PLAZA DEL DESCANSO\n"
	.string "PARQUE NACIONAL$"



NationalParkDocumento_101::
msgbox NationalParkDocumento_Text_101, MSGBOX_SIGN   
end

NationalParkDocumento_Text_101:
	.string "PARQUE NACIONAL\n"
	.string "Lugar del que brotan las más\l"
	.string "bellas y brillantes ideas.$"



NationalParkDocumento_102::
msgbox NationalParkDocumento_Text_102, MSGBOX_SIGN   
end

NationalParkDocumento_Text_102:
	.string "En honor a todos los TIPO BICHO de\n"
	.string "KANTO y JOHTO.$"
