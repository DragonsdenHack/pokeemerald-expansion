DottedHole_B4F_MapScripts::
	.byte 0

DottedHoleB4F1::
end



DottedHoleB4F2::
end



DottedHoleB4F3::
end

DottedHole_B4F_EventScript_Aqua_1::
	trainerbattle_single TRAINER_SIENNA, DottedHole_B4F_Text_Aqua_1Intro, DottedHole_B4F_Text_Aqua_1Defeated
	msgbox DottedHole_B4F_Aqua_1PostBattle, MSGBOX_AUTOCLOSE
	end

DottedHole_B4F_EventScript_Aqua_2::
	trainerbattle_single TRAINER_DEBRA, DottedHole_B4F_Text_Aqua_2Intro, DottedHole_B4F_Text_Aqua_2Defeated
	msgbox DottedHole_B4F_Aqua_2PostBattle, MSGBOX_AUTOCLOSE
	end

DottedHole_B4F_EventScript_Aqua_3::
	trainerbattle_single TRAINER_LINDA, DottedHole_B4F_Text_Aqua_3Intro, DottedHole_B4F_Text_Aqua_3Defeated
	msgbox DottedHole_B4F_Aqua_3PostBattle, MSGBOX_AUTOCLOSE
	end
