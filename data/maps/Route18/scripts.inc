Route18_MapScripts::
	.byte 0

Route18_1::
end

Route18_2::
end

Route18_3::
end



Route18_EventScript_Ornitologo::
	trainerbattle_single TRAINER_TIMOTHY_2, Route18_Text_OrnitologoIntro, Route18_Text_OrnitologoDefeated
	msgbox Route18_OrnitologoPostBattle, MSGBOX_AUTOCLOSE
	end



Route18_EventScript_Ornitologo2::
	trainerbattle_single TRAINER_TIMOTHY_3, Route18_Text_Ornitologo2Intro, Route18_Text_Ornitologo2Defeated
	msgbox Route18_Ornitologo2PostBattle, MSGBOX_AUTOCLOSE
	end



Route18_EventScript_Ornitologo3::
	trainerbattle_single TRAINER_TIMOTHY_4, Route18_Text_Ornitologo3Intro, Route18_Text_Ornitologo3Defeated
	msgbox Route18_Ornitologo3PostBattle, MSGBOX_AUTOCLOSE
	end
