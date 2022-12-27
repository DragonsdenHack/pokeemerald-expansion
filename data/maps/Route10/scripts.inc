Route10_MapScripts::
	.byte 0

Route10_1::
end



Route10_2::
end


Route10_3::
end


Route10_4::
end


Route10_5::
lock     
faceplayer     
msgbox Route5_Text_5, MSGBOX_DEFAULT
release     
end

Route5_Text_5:
.string "¿Tienes idea de lo que dices?\n"
.string "¡No hay ningún KANGASKHAN en este\l"
.string "lugar!\l"
.string "¿Sabes lo que ello implicaría?\l"
.string "¡La ZONA SAFARI cerraría, y no\l"
.string "solo eso, la gente se pondría a\l"
.string "investigar de dónde ha salido, un\l"
.string "POKÉMON así no sale de la nada!$"



Route10_6::
lock     
faceplayer     
msgbox Route5_Text_6, MSGBOX_DEFAULT
release     
end

Route5_Text_6:
.string "¡Te digo que he visto un\n"
.string "KANGASKHAN aquí dentro!$"


Route10_7::
lock     
faceplayer     
msgbox Route5_Text_7, MSGBOX_DEFAULT
release     
end

Route5_Text_7:
.string "La CENTRAL ENERGÍA ha sido\n"
.string "considerada patrimonio de nuestra\l"
.string "región, a partir de ahora será\l"
.string "protegida por las fuerzas del\l"
.string "orden y no estará abierta a la\l"
.string "exploración. Más te vale no\l"
.string "intentar ninguna estupidez, o el\l"
.string "peso de la justicia se cernirá\l"
.string "sobre ti.$"



Route10_8::
lock     
faceplayer     
msgbox Route5_Text_8, MSGBOX_DEFAULT
release     
end

Route5_Text_8:
.string "La CENTRAL ENERGÍA ha sido\n"
.string "considerada patrimonio de nuestra\l"
.string "región, a partir de ahora será\l"
.string "protegida por las fuerzas del\l"
.string "orden y no estará abierta a la\l"
.string "exploración. Más te vale no\l"
.string "intentar ninguna estupidez, o el\l"
.string "peso de la justicia se cernirá\l"
.string "sobre ti.$"


Route10_9::
end


Route10_10::
end


Route10_11::
end


Route10_12::
end


Route10_13::
end



Route10_EventScript_Chica::
	trainerbattle_single TRAINER_MATTHEW, Route10_Text_ChicaIntro, Route10_Text_ChicaDefeated
	msgbox Route10_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Hiker::
	trainerbattle_single TRAINER_BARRY, Route10_Text_HikerIntro, Route10_Text_HikerDefeated
	msgbox Route10_Text_HikerPostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Necio::
	trainerbattle_single TRAINER_DEAN, Route10_Text_NecioIntro, Route10_Text_NecioDefeated
	msgbox Route10_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Hiker2::
	trainerbattle_single TRAINER_DAISUKE, Route10_Text_Hiker2Intro, Route10_Text_Hiker2Defeated
	msgbox Route10_Text_Hiker2PostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Hiker3::
	trainerbattle_single TRAINER_YUJI, Route10_Text_Hiker3Intro, Route10_Text_Hiker3Defeated
	msgbox Route10_Text_Hiker3PostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Chica2::
	trainerbattle_single TRAINER_DAVID, Route10_Text_Chica2Intro, Route10_Text_Chica2Defeated
	msgbox Route10_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



Route10Documento_100::
msgbox Route10Documento_Text_100, MSGBOX_SIGN   
end

Route10Documento_Text_100:
	.string "TÚNEL ROCA\n"
	.string "Desvío a PUEBLO LAVANDA$"



Route10Documento_101::
msgbox Route10Documento_Text_101, MSGBOX_SIGN   
end

Route10Documento_Text_101:
.string "CENTRAL ENERGÍA$"



Route10Documento_102::
msgbox Route10Documento_Text_102, MSGBOX_SIGN   
end

Route10Documento_Text_102:
.string "TÚNEL ROCA$"
