Route11_MapScripts::
	.byte 0

Route11_1::
lock     
faceplayer     
msgbox Route11_Text_1, MSGBOX_DEFAULT
release     
end

Route11_Text_1:
.string "Los pasos hacia RUTA 11 y\n"
.string "CUEVA DIGLETT están cortados\l"
.string "debido a obras de reparación. Date\l"
.string "media vuelta, ROCKET, antes de\l"
.string "darnos la excusa perfecta para\l"
.string "detenerte.$"



Route11_2::
lock     
faceplayer     
msgbox Route11_Text_2, MSGBOX_DEFAULT
release     
end

Route11_Text_2:
.string "Los pasos hacia RUTA 11 y\n"
.string "CUEVA DIGLETT están cortados\l"
.string "debido a obras de reparación. Date\l"
.string "media vuelta, ROCKET, antes de\l"
.string "darnos la excusa perfecta para\l"
.string "detenerte.$"



Route11_3::
lock     
faceplayer     
msgbox Route11_Text_3, MSGBOX_DEFAULT
release     
end

Route11_Text_3:
.string "Los pasos hacia RUTA 11 y\n"
.string "CUEVA DIGLETT están cortados\l"
.string "debido a obras de reparación. Date\l"
.string "media vuelta, ROCKET, antes de\l"
.string "darnos la excusa perfecta para\l"
.string "detenerte.$"


Route11_4::
end


Route11_5::
end

Route11_6::
end

Route11_7::
end

Route11_8::
end

Route11_9::
end

Route11_10::
end

Route11_11::
end

Route11_12::
end

Route11_13::
end

Route11_14::
end

Route11_15::
end

Route11_EventScript_Anciano::
	trainerbattle_single TRAINER_WALTER_4, Route11_Text_AncianoIntro, Route11_Text_AncianoDefeated
	msgbox Route11_Text_AncianoPostBattle, MSGBOX_AUTOCLOSE
	end



Route11_EventScript_Chico::
	trainerbattle_single TRAINER_MICHELLE, Route11_Text_ChicoIntro, Route11_Text_ChicoDefeated
	msgbox Route11_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



Route11_EventScript_Chico2::
	trainerbattle_single TRAINER_BROOKE_2, Route11_Text_Chico2Intro, Route11_Text_Chico2Defeated
	msgbox Route11_Text_Chico2PostBattle, MSGBOX_AUTOCLOSE
	end



Route11_EventScript_Chico3::
	trainerbattle_single TRAINER_CAROLINE, Route11_Text_Chico3Intro, Route11_Text_Chico3Defeated
	msgbox Route11_Text_Chico3PostBattle, MSGBOX_AUTOCLOSE
	end



Route11_EventScript_Mecanico::
	trainerbattle_single TRAINER_BRENT, Route11_Text_MecanicoIntro, Route11_Text_MecanicoDefeated
	msgbox Route11_Text_MecanicoPostBattle, MSGBOX_AUTOCLOSE
	end



Route11_EventScript_Anciano2::
	trainerbattle_single TRAINER_WALTER_5, Route11_Text_Anciano2Intro, Route11_Text_Anciano2Defeated
	msgbox Route11_Text_Anciano2PostBattle, MSGBOX_AUTOCLOSE
	end



Route11_EventScript_Mecanico2::
	trainerbattle_single TRAINER_ETHAN_5, Route11_Text_Mecanico2Intro, Route11_Text_Mecanico2Defeated
	msgbox Route11_Text_Mecanico2PostBattle, MSGBOX_AUTOCLOSE
	end



Route11_EventScript_Anciano3::
	trainerbattle_single TRAINER_PHOEBE, Route11_Text_Anciano3Intro, Route11_Text_Anciano3Defeated
	msgbox Route11_Text_Anciano3PostBattle, MSGBOX_AUTOCLOSE
	end



Route11_EventScript_Chico4::
	trainerbattle_single TRAINER_JULIE, Route11_Text_Chico4Intro, Route11_Text_Chico4Defeated
	msgbox Route11_Text_Chico4PostBattle, MSGBOX_AUTOCLOSE
	end



Route11_EventScript_Anciano4::
	trainerbattle_single TRAINER_SIDNEY, Route11_Text_Anciano4Intro, Route11_Text_Anciano4Defeated
	msgbox Route11_Text_Anciano4PostBattle, MSGBOX_AUTOCLOSE
	end



Route11Documento_100::
msgbox Route11Documento_Text_100, MSGBOX_SIGN   
end

Route11Documento_Text_100:
	.string "CUEVA DIGGLET$"
