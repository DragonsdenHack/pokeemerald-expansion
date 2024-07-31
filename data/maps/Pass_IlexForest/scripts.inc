Pass_IlexForest_MapScripts::
	.byte 0

PassIlexForest1::
lock     
faceplayer     
msgbox PassIlexForest_Text_1, MSGBOX_DEFAULT
release     
end

PassIlexForest_Text_1:
	.string "We take care of this large forest and\n"
	.string "keep everything in order. By your looks,\l"
	.string "you seem like someone influential and\l"
	.string "powerful, but success hasn't gone to\l"
	.string "your head. You shouldn't cause any\l"
	.string "trouble. Enjoy the ILEX FOREST!$"



PassIlexForest2::
lock     
faceplayer     
msgbox PassIlexForest_Text_2, MSGBOX_DEFAULT
release     
end

PassIlexForest_Text_2:
	.string "If you carry a lighter with you, you'd\n"
	.string "better keep it safe. Or you'll anger the\l"
	.string "ILEX FOREST's guardian!$"



PassIlexForest3::
lock     
faceplayer     
msgbox PassIlexForest_Text_3, MSGBOX_DEFAULT
release     
end

PassIlexForest_Text_3:
	.string "ILEX FOREST is very big. Be careful!\n"
	.string "Don't get lost!$"
