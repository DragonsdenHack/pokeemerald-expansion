Route51_MapScripts::
	.byte 0

Route51_1::
end



Route51_2::
lock     
faceplayer     
msgbox Route51_Text_2, MSGBOX_DEFAULT
release     
end

Route51_Text_2:
.string "Siento que ya estuve antes en este\n"
.string "lugar…en un sueño…$"



Route51_3::
end



Route51_4::
end



Route51_EventScript_Pescador::
	trainerbattle_single TRAINER_BRAWLY_2, Route51_Text_PescadorIntro, Route51_Text_PescadorDefeated
	msgbox Route51_Text_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route51_EventScript_Pescador2::
	trainerbattle_single TRAINER_BRAWLY_3, Route51_Text_Pescador2Intro, Route51_Text_Pescador2Defeated
	msgbox Route51_Text_Pescador2PostBattle, MSGBOX_AUTOCLOSE
	end
