Goldenrod_BikeShop_MapScripts::
	.byte 0

BikeShop1::
lock     
faceplayer     
msgbox Goldenrod_bikeshop_Text_1, MSGBOX_DEFAULT
release     
end

Goldenrod_bikeshop_Text_1:
	.string "Bikes? I'm sorry sir, we just opened and\n"
	.string "we don't have a lot of inventory. For now\l"
	.string "we only sell motorcycles.$"



BikeShop2::
lock     
faceplayer     
msgbox Goldenrod_bikeshop_Text_2, MSGBOX_DEFAULT
release     
end

Goldenrod_bikeshop_Text_2:
	.string "I hope they open a CYCLING ROAD in\n"
	.string "JOHTO, can you imagine?$"



BikeShop3::
lock     
faceplayer     
msgbox Goldenrod_bikeshop_Text_3, MSGBOX_DEFAULT
release     
end

Goldenrod_bikeshop_Text_3:
	.string "Jah! From here straight to KIN ISLAND\n"
	.string "to cause trouble! Of course!$"
