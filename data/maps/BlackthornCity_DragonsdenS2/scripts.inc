BlackthornCity_DragonsdenS2_MapScripts::
	.byte 0

DragonsdenS2_1::
end



DragonsdenS2_2::
end



DragonsdenS2_3::
end



DragonsdenS2_4::
end


DragonsdenS2_EventScript_Guay::
	trainerbattle_single TRAINER_VANESSA, DragonsdenS2_Text_GuayIntro, DragonsdenS2_Text_GuayDefeated
	msgbox DragonsdenS2_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end



DragonsdenS2_EventScript_Guay2::
	trainerbattle_single TRAINER_JERRY_2, DragonsdenS2_Text_Guay2Intro, DragonsdenS2_Text_Guay2Defeated
	msgbox DragonsdenS2_Text_Guay2PostBattle, MSGBOX_AUTOCLOSE
	end
