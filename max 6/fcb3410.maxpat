{
	"patcher" : 	{
		"fileversion" : 1,
		"appversion" : 		{
			"major" : 6,
			"minor" : 0,
			"revision" : 8
		}
,
		"rect" : [ 0.0, 44.0, 259.0, 759.0 ],
		"bgcolor" : [ 0.142748, 0.142748, 0.142748, 1.0 ],
		"bglocked" : 0,
		"openinpresentation" : 1,
		"default_fontsize" : 12.0,
		"default_fontface" : 0,
		"default_fontname" : "Arial",
		"gridonopen" : 2,
		"gridsize" : [ 15.0, 15.0 ],
		"gridsnaponopen" : 0,
		"statusbarvisible" : 2,
		"toolbarvisible" : 0,
		"boxanimatetime" : 200,
		"imprint" : 0,
		"enablehscroll" : 0,
		"enablevscroll" : 0,
		"devicewidth" : 0.0,
		"description" : "",
		"digest" : "",
		"tags" : "",
		"boxes" : [ 			{
				"box" : 				{
					"color" : [ 0.272319, 0.601478, 0.188169, 1.0 ],
					"fontname" : "Arial",
					"fontsize" : 14.0,
					"id" : "obj-39",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patcher" : 					{
						"fileversion" : 1,
						"appversion" : 						{
							"major" : 6,
							"minor" : 0,
							"revision" : 8
						}
,
						"rect" : [ 0.0, 0.0, 640.0, 480.0 ],
						"bglocked" : 0,
						"openinpresentation" : 0,
						"default_fontsize" : 12.0,
						"default_fontface" : 0,
						"default_fontname" : "Arial",
						"gridonopen" : 0,
						"gridsize" : [ 15.0, 15.0 ],
						"gridsnaponopen" : 0,
						"statusbarvisible" : 2,
						"toolbarvisible" : 1,
						"boxanimatetime" : 200,
						"imprint" : 0,
						"enablehscroll" : 1,
						"enablevscroll" : 1,
						"devicewidth" : 0.0,
						"description" : "",
						"digest" : "",
						"tags" : "",
						"boxes" : [ 							{
								"box" : 								{
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-30",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 63.5, 349.167175, 59.0, 20.0 ],
									"text" : "tosymbol"
								}

							}
, 							{
								"box" : 								{
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-52",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "", "" ],
									"patching_rect" : [ 50.0, 100.0, 100.0, 20.0 ],
									"text" : "route /visca/from"
								}

							}
, 							{
								"box" : 								{
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-45",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 63.5, 319.0, 41.0, 20.0 ],
									"text" : "gate"
								}

							}
, 							{
								"box" : 								{
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-46",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "int" ],
									"patching_rect" : [ 63.5, 284.0, 36.0, 20.0 ],
									"text" : ">= 3"
								}

							}
, 							{
								"box" : 								{
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-47",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 2,
									"outlettype" : [ "", "" ],
									"patching_rect" : [ 50.0, 222.0, 32.5, 20.0 ],
									"text" : "t l l"
								}

							}
, 							{
								"box" : 								{
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-48",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "", "" ],
									"patching_rect" : [ 63.5, 251.0, 39.0, 20.0 ],
									"text" : "zl len"
								}

							}
, 							{
								"box" : 								{
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-49",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 2,
									"outlettype" : [ "", "" ],
									"patching_rect" : [ 50.0, 129.0, 81.0, 20.0 ],
									"text" : "t l l"
								}

							}
, 							{
								"box" : 								{
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-50",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "", "" ],
									"patching_rect" : [ 50.0, 189.0, 81.0, 20.0 ],
									"text" : "zl group"
								}

							}
, 							{
								"box" : 								{
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-51",
									"maxclass" : "newobj",
									"numinlets" : 2,
									"numoutlets" : 2,
									"outlettype" : [ "bang", "" ],
									"patching_rect" : [ 50.0, 158.0, 49.0, 20.0 ],
									"text" : "sel 255"
								}

							}
, 							{
								"box" : 								{
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-53",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 546.071411, 414.167175, 117.0, 18.0 ],
									"text" : "IF Clear (braodcast)"
								}

							}
, 							{
								"box" : 								{
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-55",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 465.642883, 430.167175, 251.0, 18.0 ],
									"text" : "ACK is not returned for the inquiry command."
								}

							}
, 							{
								"box" : 								{
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-56",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 385.214294, 455.167175, 155.0, 18.0 ],
									"text" : "Command Not Executable)"
								}

							}
, 							{
								"box" : 								{
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-22",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 304.785706, 430.167175, 128.0, 18.0 ],
									"text" : "Command Buffer Full)"
								}

							}
, 							{
								"box" : 								{
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-23",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 227.785706, 430.167175, 77.0, 18.0 ],
									"text" : "Syntax Error"
								}

							}
, 							{
								"box" : 								{
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-24",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 145.642853, 455.167175, 135.0, 18.0 ],
									"text" : "compeltion (completed)"
								}

							}
, 							{
								"box" : 								{
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-26",
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 63.5, 481.167175, 95.0, 18.0 ],
									"text" : "ACK (accepted)"
								}

							}
, 							{
								"box" : 								{
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-63",
									"maxclass" : "newobj",
									"numinlets" : 1,
									"numoutlets" : 0,
									"patching_rect" : [ 583.833252, 554.0, 113.5, 20.0 ],
									"text" : "print VISCA"
								}

							}
, 							{
								"box" : 								{
									"fontname" : "Arial",
									"fontsize" : 12.0,
									"id" : "obj-65",
									"maxclass" : "newobj",
									"numinlets" : 8,
									"numoutlets" : 8,
									"outlettype" : [ "", "", "", "", "", "", "", "" ],
									"patching_rect" : [ 63.5, 379.167175, 600.0, 20.0 ],
									"text" : "route \"144 65 255\" \"144 81 255\" \"144 96 2 255\" \"144 96 3 255\" \"144 96 65 255\" \"144 80 2 255\" \"136 1 0 1 255\""
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-38",
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 50.0, 40.0, 25.0, 25.0 ]
								}

							}
 ],
						"lines" : [ 							{
								"patchline" : 								{
									"destination" : [ "obj-63", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-22", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-63", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-23", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-63", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-24", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-63", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-26", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-65", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-30", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-52", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-38", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-30", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-45", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-45", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-46", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-45", 1 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-47", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-48", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-47", 1 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-46", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-48", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-50", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"midpoints" : [ 121.5, 183.5, 59.5, 183.5 ],
									"source" : [ "obj-49", 1 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-51", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-49", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-47", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"midpoints" : [ 59.5, 210.0, 59.5, 210.0 ],
									"source" : [ "obj-50", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-50", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-51", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-49", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-52", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-63", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-53", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-63", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-55", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-63", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-56", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-22", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-65", 3 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-23", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-65", 2 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-24", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-65", 1 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-26", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-65", 0 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-53", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-65", 6 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-55", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-65", 5 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-56", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-65", 4 ]
								}

							}
, 							{
								"patchline" : 								{
									"destination" : [ "obj-63", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-65", 7 ]
								}

							}
 ]
					}
,
					"patching_rect" : [ 296.5, 384.832825, 107.0, 22.0 ],
					"saved_object_attributes" : 					{
						"default_fontface" : 0,
						"default_fontname" : "Arial",
						"default_fontsize" : 12.0,
						"description" : "",
						"digest" : "",
						"fontface" : 0,
						"fontname" : "Arial",
						"fontsize" : 12.0,
						"globalpatchername" : "",
						"tags" : ""
					}
,
					"text" : "p print-answers"
				}

			}
, 			{
				"box" : 				{
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-57",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 2,
					"outlettype" : [ "", "" ],
					"patching_rect" : [ 296.5, 452.832825, 100.0, 17.0 ],
					"text" : "substitute bang bong"
				}

			}
, 			{
				"box" : 				{
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-58",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 2,
					"outlettype" : [ "", "" ],
					"patching_rect" : [ 296.5, 534.832825, 99.0, 17.0 ],
					"text" : "substitute bong bang"
				}

			}
, 			{
				"box" : 				{
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-59",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 2,
					"outlettype" : [ "", "" ],
					"patching_rect" : [ 296.5, 502.832825, 67.0, 17.0 ],
					"text" : "zl ecils 1"
				}

			}
, 			{
				"box" : 				{
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-60",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 403.5, 534.832825, 65.0, 17.0 ],
					"text" : "prepend send"
				}

			}
, 			{
				"box" : 				{
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-61",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 296.5, 577.832825, 45.0, 17.0 ],
					"text" : "forward"
				}

			}
, 			{
				"box" : 				{
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-62",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 2,
					"outlettype" : [ "", "" ],
					"patching_rect" : [ 296.5, 478.832825, 45.0, 17.0 ],
					"text" : "zl rot -1"
				}

			}
, 			{
				"box" : 				{
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"frgb" : 0.0,
					"id" : "obj-29",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 147.0, 22.832825, 172.0, 17.0 ],
					"presentation" : 1,
					"presentation_rect" : [ 40.0, 735.0, 172.0, 17.0 ],
					"text" : "send to arduino visca on 10.0.0.10 1000",
					"textcolor" : [ 0.896739, 0.896739, 0.896739, 1.0 ]
				}

			}
, 			{
				"box" : 				{
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"frgb" : 0.0,
					"id" : "obj-28",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 147.0, 11.832825, 174.0, 17.0 ],
					"presentation" : 1,
					"presentation_rect" : [ 40.0, 718.0, 174.0, 17.0 ],
					"text" : "listen visca feedback on UDP port 12000",
					"textcolor" : [ 0.896739, 0.896739, 0.896739, 1.0 ]
				}

			}
, 			{
				"box" : 				{
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"frgb" : 0.0,
					"id" : "obj-27",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 147.0, 0.832825, 158.0, 17.0 ],
					"presentation" : 1,
					"presentation_rect" : [ 40.0, 701.0, 158.0, 17.0 ],
					"text" : "listen commands on UDP port 14000",
					"textcolor" : [ 0.896739, 0.896739, 0.896739, 1.0 ]
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.4, 0.4, 0.8, 1.0 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-25",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 296.5, 421.832825, 95.0, 17.0 ],
					"text" : "udpreceive 14000"
				}

			}
, 			{
				"box" : 				{
					"fontname" : "Arial",
					"fontsize" : 14.0,
					"frgb" : 0.0,
					"id" : "obj-20",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 106.0, 4.832825, 41.0, 22.0 ],
					"presentation" : 1,
					"presentation_rect" : [ 106.0, 4.832825, 41.0, 22.0 ],
					"text" : "v 0.2",
					"textcolor" : [ 0.896739, 0.896739, 0.896739, 1.0 ]
				}

			}
, 			{
				"box" : 				{
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"frgb" : 0.0,
					"id" : "obj-18",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 0.0, 36.332825, 106.0, 17.0 ],
					"presentation" : 1,
					"presentation_rect" : [ 0.0, 36.332825, 106.0, 17.0 ],
					"text" : "Renaud Rubiano - 2012",
					"textcolor" : [ 0.896739, 0.896739, 0.896739, 1.0 ]
				}

			}
, 			{
				"box" : 				{
					"fontname" : "Arial",
					"fontsize" : 12.0,
					"frgb" : 0.0,
					"id" : "obj-17",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 0.0, 20.832825, 113.0, 20.0 ],
					"presentation" : 1,
					"presentation_rect" : [ 0.0, 20.832825, 113.0, 20.0 ],
					"text" : "camera fcb eh3410",
					"textcolor" : [ 0.896739, 0.896739, 0.896739, 1.0 ]
				}

			}
, 			{
				"box" : 				{
					"fontname" : "Arial",
					"fontsize" : 18.0,
					"frgb" : 0.0,
					"id" : "obj-16",
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 0.0, 1.832825, 117.0, 27.0 ],
					"presentation" : 1,
					"presentation_rect" : [ 0.0, 1.832825, 117.0, 27.0 ],
					"text" : "OSC-VISCA",
					"textcolor" : [ 0.896739, 0.896739, 0.896739, 1.0 ]
				}

			}
, 			{
				"box" : 				{
					"fontname" : "Arial",
					"fontsize" : 12.0,
					"id" : "obj-14",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 473.557434, 54.0, 108.0, 20.0 ],
					"text" : "r /visca"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.4, 0.4, 0.8, 1.0 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-19",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 473.557434, 107.5, 114.0, 17.0 ],
					"text" : "udpsend 10.0.0.10 10000"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.4, 0.4, 0.8, 1.0 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-43",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 296.5, 358.0, 95.0, 17.0 ],
					"text" : "udpreceive 12000"
				}

			}
, 			{
				"box" : 				{
					"fontname" : "Arial",
					"fontsize" : 12.0,
					"id" : "obj-5",
					"maxclass" : "message",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 110.0, 33.332825, 37.0, 18.0 ],
					"presentation" : 1,
					"presentation_rect" : [ 106.0, 33.332825, 37.0, 18.0 ],
					"text" : "open"
				}

			}
, 			{
				"box" : 				{
					"fontname" : "Arial",
					"fontsize" : 12.0,
					"id" : "obj-8",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 3,
					"outlettype" : [ "", "bang", "bang" ],
					"patching_rect" : [ 296.5, 234.0, 72.0, 20.0 ],
					"save" : [ "#N", "qlist", ";", "#X", "insert", "/visca.1/setaddress", "bang", ";", ";", "#X", "insert", "/visca.1/sw", 1, ";", ";", "#X", "insert", "/visca.1/zoom/stop", "bang", ";", ";", "#X", "insert", "/visca.1/zoom/variable/tele", 0, ";", ";", "#X", "insert", "/visca.1/zoom/variable/wide", 0, ";", ";", "#X", "insert", "/visca.1/zoom/standart", "wide", ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/focus/mode", 0, ";", ";", "#X", "insert", "/visca.1/focus/stop", "bang", ";", ";", "#X", "insert", "/visca.1/focus/variable/far", 0, ";", ";", "#X", "insert", "/visca.1/focus/variable/near", 0, ";", ";", "#X", "insert", "/visca.1/focus/standart", "near", ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus/auto/trigger", "bang", ";", ";", "#X", "insert", "/visca.1/focus/infinity", "bang", ";", ";", "#X", "insert", "/visca.1/focus/auto/sensitivity", 0, ";", ";", "#X", "insert", "/visca.1/whitebalance", "auto", ";", ";", "#X", "insert", "/visca.1/whitebalance/trig", "bang", ";", ";", "#X", "insert", "/visca.1/mode", "manual", ";", ";", "#X", "insert", "/visca.1/shutter", 6, ";", ";", "#X", "insert", "/visca.1/gain", 1, ";", ";", "#X", "insert", "/visca.1/iris", 11, ";", ";", "#X", "insert", "/visca.1/slowshutter", 0, ";", ";", "#X", "insert", "/visca.1/compensation/sw", 0, ";", ";", "#X", "insert", "/visca.1/compensation/level", 0, ";", ";", "#X", "insert", "/visca.1/auto/response", 0, ";", ";", "#X", "insert", "/visca.1/wd", 1, ";", ";", "#X", "insert", "/visca.1/aperture", 0, ";", ";", "#X", "insert", "/visca.1/hr", 1, ";", ";", "#X", "insert", "/visca.1/nr", 0, ";", ";", "#X", "insert", "/visca.1/gamma", 0, ";", ";", "#X", "insert", "/visca.1/hs", 1, ";", ";", "#X", "insert", "/visca.1/reverse", 0, ";", ";", "#X", "insert", "/visca.1/freeze", 0, ";", ";", "#X", "insert", "/visca.1/fx", 0, ";", ";", "#X", "insert", "/visca.1/flip", 0, ";", ";", "#X", "insert", "/visca.1/ir", 0, ";", ";", "#X", "insert", "/visca.1/stabilizer", 1, ";", ";", "#X", "insert", "/visca.1/chromasupress", 0, ";", ";", "#X", "insert", "/visca.1/ir/correction", 0, ";", ";", "#X", "insert", "/visca.1/sw", 1, ";", ";", "#X", "insert", "/visca.1/sw", 0, ";", ";", "#X", "insert", "/visca.1/sw", 1, ";", ";", "#X", "insert", "/visca.1/setaddress", "bang", ";", ";", "#X", "insert", "/visca.1/sw", 1, ";", ";", "#X", "insert", "/visca.1/zoom/stop", "bang", ";", ";", "#X", "insert", "/visca.1/zoom/variable/tele", 0, ";", ";", "#X", "insert", "/visca.1/zoom/variable/wide", 0, ";", ";", "#X", "insert", "/visca.1/zoom/standart", "wide", ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/focus/mode", 0, ";", ";", "#X", "insert", "/visca.1/focus/stop", "bang", ";", ";", "#X", "insert", "/visca.1/focus/variable/far", 0, ";", ";", "#X", "insert", "/visca.1/focus/variable/near", 0, ";", ";", "#X", "insert", "/visca.1/focus/standart", "near", ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus/auto/trigger", "bang", ";", ";", "#X", "insert", "/visca.1/focus/infinity", "bang", ";", ";", "#X", "insert", "/visca.1/focus/auto/sensitivity", 0, ";", ";", "#X", "insert", "/visca.1/whitebalance", "auto", ";", ";", "#X", "insert", "/visca.1/whitebalance/trig", "bang", ";", ";", "#X", "insert", "/visca.1/mode", "manual", ";", ";", "#X", "insert", "/visca.1/shutter", 6, ";", ";", "#X", "insert", "/visca.1/gain", 1, ";", ";", "#X", "insert", "/visca.1/iris", 11, ";", ";", "#X", "insert", "/visca.1/slowshutter", 0, ";", ";", "#X", "insert", "/visca.1/compensation/sw", 0, ";", ";", "#X", "insert", "/visca.1/compensation/level", 0, ";", ";", "#X", "insert", "/visca.1/auto/response", 0, ";", ";", "#X", "insert", "/visca.1/wd", 1, ";", ";", "#X", "insert", "/visca.1/aperture", 0, ";", ";", "#X", "insert", "/visca.1/hr", 1, ";", ";", "#X", "insert", "/visca.1/nr", 0, ";", ";", "#X", "insert", "/visca.1/gamma", 0, ";", ";", "#X", "insert", "/visca.1/hs", 1, ";", ";", "#X", "insert", "/visca.1/reverse", 0, ";", ";", "#X", "insert", "/visca.1/freeze", 0, ";", ";", "#X", "insert", "/visca.1/fx", 0, ";", ";", "#X", "insert", "/visca.1/flip", 0, ";", ";", "#X", "insert", "/visca.1/ir", 0, ";", ";", "#X", "insert", "/visca.1/stabilizer", 1, ";", ";", "#X", "insert", "/visca.1/chromasupress", 0, ";", ";", "#X", "insert", "/visca.1/ir/correction", 0, ";", ";", "#X", "insert", "/visca.1/wd", 0, ";", ";", "#X", "insert", "/visca.1/reverse", 1, ";", ";", "#X", "insert", "/visca.1/reverse", 0, ";", ";", "#X", "insert", "/visca.1/hr", 0, ";", ";", "#X", "insert", "/visca.1/freeze", 1, ";", ";", "#X", "insert", "/visca.1/freeze", 0, ";", ";", "#X", "insert", "/visca.1/flip", 1, ";", ";", "#X", "insert", "/visca.1/flip", 0, ";", ";", "#X", "insert", "/visca.1/flip", 1, ";", ";", "#X", "insert", "/visca.1/flip", 0, ";", ";", "#X", "insert", "/visca.1/flip", 1, ";", ";", "#X", "insert", "/visca.1/flip", 0, ";", ";", "#X", "insert", "/visca.1/flip", 1, ";", ";", "#X", "insert", "/visca.1/flip", 0, ";", ";", "#X", "insert", "/visca.1/freeze", 1, ";", ";", "#X", "insert", "/visca.1/freeze", 0, ";", ";", "#X", "insert", "/visca.1/fx", "neg", "art", ";", ";", "#X", "insert", "/visca.1/fx", "bw", ";", ";", "#X", "insert", "/visca.1/reverse", 1, ";", ";", "#X", "insert", "/visca.1/reverse", 0, ";", ";", "#X", "insert", "/visca.1/freeze", 1, ";", ";", "#X", "insert", "/visca.1/freeze", 0, ";", ";", "#X", "insert", "/visca.1/ir", 1, ";", ";", "#X", "insert", "/visca.1/ir", 0, ";", ";", "#X", "insert", "/visca.1/nr", 1, ";", ";", "#X", "insert", "/visca.1/nr", 0, ";", ";", "#X", "insert", "/visca.1/nr", 1, ";", ";", "#X", "insert", "/visca.1/nr", 0, ";", ";", "#X", "insert", "/visca.1/freeze", 1, ";", ";", "#X", "insert", "/visca.1/freeze", 0, ";", ";", "#X", "insert", "/visca.1/wd", 1, ";", ";", "#X", "insert", "/visca.1/wd", 0, ";", ";", "#X", "insert", "/visca.1/wd", 1, ";", ";", "#X", "insert", "/visca.1/zoom", 9885, ";", ";", "#X", "insert", "/visca.1/zoom", 14488, ";", ";", "#X", "insert", "/visca.1/zoom", 6364, ";", ";", "#X", "insert", "/visca.1/zoom", 6229, ";", ";", "#X", "insert", "/visca.1/zoom", 5958, ";", ";", "#X", "insert", "/visca.1/zoom", 5687, ";", ";", "#X", "insert", "/visca.1/zoom", 5145, ";", ";", "#X", "insert", "/visca.1/zoom", 5010, ";", ";", "#X", "insert", "/visca.1/zoom", 4739, ";", ";", "#X", "insert", "/visca.1/zoom", 4333, ";", ";", "#X", "insert", "/visca.1/zoom", 3927, ";", ";", "#X", "insert", "/visca.1/zoom", 3656, ";", ";", "#X", "insert", "/visca.1/zoom", 3385, ";", ";", "#X", "insert", "/visca.1/zoom", 3250, ";", ";", "#X", "insert", "/visca.1/zoom", 3114, ";", ";", "#X", "insert", "/visca.1/zoom", 2979, ";", ";", "#X", "insert", "/visca.1/zoom", 2844, ";", ";", "#X", "insert", "/visca.1/zoom", 2708, ";", ";", "#X", "insert", "/visca.1/zoom", 2573, ";", ";", "#X", "insert", "/visca.1/zoom", 2302, ";", ";", "#X", "insert", "/visca.1/zoom", 2031, ";", ";", "#X", "insert", "/visca.1/zoom", 1625, ";", ";", "#X", "insert", "/visca.1/zoom", 1354, ";", ";", "#X", "insert", "/visca.1/zoom", 1083, ";", ";", "#X", "insert", "/visca.1/zoom", 812, ";", ";", "#X", "insert", "/visca.1/zoom", 677, ";", ";", "#X", "insert", "/visca.1/zoom", 406, ";", ";", "#X", "insert", "/visca.1/zoom", 135, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 11780, ";", ";", "#X", "insert", "/visca.1/focus", 5958, ";", ";", "#X", "insert", "/visca.1/focus", 6093, ";", ";", "#X", "insert", "/visca.1/focus", 6229, ";", ";", "#X", "insert", "/visca.1/focus", 6499, ";", ";", "#X", "insert", "/visca.1/focus", 6770, ";", ";", "#X", "insert", "/visca.1/focus", 7176, ";", ";", "#X", "insert", "/visca.1/focus", 7447, ";", ";", "#X", "insert", "/visca.1/focus", 7718, ";", ";", "#X", "insert", "/visca.1/focus", 7989, ";", ";", "#X", "insert", "/visca.1/focus", 8260, ";", ";", "#X", "insert", "/visca.1/focus", 8395, ";", ";", "#X", "insert", "/visca.1/focus", 8531, ";", ";", "#X", "insert", "/visca.1/focus", 8801, ";", ";", "#X", "insert", "/visca.1/focus", 8937, ";", ";", "#X", "insert", "/visca.1/focus", 9072, ";", ";", "#X", "insert", "/visca.1/focus", 9208, ";", ";", "#X", "insert", "/visca.1/focus", 9343, ";", ";", "#X", "insert", "/visca.1/focus", 9478, ";", ";", "#X", "insert", "/visca.1/focus", 9614, ";", ";", "#X", "insert", "/visca.1/focus", 9749, ";", ";", "#X", "insert", "/visca.1/focus", 9885, ";", ";", "#X", "insert", "/visca.1/focus", 10020, ";", ";", "#X", "insert", "/visca.1/focus", 10155, ";", ";", "#X", "insert", "/visca.1/focus", 10291, ";", ";", "#X", "insert", "/visca.1/focus", 10426, ";", ";", "#X", "insert", "/visca.1/focus", 10697, ";", ";", "#X", "insert", "/visca.1/focus", 10832, ";", ";", "#X", "insert", "/visca.1/focus", 10968, ";", ";", "#X", "insert", "/visca.1/focus", 11103, ";", ";", "#X", "insert", "/visca.1/focus", 11239, ";", ";", "#X", "insert", "/visca.1/focus", 11374, ";", ";", "#X", "insert", "/visca.1/focus", 11509, ";", ";", "#X", "insert", "/visca.1/focus", 11645, ";", ";", "#X", "insert", "/visca.1/focus", 11780, ";", ";", "#X", "insert", "/visca.1/focus", 12051, ";", ";", "#X", "insert", "/visca.1/focus", 12186, ";", ";", "#X", "insert", "/visca.1/focus", 12322, ";", ";", "#X", "insert", "/visca.1/focus", 12457, ";", ";", "#X", "insert", "/visca.1/focus", 12593, ";", ";", "#X", "insert", "/visca.1/focus", 12728, ";", ";", "#X", "insert", "/visca.1/focus", 12593, ";", ";", "#X", "insert", "/visca.1/focus", 12457, ";", ";", "#X", "insert", "/visca.1/focus", 12322, ";", ";", "#X", "insert", "/visca.1/focus", 12186, ";", ";", "#X", "insert", "/visca.1/focus", 11916, ";", ";", "#X", "insert", "/visca.1/focus", 11509, ";", ";", "#X", "insert", "/visca.1/focus", 11103, ";", ";", "#X", "insert", "/visca.1/focus", 10832, ";", ";", "#X", "insert", "/visca.1/focus", 10562, ";", ";", "#X", "insert", "/visca.1/focus", 10426, ";", ";", "#X", "insert", "/visca.1/focus", 10291, ";", ";", "#X", "insert", "/visca.1/focus", 10155, ";", ";", "#X", "insert", "/visca.1/focus", 10020, ";", ";", "#X", "insert", "/visca.1/focus", 9885, ";", ";", "#X", "insert", "/visca.1/focus", 9749, ";", ";", "#X", "insert", "/visca.1/focus", 9614, ";", ";", "#X", "insert", "/visca.1/focus", 9478, ";", ";", "#X", "insert", "/visca.1/focus", 9343, ";", ";", "#X", "insert", "/visca.1/focus", 9208, ";", ";", "#X", "insert", "/visca.1/focus", 9072, ";", ";", "#X", "insert", "/visca.1/focus", 8937, ";", ";", "#X", "insert", "/visca.1/focus", 8801, ";", ";", "#X", "insert", "/visca.1/focus", 8666, ";", ";", "#X", "insert", "/visca.1/focus", 8531, ";", ";", "#X", "insert", "/visca.1/focus", 8395, ";", ";", "#X", "insert", "/visca.1/focus", 8260, ";", ";", "#X", "insert", "/visca.1/focus", 8124, ";", ";", "#X", "insert", "/visca.1/focus", 7853, ";", ";", "#X", "insert", "/visca.1/focus", 7718, ";", ";", "#X", "insert", "/visca.1/focus", 7583, ";", ";", "#X", "insert", "/visca.1/focus", 7447, ";", ";", "#X", "insert", "/visca.1/focus", 7312, ";", ";", "#X", "insert", "/visca.1/focus", 7176, ";", ";", "#X", "insert", "/visca.1/focus", 6906, ";", ";", "#X", "insert", "/visca.1/focus", 6770, ";", ";", "#X", "insert", "/visca.1/focus", 6499, ";", ";", "#X", "insert", "/visca.1/focus", 6364, ";", ";", "#X", "insert", "/visca.1/focus", 6229, ";", ";", "#X", "insert", "/visca.1/focus", 6093, ";", ";", "#X", "insert", "/visca.1/focus", 5958, ";", ";", "#X", "insert", "/visca.1/focus", 5822, ";", ";", "#X", "insert", "/visca.1/focus", 5687, ";", ";", "#X", "insert", "/visca.1/focus", 5416, ";", ";", "#X", "insert", "/visca.1/focus", 5281, ";", ";", "#X", "insert", "/visca.1/focus", 5145, ";", ";", "#X", "insert", "/visca.1/focus", 4875, ";", ";", "#X", "insert", "/visca.1/focus", 4604, ";", ";", "#X", "insert", "/visca.1/focus", 4333, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 4875, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5145, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5687, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6093, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6364, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6770, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7041, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7312, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7583, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7853, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8124, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8531, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8666, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8801, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 9072, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 9343, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 9478, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 9749, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 10155, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 10291, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 10426, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 10697, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 11103, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 11374, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 11780, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 11916, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12186, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12593, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12728, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12863, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12999, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 13134, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 13270, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 13540, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 13811, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 13947, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 14218, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 14353, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 14488, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 14624, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 14759, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 14895, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 15030, ";", ";", "#X", "insert", "/visca.1/focus", 11916, ";", ";", "#X", "insert", "/visca.1/focus", 11916, ";", ";", "#X", "insert", "/visca.1/focus", 11374, ";", ";", "#X", "insert", "/visca.1/focus", 10155, ";", ";", "#X", "insert", "/visca.1/focus", 8937, ";", ";", "#X", "insert", "/visca.1/focus", 8124, ";", ";", "#X", "insert", "/visca.1/focus", 7718, ";", ";", "#X", "insert", "/visca.1/focus", 7312, ";", ";", "#X", "insert", "/visca.1/focus", 7176, ";", ";", "#X", "insert", "/visca.1/focus", 7041, ";", ";", "#X", "insert", "/visca.1/focus", 6770, ";", ";", "#X", "insert", "/visca.1/focus", 6499, ";", ";", "#X", "insert", "/visca.1/focus", 6093, ";", ";", "#X", "insert", "/visca.1/focus", 5822, ";", ";", "#X", "insert", "/visca.1/focus", 5552, ";", ";", "#X", "insert", "/visca.1/focus", 5416, ";", ";", "#X", "insert", "/visca.1/focus", 5281, ";", ";", "#X", "insert", "/visca.1/focus", 5010, ";", ";", "#X", "insert", "/visca.1/focus", 4875, ";", ";", "#X", "insert", "/visca.1/focus", 4739, ";", ";", "#X", "insert", "/visca.1/focus", 4604, ";", ";", "#X", "insert", "/visca.1/focus", 4468, ";", ";", "#X", "insert", "/visca.1/focus", 4333, ";", ";", "#X", "insert", "/visca.1/focus", 4198, ";", ";", "#X", "insert", "/visca.1/focus", 4062, ";", ";", "#X", "insert", "/visca.1/focus", 3656, ";", ";", "#X", "insert", "/visca.1/focus", 3250, ";", ";", "#X", "insert", "/visca.1/focus", 2979, ";", ";", "#X", "insert", "/visca.1/focus", 2844, ";", ";", "#X", "insert", "/visca.1/focus", 2708, ";", ";", "#X", "insert", "/visca.1/focus", 2573, ";", ";", "#X", "insert", "/visca.1/focus", 2437, ";", ";", "#X", "insert", "/visca.1/focus", 2302, ";", ";", "#X", "insert", "/visca.1/focus", 2166, ";", ";", "#X", "insert", "/visca.1/focus", 2031, ";", ";", "#X", "insert", "/visca.1/focus", 1896, ";", ";", "#X", "insert", "/visca.1/focus", 2031, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 10562, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 4468, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 4468, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 4333, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 4062, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 3927, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 3385, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 2844, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 2166, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 1354, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 1083, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 677, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 542, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 271, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus", 4062, ";", ";", "#X", "insert", "/visca.1/focus", 4333, ";", ";", "#X", "insert", "/visca.1/focus", 4604, ";", ";", "#X", "insert", "/visca.1/focus", 5281, ";", ";", "#X", "insert", "/visca.1/focus", 5822, ";", ";", "#X", "insert", "/visca.1/focus", 6635, ";", ";", "#X", "insert", "/visca.1/focus", 7041, ";", ";", "#X", "insert", "/visca.1/focus", 7447, ";", ";", "#X", "insert", "/visca.1/focus", 7853, ";", ";", "#X", "insert", "/visca.1/focus", 8260, ";", ";", "#X", "insert", "/visca.1/focus", 8531, ";", ";", "#X", "insert", "/visca.1/focus", 8666, ";", ";", "#X", "insert", "/visca.1/focus", 8937, ";", ";", "#X", "insert", "/visca.1/focus", 9208, ";", ";", "#X", "insert", "/visca.1/focus", 9478, ";", ";", "#X", "insert", "/visca.1/focus", 9614, ";", ";", "#X", "insert", "/visca.1/focus", 9885, ";", ";", "#X", "insert", "/visca.1/focus", 10155, ";", ";", "#X", "insert", "/visca.1/focus", 10562, ";", ";", "#X", "insert", "/visca.1/focus", 10832, ";", ";", "#X", "insert", "/visca.1/focus", 10968, ";", ";", "#X", "insert", "/visca.1/focus", 11239, ";", ";", "#X", "insert", "/visca.1/focus", 11374, ";", ";", "#X", "insert", "/visca.1/focus", 11509, ";", ";", "#X", "insert", "/visca.1/focus", 11645, ";", ";", "#X", "insert", "/visca.1/focus", 11780, ";", ";", "#X", "insert", "/visca.1/focus", 11916, ";", ";", "#X", "insert", "/visca.1/focus", 12186, ";", ";", "#X", "insert", "/visca.1/focus", 12457, ";", ";", "#X", "insert", "/visca.1/focus", 12863, ";", ";", "#X", "insert", "/visca.1/focus", 12999, ";", ";", "#X", "insert", "/visca.1/focus", 13270, ";", ";", "#X", "insert", "/visca.1/focus", 13405, ";", ";", "#X", "insert", "/visca.1/focus", 13540, ";", ";", "#X", "insert", "/visca.1/focus", 13811, ";", ";", "#X", "insert", "/visca.1/focus", 13947, ";", ";", "#X", "insert", "/visca.1/focus", 14218, ";", ";", "#X", "insert", "/visca.1/focus", 14353, ";", ";", "#X", "insert", "/visca.1/focus", 14624, ";", ";", "#X", "insert", "/visca.1/focus", 14759, ";", ";", "#X", "insert", "/visca.1/focus", 11374, ";", ";", "#X", "insert", "/visca.1/focus", 10968, ";", ";", "#X", "insert", "/visca.1/focus", 10155, ";", ";", "#X", "insert", "/visca.1/focus", 9072, ";", ";", "#X", "insert", "/visca.1/focus", 8395, ";", ";", "#X", "insert", "/visca.1/focus", 7176, ";", ";", "#X", "insert", "/visca.1/focus", 6499, ";", ";", "#X", "insert", "/visca.1/focus", 5958, ";", ";", "#X", "insert", "/visca.1/focus", 5552, ";", ";", "#X", "insert", "/visca.1/focus", 5145, ";", ";", "#X", "insert", "/visca.1/focus", 4875, ";", ";", "#X", "insert", "/visca.1/focus", 4604, ";", ";", "#X", "insert", "/visca.1/focus", 4198, ";", ";", "#X", "insert", "/visca.1/focus", 3927, ";", ";", "#X", "insert", "/visca.1/focus", 3250, ";", ";", "#X", "insert", "/visca.1/focus", 2844, ";", ";", "#X", "insert", "/visca.1/focus", 2302, ";", ";", "#X", "insert", "/visca.1/focus", 1625, ";", ";", "#X", "insert", "/visca.1/focus", 1083, ";", ";", "#X", "insert", "/visca.1/focus", 542, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 5010, ";", ";", "#X", "insert", "/visca.1/focus", 10020, ";", ";", "#X", "insert", "/visca.1/focus", 13676, ";", ";", "#X", "insert", "/visca.1/focus", 6635, ";", ";", "#X", "insert", "/visca.1/focus", 6499, ";", ";", "#X", "insert", "/visca.1/focus", 6093, ";", ";", "#X", "insert", "/visca.1/focus", 4875, ";", ";", "#X", "insert", "/visca.1/focus", 3656, ";", ";", "#X", "insert", "/visca.1/focus", 1760, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus/variable/near", 1, ";", ";", "#X", "insert", "/visca.1/focus/variable/near", 2, ";", ";", "#X", "insert", "/visca.1/focus/variable/near", 3, ";", ";", "#X", "insert", "/visca.1/focus/variable/near", 4, ";", ";", "#X", "insert", "/visca.1/focus/variable/near", 5, ";", ";", "#X", "insert", "/visca.1/focus/variable/near", 6, ";", ";", "#X", "insert", "/visca.1/zoom/variable/tele", 1, ";", ";", "#X", "insert", "/visca.1/zoom/stop", "bang", ";", ";", "#X", "insert", "/visca.1/zoom/variable/tele", 6, ";", ";", "#X", "insert", "/visca.1/zoom/standart", "tele", ";", ";", "#X", "insert", "/visca.1/zoom/standart", "wide", ";", ";", "#X", "insert", "/visca.1/zoom/variable/wide", 6, ";", ";", "#X", "insert", "/visca.1/zoom/standart", "tele", ";", ";", "#X", "insert", "/visca.1/zoom/standart", "wide", ";", ";", "#X", "insert", "/visca.1/zoom/stop", "bang", ";", ";", "#X", "insert", "/visca.1/zoom/standart", "tele", ";", ";", "#X", "insert", "/visca.1/zoom/standart", "wide", ";", ";", "#X", "insert", "/visca.1/zoom/variable/tele", 7, ";", ";", "#X", "insert", "/visca.1/zoom/variable/wide", 0, ";", ";", "#X", "insert", "/visca.1/zoom/variable/tele", 0, ";", ";", "#X", "insert", "/visca.1/zoom/standart", "tele", ";", ";", "#X", "insert", "/visca.1/zoom/standart", "wide", ";", ";", "#X", "insert", "/visca.1/zoom", 2437, ";", ";", "#X", "insert", "/visca.1/zoom", 2302, ";", ";", "#X", "insert", "/visca.1/zoom", 2166, ";", ";", "#X", "insert", "/visca.1/zoom", 1896, ";", ";", "#X", "insert", "/visca.1/zoom", 1489, ";", ";", "#X", "insert", "/visca.1/zoom", 1083, ";", ";", "#X", "insert", "/visca.1/zoom", 677, ";", ";", "#X", "insert", "/visca.1/zoom", 271, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/stabilizer", 0, ";", ";", "#X", "insert", "/visca.1/stabilizer", 1, ";", ";", "#X", "insert", "/visca.1/stabilizer", 0, ";", ";", "#X", "insert", "/visca.1/fx", "bw", ";", ";", "#X", "insert", "/visca.1/fx", "neg", "art", ";", ";", "#X", "insert", "/visca.1/fx", "off", ";", ";", "#X", "insert", "/visca.1/whitebalance", "outdoor", ";", ";", "#X", "insert", "/visca.1/whitebalance", "one", "push", ";", ";", "#X", "insert", "/visca.1/whitebalance", "one", "push", "trigger", ";", ";", "#X", "insert", "/visca.1/whitebalance", "indoor", ";", ";", "#X", "insert", "/visca.1/whitebalance", "one", "push", ";", ";", "#X", "insert", "/visca.1/whitebalance", "one", "push", "trigger", ";", ";", "#X", "insert", "/visca.1/whitebalance", "one", "push", ";", ";", "#X", "insert", "/visca.1/mode", "auto", ";", ";", "#X", "insert", "/visca.1/mode", "manual", ";", ";", "#X", "insert", "/visca.1/gain", 2, ";", ";", "#X", "insert", "/visca.1/gain", 6, ";", ";", "#X", "insert", "/visca.1/gain", 10, ";", ";", "#X", "insert", "/visca.1/shutter", 9, ";", ";", "#X", "insert", "/visca.1/iris", 10, ";", ";", "#X", "insert", "/visca.1/iris", 0, ";", ";", "#X", "insert", "/visca.1/iris", 1, ";", ";", "#X", "insert", "/visca.1/iris", 14, ";", ";", "#X", "insert", "/visca.1/iris", 15, ";", ";", "#X", "insert", "/visca.1/shutter", 0, ";", ";", "#X", "insert", "/visca.1/shutter", 6, ";", ";", "#X", "insert", "/visca.1/gain", 1, ";", ";", "#X", "insert", "/visca.1/hs", 0, ";", ";", "#X", "insert", "/visca.1/hs", 1, ";", ";", "#X", "insert", "/visca.1/hs", 0, ";", ";", "#X", "insert", "/visca.1/nr", 1, ";", ";", "#X", "insert", "/visca.1/nr", 0, ";", ";", "#X", "insert", "/visca.1/hr", 1, ";", ";", "#X", "insert", "/visca.1/hr", 0, ";", ";", "#X", "insert", "/visca.1/wd", 0, ";", ";", "#X", "insert", "/visca.1/wd", 1, ";", ";", "#X", "insert", "/visca.1/reverse", 1, ";", ";", "#X", "insert", "/visca.1/reverse", 0, ";", ";", "#X", "insert", "/visca.1/flip", 1, ";", ";", "#X", "insert", "/visca.1/flip", 0, ";", ";", "#X", "insert", "/visca.1/stabilizer", 1, ";", ";", "#X", "insert", "/visca.1/stabilizer", 0, ";", ";", "#X", "insert", "/visca.1/freeze", 1, ";", ";", "#X", "insert", "/visca.1/freeze", 0, ";", ";", "#X", "insert", "/visca.1/stabilizer", 1, ";", ";", "#X", "insert", "/visca.1/stabilizer", 0, ";", ";", "#X", "insert", "/visca.1/compensation/sw", 1, ";", ";", "#X", "insert", "/visca.1/mode", "auto", ";", ";", "#X", "insert", "/visca.1/compensation/sw", 0, ";", ";", "#X", "insert", "/visca.1/compensation/sw", 1, ";", ";", "#X", "insert", "/visca.1/compensation/level", 9, ";", ";", "#X", "insert", "/visca.1/compensation/level", 15, ";", ";", "#X", "insert", "/visca.1/compensation/sw", 0, ";", ";", "#X", "insert", "/visca.1/compensation/sw", 1, ";", ";", "#X", "insert", "/visca.1/compensation/level", 15, ";", ";", "#X", "insert", "/visca.1/compensation/level", 16, ";", ";", "#X", "insert", "/visca.1/compensation/level", 6, ";", ";", "#X", "insert", "/visca.1/compensation/level", 2, ";", ";", "#X", "insert", "/visca.1/compensation/sw", 0, ";", ";", "#X", "insert", "/visca.1/mode", "auto", ";", ";", "#X", "insert", "/visca.1/auto/response", 1, ";", ";", "#X", "insert", "/visca.1/auto/response", 2, ";", ";", "#X", "insert", "/visca.1/auto/response", 3, ";", ";", "#X", "insert", "/visca.1/auto/response", 4, ";", ";", "#X", "insert", "/visca.1/auto/response", 5, ";", ";", "#X", "insert", "/visca.1/auto/response", 6, ";", ";", "#X", "insert", "/visca.1/auto/response", 7, ";", ";", "#X", "insert", "/visca.1/auto/response", 8, ";", ";", "#X", "insert", "/visca.1/auto/response", 9, ";", ";", "#X", "insert", "/visca.1/auto/response", 10, ";", ";", "#X", "insert", "/visca.1/auto/response", 11, ";", ";", "#X", "insert", "/visca.1/auto/response", 12, ";", ";", "#X", "insert", "/visca.1/auto/response", 13, ";", ";", "#X", "insert", "/visca.1/auto/response", 14, ";", ";", "#X", "insert", "/visca.1/auto/response", 15, ";", ";", "#X", "insert", "/visca.1/auto/response", 16, ";", ";", "#X", "insert", "/visca.1/auto/response", 17, ";", ";", "#X", "insert", "/visca.1/auto/response", 18, ";", ";", "#X", "insert", "/visca.1/auto/response", 17, ";", ";", "#X", "insert", "/visca.1/auto/response", 16, ";", ";", "#X", "insert", "/visca.1/auto/response", 15, ";", ";", "#X", "insert", "/visca.1/auto/response", 14, ";", ";", "#X", "insert", "/visca.1/auto/response", 13, ";", ";", "#X", "insert", "/visca.1/auto/response", 12, ";", ";", "#X", "insert", "/visca.1/auto/response", 11, ";", ";", "#X", "insert", "/visca.1/ir", 1, ";", ";", "#X", "insert", "/visca.1/ir", 0, ";", ";", "#X", "insert", "/visca.1/ir", 1, ";", ";", "#X", "insert", "/visca.1/ir/correction", 1, ";", ";", "#X", "insert", "/visca.1/ir/correction", 0, ";", ";", "#X", "insert", "/visca.1/ir/correction", 1, ";", ";", "#X", "insert", "/visca.1/ir/correction", 0, ";", ";", "#X", "insert", "/visca.1/ir/correction", 1, ";", ";", "#X", "insert", "/visca.1/ir", 0, ";", ";", "#X", "insert", "/visca.1/ir/correction", 0, ";", ";", "#X", "insert", "/visca.1/chromasupress", 1, ";", ";", "#X", "insert", "/visca.1/chromasupress", 2, ";", ";", "#X", "insert", "/visca.1/chromasupress", 3, ";", ";", "#X", "insert", "/visca.1/chromasupress", 4, ";", ";", "#X", "insert", "/visca.1/chromasupress", 3, ";", ";", "#X", "insert", "/visca.1/chromasupress", 4, ";", ";", "#X", "insert", "/visca.1/chromasupress", 3, ";", ";", "#X", "insert", "/visca.1/chromasupress", 2, ";", ";", "#X", "insert", "/visca.1/chromasupress", 1, ";", ";", "#X", "insert", "/visca.1/chromasupress", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 4333, ";", ";", "#X", "insert", "/visca.1/zoom", 8260, ";", ";", "#X", "insert", "/visca.1/zoom", 11239, ";", ";", "#X", "insert", "/visca.1/focus", 8937, ";", ";", "#X", "insert", "/visca.1/focus", 8124, ";", ";", "#X", "insert", "/visca.1/focus", 8124, ";", ";", "#X", "insert", "/visca.1/focus", 7989, ";", ";", "#X", "insert", "/visca.1/focus", 7718, ";", ";", "#X", "insert", "/visca.1/focus", 7447, ";", ";", "#X", "insert", "/visca.1/focus", 6906, ";", ";", "#X", "insert", "/visca.1/focus", 6499, ";", ";", "#X", "insert", "/visca.1/focus", 6229, ";", ";", "#X", "insert", "/visca.1/focus", 5958, ";", ";", "#X", "insert", "/visca.1/focus", 5687, ";", ";", "#X", "insert", "/visca.1/focus", 5552, ";", ";", "#X", "insert", "/visca.1/focus", 5416, ";", ";", "#X", "insert", "/visca.1/focus", 5281, ";", ";", "#X", "insert", "/visca.1/focus", 5145, ";", ";", "#X", "insert", "/visca.1/focus", 5010, ";", ";", "#X", "insert", "/visca.1/focus", 4875, ";", ";", "#X", "insert", "/visca.1/focus", 4739, ";", ";", "#X", "insert", "/visca.1/focus", 4604, ";", ";", "#X", "insert", "/visca.1/focus", 4468, ";", ";", "#X", "insert", "/visca.1/focus", 4198, ";", ";", "#X", "insert", "/visca.1/focus", 4062, ";", ";", "#X", "insert", "/visca.1/focus", 3927, ";", ";", "#X", "insert", "/visca.1/focus", 3791, ";", ";", "#X", "insert", "/visca.1/focus", 3656, ";", ";", "#X", "insert", "/visca.1/focus", 2031, ";", ";", "#X", "insert", "/visca.1/focus", 1489, ";", ";", "#X", "insert", "/visca.1/focus", 1354, ";", ";", "#X", "insert", "/visca.1/focus", 1219, ";", ";", "#X", "insert", "/visca.1/focus", 812, ";", ";", "#X", "insert", "/visca.1/focus", 542, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 135, ";", ";", "#X", "insert", "/visca.1/focus", 812, ";", ";", "#X", "insert", "/visca.1/focus", 1489, ";", ";", "#X", "insert", "/visca.1/focus", 2302, ";", ";", "#X", "insert", "/visca.1/focus", 3114, ";", ";", "#X", "insert", "/visca.1/focus", 3521, ";", ";", "#X", "insert", "/visca.1/focus", 3791, ";", ";", "#X", "insert", "/visca.1/focus", 4198, ";", ";", "#X", "insert", "/visca.1/focus", 4468, ";", ";", "#X", "insert", "/visca.1/focus", 4604, ";", ";", "#X", "insert", "/visca.1/focus", 4875, ";", ";", "#X", "insert", "/visca.1/focus", 5010, ";", ";", "#X", "insert", "/visca.1/focus", 5281, ";", ";", "#X", "insert", "/visca.1/focus", 5552, ";", ";", "#X", "insert", "/visca.1/focus", 5687, ";", ";", "#X", "insert", "/visca.1/focus", 5958, ";", ";", "#X", "insert", "/visca.1/focus", 6093, ";", ";", "#X", "insert", "/visca.1/focus", 6229, ";", ";", "#X", "insert", "/visca.1/focus", 6635, ";", ";", "#X", "insert", "/visca.1/focus", 6770, ";", ";", "#X", "insert", "/visca.1/focus", 6906, ";", ";", "#X", "insert", "/visca.1/focus", 7041, ";", ";", "#X", "insert", "/visca.1/focus", 7176, ";", ";", "#X", "insert", "/visca.1/focus", 7312, ";", ";", "#X", "insert", "/visca.1/focus", 7447, ";", ";", "#X", "insert", "/visca.1/focus", 7583, ";", ";", "#X", "insert", "/visca.1/focus", 7853, ";", ";", "#X", "insert", "/visca.1/focus", 7989, ";", ";", "#X", "insert", "/visca.1/focus", 8124, ";", ";", "#X", "insert", "/visca.1/focus", 8260, ";", ";", "#X", "insert", "/visca.1/focus", 8395, ";", ";", "#X", "insert", "/visca.1/focus", 8531, ";", ";", "#X", "insert", "/visca.1/focus", 8801, ";", ";", "#X", "insert", "/visca.1/focus/mode", "auto", ";", ";", "#X", "insert", "/visca.1/focus/mode", "manual", ";", ";", "#X", "insert", "/visca.1/focus/mode", "auto", ";", ";", "#X", "insert", "/visca.1/focus/mode", "manual", ";", ";", "#X", "insert", "/visca.1/focus/mode", "auto", ";", ";", "#X", "insert", "/visca.1/focus/mode", "manual", ";", ";", "#X", "insert", "/visca.1/focus/auto/trigger", "bang", ";", ";", "#X", "insert", "/visca.1/zoom", 1083, ";", ";", "#X", "insert", "/visca.1/zoom", 1083, ";", ";", "#X", "insert", "/visca.1/zoom", 948, ";", ";", "#X", "insert", "/visca.1/zoom", 812, ";", ";", "#X", "insert", "/visca.1/zoom", 542, ";", ";", "#X", "insert", "/visca.1/zoom", 271, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/focus/auto/trigger", "bang", ";", ";", "#X", "insert", "/visca.1/focus/mode", "auto", ";", ";", "#X", "insert", "/visca.1/focus", 5552, ";", ";", "#X", "insert", "/visca.1/focus", 4604, ";", ";", "#X", "insert", "/visca.1/focus", 3927, ";", ";", "#X", "insert", "/visca.1/focus", 3791, ";", ";", "#X", "insert", "/visca.1/focus", 3656, ";", ";", "#X", "insert", "/visca.1/focus", 3385, ";", ";", "#X", "insert", "/visca.1/focus", 3114, ";", ";", "#X", "insert", "/visca.1/focus", 2708, ";", ";", "#X", "insert", "/visca.1/focus", 2573, ";", ";", "#X", "insert", "/visca.1/focus", 2437, ";", ";", "#X", "insert", "/visca.1/focus", 2302, ";", ";", "#X", "insert", "/visca.1/focus", 2166, ";", ";", "#X", "insert", "/visca.1/focus", 1760, ";", ";", "#X", "insert", "/visca.1/focus", 1625, ";", ";", "#X", "insert", "/visca.1/focus", 1489, ";", ";", "#X", "insert", "/visca.1/focus", 1354, ";", ";", "#X", "insert", "/visca.1/focus", 1219, ";", ";", "#X", "insert", "/visca.1/focus", 1083, ";", ";", "#X", "insert", "/visca.1/focus", 812, ";", ";", "#X", "insert", "/visca.1/focus", 271, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 6770, ";", ";", "#X", "insert", "/visca.1/focus", 7176, ";", ";", "#X", "insert", "/visca.1/focus", 12457, ";", ";", "#X", "insert", "/visca.1/focus", 8666, ";", ";", "#X", "insert", "/visca.1/focus", 8531, ";", ";", "#X", "insert", "/visca.1/focus", 8260, ";", ";", "#X", "insert", "/visca.1/focus", 7718, ";", ";", "#X", "insert", "/visca.1/focus", 7041, ";", ";", "#X", "insert", "/visca.1/focus", 6093, ";", ";", "#X", "insert", "/visca.1/focus", 5010, ";", ";", "#X", "insert", "/visca.1/focus", 3927, ";", ";", "#X", "insert", "/visca.1/focus", 2844, ";", ";", "#X", "insert", "/visca.1/focus", 2166, ";", ";", "#X", "insert", "/visca.1/focus", 1219, ";", ";", "#X", "insert", "/visca.1/focus", 677, ";", ";", "#X", "insert", "/visca.1/focus", 135, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8260, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8531, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8531, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8395, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8124, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7176, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5958, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 4468, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 2979, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 1625, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 271, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/zoom/standart", "tele", ";", ";", "#X", "insert", "/visca.1/zoom", 3114, ";", ";", "#X", "insert", "/visca.1/zoom", 2979, ";", ";", "#X", "insert", "/visca.1/zoom", 2708, ";", ";", "#X", "insert", "/visca.1/zoom", 2437, ";", ";", "#X", "insert", "/visca.1/zoom", 1760, ";", ";", "#X", "insert", "/visca.1/zoom", 1083, ";", ";", "#X", "insert", "/visca.1/zoom", 406, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 4468, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5958, ";", ";", "#X", "insert", "/visca.1/focus", 2302, ";", ";", "#X", "insert", "/visca.1/focus", 2302, ";", ";", "#X", "insert", "/visca.1/focus", 2031, ";", ";", "#X", "insert", "/visca.1/focus", 1760, ";", ";", "#X", "insert", "/visca.1/focus", 1625, ";", ";", "#X", "insert", "/visca.1/focus", 1489, ";", ";", "#X", "insert", "/visca.1/focus", 1354, ";", ";", "#X", "insert", "/visca.1/focus", 948, ";", ";", "#X", "insert", "/visca.1/focus", 812, ";", ";", "#X", "insert", "/visca.1/focus", 677, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 2844, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 2708, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 2302, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 1625, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 1219, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 542, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 3656, ";", ";", "#X", "insert", "/visca.1/zoom", 3521, ";", ";", "#X", "insert", "/visca.1/zoom", 3250, ";", ";", "#X", "insert", "/visca.1/zoom", 2844, ";", ";", "#X", "insert", "/visca.1/zoom", 2573, ";", ";", "#X", "insert", "/visca.1/zoom", 2166, ";", ";", "#X", "insert", "/visca.1/zoom", 1896, ";", ";", "#X", "insert", "/visca.1/zoom", 1354, ";", ";", "#X", "insert", "/visca.1/zoom", 948, ";", ";", "#X", "insert", "/visca.1/zoom", 677, ";", ";", "#X", "insert", "/visca.1/zoom", 406, ";", ";", "#X", "insert", "/visca.1/zoom", 271, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/focus", 1625, ";", ";", "#X", "insert", "/visca.1/focus", 1489, ";", ";", "#X", "insert", "/visca.1/focus", 1219, ";", ";", "#X", "insert", "/visca.1/focus", 677, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 3250, ";", ";", "#X", "insert", "/visca.1/zoom", 8124, ";", ";", "#X", "insert", "/visca.1/zoom", 8395, ";", ";", "#X", "insert", "/visca.1/zoom", 8937, ";", ";", "#X", "insert", "/visca.1/zoom", 9478, ";", ";", "#X", "insert", "/visca.1/zoom", 10291, ";", ";", "#X", "insert", "/visca.1/zoom", 10832, ";", ";", "#X", "insert", "/visca.1/zoom", 11103, ";", ";", "#X", "insert", "/visca.1/zoom", 11239, ";", ";", "#X", "insert", "/visca.1/zoom", 11374, ";", ";", "#X", "insert", "/visca.1/zoom", 11509, ";", ";", "#X", "insert", "/visca.1/zoom", 11780, ";", ";", "#X", "insert", "/visca.1/zoom", 12051, ";", ";", "#X", "insert", "/visca.1/zoom", 12322, ";", ";", "#X", "insert", "/visca.1/zoom", 12593, ";", ";", "#X", "insert", "/visca.1/zoom", 12863, ";", ";", "#X", "insert", "/visca.1/zoom", 13134, ";", ";", "#X", "insert", "/visca.1/zoom", 13270, ";", ";", "#X", "insert", "/visca.1/zoom", 13405, ";", ";", "#X", "insert", "/visca.1/zoom", 13540, ";", ";", "#X", "insert", "/visca.1/zoom", 13134, ";", ";", "#X", "insert", "/visca.1/zoom", 12863, ";", ";", "#X", "insert", "/visca.1/zoom", 12593, ";", ";", "#X", "insert", "/visca.1/zoom", 11916, ";", ";", "#X", "insert", "/visca.1/zoom", 10968, ";", ";", "#X", "insert", "/visca.1/zoom", 9478, ";", ";", "#X", "insert", "/visca.1/zoom", 8260, ";", ";", "#X", "insert", "/visca.1/zoom", 6770, ";", ";", "#X", "insert", "/visca.1/zoom", 6093, ";", ";", "#X", "insert", "/visca.1/zoom", 5281, ";", ";", "#X", "insert", "/visca.1/zoom", 4739, ";", ";", "#X", "insert", "/visca.1/zoom", 4198, ";", ";", "#X", "insert", "/visca.1/zoom", 3656, ";", ";", "#X", "insert", "/visca.1/zoom", 3250, ";", ";", "#X", "insert", "/visca.1/zoom", 2979, ";", ";", "#X", "insert", "/visca.1/zoom", 2708, ";", ";", "#X", "insert", "/visca.1/zoom", 2437, ";", ";", "#X", "insert", "/visca.1/zoom", 2166, ";", ";", "#X", "insert", "/visca.1/zoom", 1896, ";", ";", "#X", "insert", "/visca.1/zoom", 1760, ";", ";", "#X", "insert", "/visca.1/zoom", 1625, ";", ";", "#X", "insert", "/visca.1/zoom", 1489, ";", ";", "#X", "insert", "/visca.1/zoom", 1354, ";", ";", "#X", "insert", "/visca.1/zoom", 1219, ";", ";", "#X", "insert", "/visca.1/zoom", 1083, ";", ";", "#X", "insert", "/visca.1/zoom", 948, ";", ";", "#X", "insert", "/visca.1/zoom", 12051, ";", ";", "#X", "insert", "/visca.1/zoom", 7041, ";", ";", "#X", "insert", "/visca.1/zoom", 6906, ";", ";", "#X", "insert", "/visca.1/zoom", 6635, ";", ";", "#X", "insert", "/visca.1/zoom", 6229, ";", ";", "#X", "insert", "/visca.1/zoom", 5687, ";", ";", "#X", "insert", "/visca.1/zoom", 5281, ";", ";", "#X", "insert", "/visca.1/zoom", 5145, ";", ";", "#X", "insert", "/visca.1/zoom", 4875, ";", ";", "#X", "insert", "/visca.1/zoom", 5145, ";", ";", "#X", "insert", "/visca.1/zoom", 5687, ";", ";", "#X", "insert", "/visca.1/zoom", 6635, ";", ";", "#X", "insert", "/visca.1/zoom", 7583, ";", ";", "#X", "insert", "/visca.1/zoom", 9208, ";", ";", "#X", "insert", "/visca.1/zoom", 9885, ";", ";", "#X", "insert", "/visca.1/zoom", 10426, ";", ";", "#X", "insert", "/visca.1/zoom", 10968, ";", ";", "#X", "insert", "/visca.1/zoom", 11239, ";", ";", "#X", "insert", "/visca.1/zoom", 11645, ";", ";", "#X", "insert", "/visca.1/zoom", 11780, ";", ";", "#X", "insert", "/visca.1/zoom", 11916, ";", ";", "#X", "insert", "/visca.1/zoom", 12051, ";", ";", "#X", "insert", "/visca.1/zoom", 11780, ";", ";", "#X", "insert", "/visca.1/zoom", 11103, ";", ";", "#X", "insert", "/visca.1/zoom", 9885, ";", ";", "#X", "insert", "/visca.1/zoom", 8937, ";", ";", "#X", "insert", "/visca.1/zoom", 8124, ";", ";", "#X", "insert", "/visca.1/zoom", 7176, ";", ";", "#X", "insert", "/visca.1/zoom", 6229, ";", ";", "#X", "insert", "/visca.1/zoom", 5416, ";", ";", "#X", "insert", "/visca.1/zoom", 5010, ";", ";", "#X", "insert", "/visca.1/zoom", 4468, ";", ";", "#X", "insert", "/visca.1/zoom", 4198, ";", ";", "#X", "insert", "/visca.1/zoom", 3927, ";", ";", "#X", "insert", "/visca.1/zoom", 4333, ";", ";", "#X", "insert", "/visca.1/zoom", 5552, ";", ";", "#X", "insert", "/visca.1/zoom", 6770, ";", ";", "#X", "insert", "/visca.1/zoom", 8666, ";", ";", "#X", "insert", "/visca.1/zoom", 10832, ";", ";", "#X", "insert", "/visca.1/zoom", 12593, ";", ";", "#X", "insert", "/visca.1/zoom", 13676, ";", ";", "#X", "insert", "/visca.1/zoom", 14624, ";", ";", "#X", "insert", "/visca.1/zoom", 15301, ";", ";", "#X", "insert", "/visca.1/zoom", 15978, ";", ";", "#X", "insert", "/visca.1/zoom", 16249, ";", ";", "#X", "insert", "/visca.1/zoom", 16384, ";", ";", "#X", "insert", "/visca.1/zoom", 16249, ";", ";", "#X", "insert", "/visca.1/zoom", 16113, ";", ";", "#X", "insert", "/visca.1/zoom", 15978, ";", ";", "#X", "insert", "/visca.1/zoom", 15842, ";", ";", "#X", "insert", "/visca.1/zoom", 15436, ";", ";", "#X", "insert", "/visca.1/zoom", 14759, ";", ";", "#X", "insert", "/visca.1/zoom", 13811, ";", ";", "#X", "insert", "/visca.1/zoom", 12728, ";", ";", "#X", "insert", "/visca.1/zoom", 11916, ";", ";", "#X", "insert", "/visca.1/zoom", 11239, ";", ";", "#X", "insert", "/visca.1/zoom", 10697, ";", ";", "#X", "insert", "/visca.1/zoom", 10562, ";", ";", "#X", "insert", "/visca.1/zoom", 4604, ";", ";", "#X", "insert", "/visca.1/zoom", 11374, ";", ";", "#X", "insert", "/visca.1/zoom", 3250, ";", ";", "#X", "insert", "/visca.1/flip", 1, ";", ";", "#X", "insert", "/visca.1/flip", 0, ";", ";", "#X", "insert", "/visca.1/compensation/sw", 1, ";", ";", "#X", "insert", "/visca.1/compensation/sw", 0, ";", ";", "#X", "insert", "/visca.1/ir", 1, ";", ";", "#X", "insert", "/visca.1/ir", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 4604, ";", ";", "#X", "insert", "/visca.1/zoom", 4468, ";", ";", "#X", "insert", "/visca.1/zoom", 4333, ";", ";", "#X", "insert", "/visca.1/zoom", 4062, ";", ";", "#X", "insert", "/visca.1/zoom", 3927, ";", ";", "#X", "insert", "/visca.1/zoom", 3385, ";", ";", "#X", "insert", "/visca.1/zoom", 2708, ";", ";", "#X", "insert", "/visca.1/zoom", 2573, ";", ";", "#X", "insert", "/visca.1/zoom", 2031, ";", ";", "#X", "insert", "/visca.1/zoom", 1489, ";", ";", "#X", "insert", "/visca.1/zoom", 948, ";", ";", "#X", "insert", "/visca.1/zoom", 677, ";", ";", "#X", "insert", "/visca.1/zoom", 542, ";", ";", "#X", "insert", "/visca.1/zoom", 406, ";", ";", "#X", "insert", "/visca.1/zoom", 271, ";", ";", "#X", "insert", "/visca.1/zoom", 135, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 4604, ";", ";", "#X", "insert", "/visca.1/zoom", 4875, ";", ";", "#X", "insert", "/visca.1/zoom", 5010, ";", ";", "#X", "insert", "/visca.1/zoom", 5281, ";", ";", "#X", "insert", "/visca.1/zoom", 5687, ";", ";", "#X", "insert", "/visca.1/zoom", 5958, ";", ";", "#X", "insert", "/visca.1/zoom", 6499, ";", ";", "#X", "insert", "/visca.1/zoom", 6635, ";", ";", "#X", "insert", "/visca.1/zoom", 6770, ";", ";", "#X", "insert", "/visca.1/zoom", 6906, ";", ";", "#X", "insert", "/visca.1/zoom", 7041, ";", ";", "#X", "insert", "/visca.1/zoom", 7312, ";", ";", "#X", "insert", "/visca.1/zoom", 7312, ";", ";", "#X", "insert", "/visca.1/zoom", 7447, ";", ";", "#X", "insert", "/visca.1/zoom", 7583, ";", ";", "#X", "insert", "/visca.1/zoom", 7718, ";", ";", "#X", "insert", "/visca.1/zoom", 7853, ";", ";", "#X", "insert", "/visca.1/zoom", 7989, ";", ";", "#X", "insert", "/visca.1/zoom", 8260, ";", ";", "#X", "insert", "/visca.1/zoom", 8395, ";", ";", "#X", "insert", "/visca.1/zoom", 8531, ";", ";", "#X", "insert", "/visca.1/zoom", 8395, ";", ";", "#X", "insert", "/visca.1/focus/mode", "manual", ";", ";", "#X", "insert", "/visca.1/focus", 5958, ";", ";", "#X", "insert", "/visca.1/focus", 6093, ";", ";", "#X", "insert", "/visca.1/focus", 6229, ";", ";", "#X", "insert", "/visca.1/focus", 6364, ";", ";", "#X", "insert", "/visca.1/focus", 6499, ";", ";", "#X", "insert", "/visca.1/focus", 6770, ";", ";", "#X", "insert", "/visca.1/focus", 6906, ";", ";", "#X", "insert", "/visca.1/focus", 7041, ";", ";", "#X", "insert", "/visca.1/focus", 7176, ";", ";", "#X", "insert", "/visca.1/focus", 7312, ";", ";", "#X", "insert", "/visca.1/focus", 7583, ";", ";", "#X", "insert", "/visca.1/focus", 7718, ";", ";", "#X", "insert", "/visca.1/focus", 7853, ";", ";", "#X", "insert", "/visca.1/focus", 7989, ";", ";", "#X", "insert", "/visca.1/focus", 8124, ";", ";", "#X", "insert", "/visca.1/focus", 8260, ";", ";", "#X", "insert", "/visca.1/focus", 8395, ";", ";", "#X", "insert", "/visca.1/focus", 8531, ";", ";", "#X", "insert", "/visca.1/focus", 8666, ";", ";", "#X", "insert", "/visca.1/focus", 8801, ";", ";", "#X", "insert", "/visca.1/focus", 8937, ";", ";", "#X", "insert", "/visca.1/focus", 9072, ";", ";", "#X", "insert", "/visca.1/focus", 9208, ";", ";", "#X", "insert", "/visca.1/focus", 9478, ";", ";", "#X", "insert", "/visca.1/focus", 9614, ";", ";", "#X", "insert", "/visca.1/focus", 9885, ";", ";", "#X", "insert", "/visca.1/focus", 10020, ";", ";", "#X", "insert", "/visca.1/focus", 10155, ";", ";", "#X", "insert", "/visca.1/focus", 10291, ";", ";", "#X", "insert", "/visca.1/focus", 10426, ";", ";", "#X", "insert", "/visca.1/focus", 10562, ";", ";", "#X", "insert", "/visca.1/focus", 10832, ";", ";", "#X", "insert", "/visca.1/focus", 11103, ";", ";", "#X", "insert", "/visca.1/focus", 11239, ";", ";", "#X", "insert", "/visca.1/focus", 11509, ";", ";", "#X", "insert", "/visca.1/focus", 11645, ";", ";", "#X", "insert", "/visca.1/focus", 11780, ";", ";", "#X", "insert", "/visca.1/focus", 11916, ";", ";", "#X", "insert", "/visca.1/focus", 12051, ";", ";", "#X", "insert", "/visca.1/focus", 12186, ";", ";", "#X", "insert", "/visca.1/focus", 12322, ";", ";", "#X", "insert", "/visca.1/focus", 12322, ";", ";", "#X", "insert", "/visca.1/focus", 7176, ";", ";", "#X", "insert", "/visca.1/focus", 7176, ";", ";", "#X", "insert", "/visca.1/focus", 7041, ";", ";", "#X", "insert", "/visca.1/focus", 6906, ";", ";", "#X", "insert", "/visca.1/focus", 6770, ";", ";", "#X", "insert", "/visca.1/focus", 6635, ";", ";", "#X", "insert", "/visca.1/focus", 6499, ";", ";", "#X", "insert", "/visca.1/focus", 6364, ";", ";", "#X", "insert", "/visca.1/focus", 6229, ";", ";", "#X", "insert", "/visca.1/focus", 6093, ";", ";", "#X", "insert", "/visca.1/focus", 5958, ";", ";", "#X", "insert", "/visca.1/focus", 5687, ";", ";", "#X", "insert", "/visca.1/focus", 5552, ";", ";", "#X", "insert", "/visca.1/focus", 5416, ";", ";", "#X", "insert", "/visca.1/focus", 5281, ";", ";", "#X", "insert", "/visca.1/focus", 5145, ";", ";", "#X", "insert", "/visca.1/focus", 5010, ";", ";", "#X", "insert", "/visca.1/focus", 4875, ";", ";", "#X", "insert", "/visca.1/focus", 4739, ";", ";", "#X", "insert", "/visca.1/focus", 4604, ";", ";", "#X", "insert", "/visca.1/focus", 4468, ";", ";", "#X", "insert", "/visca.1/focus", 4333, ";", ";", "#X", "insert", "/visca.1/focus", 4198, ";", ";", "#X", "insert", "/visca.1/focus", 4062, ";", ";", "#X", "insert", "/visca.1/focus", 3927, ";", ";", "#X", "insert", "/visca.1/focus", 3791, ";", ";", "#X", "insert", "/visca.1/focus", 3656, ";", ";", "#X", "insert", "/visca.1/focus", 3656, ";", ";", "#X", "insert", "/visca.1/focus", 3521, ";", ";", "#X", "insert", "/visca.1/focus", 3385, ";", ";", "#X", "insert", "/visca.1/focus", 3250, ";", ";", "#X", "insert", "/visca.1/focus", 2979, ";", ";", "#X", "insert", "/visca.1/focus", 2708, ";", ";", "#X", "insert", "/visca.1/focus", 2573, ";", ";", "#X", "insert", "/visca.1/focus", 2437, ";", ";", "#X", "insert", "/visca.1/focus", 2302, ";", ";", "#X", "insert", "/visca.1/focus", 2166, ";", ";", "#X", "insert", "/visca.1/focus", 2031, ";", ";", "#X", "insert", "/visca.1/focus", 1896, ";", ";", "#X", "insert", "/visca.1/focus", 1760, ";", ";", "#X", "insert", "/visca.1/focus", 1625, ";", ";", "#X", "insert", "/visca.1/focus", 1489, ";", ";", "#X", "insert", "/visca.1/focus", 1354, ";", ";", "#X", "insert", "/visca.1/focus", 1219, ";", ";", "#X", "insert", "/visca.1/focus", 1083, ";", ";", "#X", "insert", "/visca.1/focus", 948, ";", ";", "#X", "insert", "/visca.1/focus", 812, ";", ";", "#X", "insert", "/visca.1/focus", 677, ";", ";", "#X", "insert", "/visca.1/focus", 542, ";", ";", "#X", "insert", "/visca.1/focus", 406, ";", ";", "#X", "insert", "/visca.1/focus", 271, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 3927, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 4062, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 4468, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 4875, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5687, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6229, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6906, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7718, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8395, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8937, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 9478, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 9885, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 10155, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 10562, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 10832, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 11374, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 11916, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12457, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 13134, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 13811, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 14218, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 14759, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 15301, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 15842, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 13270, ";", ";", "#X", "insert", "/visca.1/focus", 8937, ";", ";", "#X", "insert", "/visca.1/focus", 6229, ";", ";", "#X", "insert", "/visca.1/focus", 4604, ";", ";", "#X", "insert", "/visca.1/focus", 4468, ";", ";", "#X", "insert", "/visca.1/focus", 4198, ";", ";", "#X", "insert", "/visca.1/focus", 3656, ";", ";", "#X", "insert", "/visca.1/focus", 3114, ";", ";", "#X", "insert", "/visca.1/focus", 2573, ";", ";", "#X", "insert", "/visca.1/focus", 1896, ";", ";", "#X", "insert", "/visca.1/focus", 1354, ";", ";", "#X", "insert", "/visca.1/focus", 812, ";", ";", "#X", "insert", "/visca.1/focus", 406, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6635, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5822, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5010, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 3927, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 2573, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 1489, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 812, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 135, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus", 2031, ";", ";", "#X", "insert", "/visca.1/focus", 7853, ";", ";", "#X", "insert", "/visca.1/focus", 13405, ";", ";", "#X", "insert", "/visca.1/focus", 13406, ";", ";", "#X", "insert", "/visca.1/focus", 13411, ";", ";", "#X", "insert", "/visca.1/focus", 13420, ";", ";", "#X", "insert", "/visca.1/focus", 13429, ";", ";", "#X", "insert", "/visca.1/focus", 13438, ";", ";", "#X", "insert", "/visca.1/focus", 13442, ";", ";", "#X", "insert", "/visca.1/focus", 13450, ";", ";", "#X", "insert", "/visca.1/focus", 13457, ";", ";", "#X", "insert", "/visca.1/focus", 13469, ";", ";", "#X", "insert", "/visca.1/focus", 13480, ";", ";", "#X", "insert", "/visca.1/focus", 13494, ";", ";", "#X", "insert", "/visca.1/focus", 13500, ";", ";", "#X", "insert", "/visca.1/focus", 13507, ";", ";", "#X", "insert", "/visca.1/focus", 13509, ";", ";", "#X", "insert", "/visca.1/focus", 13513, ";", ";", "#X", "insert", "/visca.1/focus", 13526, ";", ";", "#X", "insert", "/visca.1/focus", 13551, ";", ";", "#X", "insert", "/visca.1/focus", 13606, ";", ";", "#X", "insert", "/visca.1/focus", 13640, ";", ";", "#X", "insert", "/visca.1/focus", 13667, ";", ";", "#X", "insert", "/visca.1/focus", 13692, ";", ";", "#X", "insert", "/visca.1/focus", 13709, ";", ";", "#X", "insert", "/visca.1/focus", 13715, ";", ";", "#X", "insert", "/visca.1/focus", 13721, ";", ";", "#X", "insert", "/visca.1/focus", 13723, ";", ";", "#X", "insert", "/visca.1/zoom", 3521, ";", ";", "#X", "insert", "/visca.1/zoom", 3385, ";", ";", "#X", "insert", "/visca.1/zoom", 3114, ";", ";", "#X", "insert", "/visca.1/zoom", 2437, ";", ";", "#X", "insert", "/visca.1/zoom", 1219, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/focus", 9343, ";", ";", "#X", "insert", "/visca.1/focus", 9208, ";", ";", "#X", "insert", "/visca.1/focus", 8937, ";", ";", "#X", "insert", "/visca.1/focus", 8395, ";", ";", "#X", "insert", "/visca.1/focus", 8124, ";", ";", "#X", "insert", "/visca.1/focus", 7989, ";", ";", "#X", "insert", "/visca.1/focus", 7853, ";", ";", "#X", "insert", "/visca.1/focus", 7718, ";", ";", "#X", "insert", "/visca.1/focus", 7583, ";", ";", "#X", "insert", "/visca.1/focus", 7447, ";", ";", "#X", "insert", "/visca.1/focus", 7312, ";", ";", "#X", "insert", "/visca.1/focus", 7041, ";", ";", "#X", "insert", "/visca.1/focus", 6906, ";", ";", "#X", "insert", "/visca.1/focus", 6770, ";", ";", "#X", "insert", "/visca.1/focus", 6635, ";", ";", "#X", "insert", "/visca.1/focus", 6499, ";", ";", "#X", "insert", "/visca.1/focus", 6364, ";", ";", "#X", "insert", "/visca.1/focus", 6229, ";", ";", "#X", "insert", "/visca.1/focus", 6093, ";", ";", "#X", "insert", "/visca.1/focus", 5822, ";", ";", "#X", "insert", "/visca.1/focus", 5552, ";", ";", "#X", "insert", "/visca.1/focus", 5416, ";", ";", "#X", "insert", "/visca.1/focus", 5281, ";", ";", "#X", "insert", "/visca.1/focus", 5145, ";", ";", "#X", "insert", "/visca.1/focus", 5010, ";", ";", "#X", "insert", "/visca.1/focus", 4875, ";", ";", "#X", "insert", "/visca.1/focus", 4739, ";", ";", "#X", "insert", "/visca.1/focus", 4604, ";", ";", "#X", "insert", "/visca.1/focus", 4468, ";", ";", "#X", "insert", "/visca.1/focus", 4333, ";", ";", "#X", "insert", "/visca.1/focus", 4062, ";", ";", "#X", "insert", "/visca.1/focus", 3927, ";", ";", "#X", "insert", "/visca.1/focus", 3791, ";", ";", "#X", "insert", "/visca.1/focus", 3656, ";", ";", "#X", "insert", "/visca.1/focus", 3521, ";", ";", "#X", "insert", "/visca.1/focus", 3385, ";", ";", "#X", "insert", "/visca.1/focus", 3250, ";", ";", "#X", "insert", "/visca.1/focus", 3114, ";", ";", "#X", "insert", "/visca.1/focus", 2979, ";", ";", "#X", "insert", "/visca.1/focus", 2844, ";", ";", "#X", "insert", "/visca.1/focus", 2708, ";", ";", "#X", "insert", "/visca.1/focus", 2573, ";", ";", "#X", "insert", "/visca.1/focus", 2437, ";", ";", "#X", "insert", "/visca.1/focus", 2302, ";", ";", "#X", "insert", "/visca.1/focus", 2166, ";", ";", "#X", "insert", "/visca.1/focus", 2031, ";", ";", "#X", "insert", "/visca.1/focus", 2031, ";", ";", "#X", "insert", "/visca.1/focus", 1760, ";", ";", "#X", "insert", "/visca.1/focus", 1625, ";", ";", "#X", "insert", "/visca.1/focus", 1354, ";", ";", "#X", "insert", "/visca.1/focus", 1219, ";", ";", "#X", "insert", "/visca.1/focus", 1083, ";", ";", "#X", "insert", "/visca.1/focus", 948, ";", ";", "#X", "insert", "/visca.1/focus", 812, ";", ";", "#X", "insert", "/visca.1/focus", 677, ";", ";", "#X", "insert", "/visca.1/focus", 542, ";", ";", "#X", "insert", "/visca.1/focus", 406, ";", ";", "#X", "insert", "/visca.1/focus", 271, ";", ";", "#X", "insert", "/visca.1/focus", 135, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 4604, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 4875, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5010, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5145, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5281, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5416, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5552, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5687, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5822, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5958, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6093, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6229, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6364, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6635, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6770, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6906, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7041, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7176, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7447, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7718, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7989, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8124, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8260, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8395, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8531, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8666, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8801, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 9072, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 9208, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 9478, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 9614, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 9885, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 10020, ";", ";", "#X", "insert", "/visca.1/focus", 4739, ";", ";", "#X", "insert", "/visca.1/focus", 4875, ";", ";", "#X", "insert", "/visca.1/focus", 5010, ";", ";", "#X", "insert", "/visca.1/focus", 5281, ";", ";", "#X", "insert", "/visca.1/focus", 5416, ";", ";", "#X", "insert", "/visca.1/focus", 5552, ";", ";", "#X", "insert", "/visca.1/focus", 5687, ";", ";", "#X", "insert", "/visca.1/focus", 5822, ";", ";", "#X", "insert", "/visca.1/focus", 5958, ";", ";", "#X", "insert", "/visca.1/focus", 6093, ";", ";", "#X", "insert", "/visca.1/focus", 6229, ";", ";", "#X", "insert", "/visca.1/focus", 6364, ";", ";", "#X", "insert", "/visca.1/focus", 6499, ";", ";", "#X", "insert", "/visca.1/focus", 6635, ";", ";", "#X", "insert", "/visca.1/focus", 7041, ";", ";", "#X", "insert", "/visca.1/focus", 7176, ";", ";", "#X", "insert", "/visca.1/focus", 7312, ";", ";", "#X", "insert", "/visca.1/focus", 7447, ";", ";", "#X", "insert", "/visca.1/focus", 7583, ";", ";", "#X", "insert", "/visca.1/focus", 7718, ";", ";", "#X", "insert", "/visca.1/focus", 7853, ";", ";", "#X", "insert", "/visca.1/focus", 7989, ";", ";", "#X", "insert", "/visca.1/focus", 8260, ";", ";", "#X", "insert", "/visca.1/focus", 8395, ";", ";", "#X", "insert", "/visca.1/focus", 8531, ";", ";", "#X", "insert", "/visca.1/focus", 8666, ";", ";", "#X", "insert", "/visca.1/focus", 8801, ";", ";", "#X", "insert", "/visca.1/focus", 8937, ";", ";", "#X", "insert", "/visca.1/focus", 9208, ";", ";", "#X", "insert", "/visca.1/focus", 9478, ";", ";", "#X", "insert", "/visca.1/focus", 9614, ";", ";", "#X", "insert", "/visca.1/focus", 9749, ";", ";", "#X", "insert", "/visca.1/focus", 9885, ";", ";", "#X", "insert", "/visca.1/focus", 10155, ";", ";", "#X", "insert", "/visca.1/focus", 10291, ";", ";", "#X", "insert", "/visca.1/focus", 10562, ";", ";", "#X", "insert", "/visca.1/focus", 10697, ";", ";", "#X", "insert", "/visca.1/focus", 10832, ";", ";", "#X", "insert", "/visca.1/focus", 11103, ";", ";", "#X", "insert", "/visca.1/focus", 11374, ";", ";", "#X", "insert", "/visca.1/focus", 11645, ";", ";", "#X", "insert", "/visca.1/focus", 11916, ";", ";", "#X", "insert", "/visca.1/focus", 12186, ";", ";", "#X", "insert", "/visca.1/focus", 12593, ";", ";", "#X", "insert", "/visca.1/focus", 12999, ";", ";", "#X", "insert", "/visca.1/focus", 13540, ";", ";", "#X", "insert", "/visca.1/focus", 13811, ";", ";", "#X", "insert", "/visca.1/focus", 14218, ";", ";", "#X", "insert", "/visca.1/focus", 14488, ";", ";", "#X", "insert", "/visca.1/focus", 14759, ";", ";", "#X", "insert", "/visca.1/focus", 15030, ";", ";", "#X", "insert", "/visca.1/focus", 15436, ";", ";", "#X", "insert", "/visca.1/focus", 15707, ";", ";", "#X", "insert", "/visca.1/focus", 16113, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/mode", "manual", ";", ";", "#X", "insert", "/visca.1/iris", 15, ";", ";", "#X", "insert", "/visca.1/shutter", 6, ";", ";", "#X", "insert", "/visca.1/gain", 1, ";", ";", "#X", "insert", "/visca.1/gain", 10, ";", ";", "#X", "insert", "/visca.1/gain", 15, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 10020, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 9749, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 9614, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8801, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7718, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6635, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5958, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5552, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5010, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 4739, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 4468, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 4198, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 4062, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 3927, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 3791, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 3521, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 3250, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 2844, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 2573, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 2302, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 1896, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 1625, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 1489, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 1219, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 812, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 542, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 271, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 5822, ";", ";", "#X", "insert", "/visca.1/zoom", 6229, ";", ";", "#X", "insert", "/visca.1/zoom", 6364, ";", ";", "#X", "insert", "/visca.1/zoom", 6635, ";", ";", "#X", "insert", "/visca.1/zoom", 6770, ";", ";", "#X", "insert", "/visca.1/zoom", 7041, ";", ";", "#X", "insert", "/visca.1/zoom", 7176, ";", ";", "#X", "insert", "/visca.1/zoom", 7176, ";", ";", "#X", "insert", "/visca.1/zoom", 7447, ";", ";", "#X", "insert", "/visca.1/zoom", 7718, ";", ";", "#X", "insert", "/visca.1/zoom", 8124, ";", ";", "#X", "insert", "/visca.1/zoom", 8395, ";", ";", "#X", "insert", "/visca.1/zoom", 8666, ";", ";", "#X", "insert", "/visca.1/zoom", 8801, ";", ";", "#X", "insert", "/visca.1/zoom", 8937, ";", ";", "#X", "insert", "/visca.1/zoom", 9072, ";", ";", "#X", "insert", "/visca.1/zoom", 9208, ";", ";", "#X", "insert", "/visca.1/zoom", 9478, ";", ";", "#X", "insert", "/visca.1/zoom", 9614, ";", ";", "#X", "insert", "/visca.1/zoom", 9749, ";", ";", "#X", "insert", "/visca.1/zoom", 9885, ";", ";", "#X", "insert", "/visca.1/zoom", 10155, ";", ";", "#X", "insert", "/visca.1/zoom", 10291, ";", ";", "#X", "insert", "/visca.1/zoom", 10426, ";", ";", "#X", "insert", "/visca.1/zoom", 10562, ";", ";", "#X", "insert", "/visca.1/zoom", 10697, ";", ";", "#X", "insert", "/visca.1/zoom", 10832, ";", ";", "#X", "insert", "/visca.1/zoom", 11916, ";", ";", "#X", "insert", "/visca.1/zoom", 12186, ";", ";", "#X", "insert", "/visca.1/focus", 7989, ";", ";", "#X", "insert", "/visca.1/focus", 7853, ";", ";", "#X", "insert", "/visca.1/focus", 7718, ";", ";", "#X", "insert", "/visca.1/focus", 7583, ";", ";", "#X", "insert", "/visca.1/focus", 7312, ";", ";", "#X", "insert", "/visca.1/focus", 6906, ";", ";", "#X", "insert", "/visca.1/focus", 6499, ";", ";", "#X", "insert", "/visca.1/focus", 6229, ";", ";", "#X", "insert", "/visca.1/focus", 5958, ";", ";", "#X", "insert", "/visca.1/focus", 5687, ";", ";", "#X", "insert", "/visca.1/focus", 5552, ";", ";", "#X", "insert", "/visca.1/focus", 5416, ";", ";", "#X", "insert", "/visca.1/focus", 5145, ";", ";", "#X", "insert", "/visca.1/focus", 4739, ";", ";", "#X", "insert", "/visca.1/focus", 4468, ";", ";", "#X", "insert", "/visca.1/focus", 4198, ";", ";", "#X", "insert", "/visca.1/focus", 3927, ";", ";", "#X", "insert", "/visca.1/focus", 3791, ";", ";", "#X", "insert", "/visca.1/focus", 3656, ";", ";", "#X", "insert", "/visca.1/focus", 3385, ";", ";", "#X", "insert", "/visca.1/focus", 3114, ";", ";", "#X", "insert", "/visca.1/focus", 2844, ";", ";", "#X", "insert", "/visca.1/focus", 2573, ";", ";", "#X", "insert", "/visca.1/focus", 2437, ";", ";", "#X", "insert", "/visca.1/focus", 2166, ";", ";", "#X", "insert", "/visca.1/focus", 2031, ";", ";", "#X", "insert", "/visca.1/focus", 1896, ";", ";", "#X", "insert", "/visca.1/focus", 1760, ";", ";", "#X", "insert", "/visca.1/focus", 1625, ";", ";", "#X", "insert", "/visca.1/focus", 1489, ";", ";", "#X", "insert", "/visca.1/focus", 1354, ";", ";", "#X", "insert", "/visca.1/focus", 1219, ";", ";", "#X", "insert", "/visca.1/focus", 1083, ";", ";", "#X", "insert", "/visca.1/focus", 948, ";", ";", "#X", "insert", "/visca.1/focus", 812, ";", ";", "#X", "insert", "/visca.1/focus", 677, ";", ";", "#X", "insert", "/visca.1/focus", 542, ";", ";", "#X", "insert", "/visca.1/focus", 7989, ";", ";", "#X", "insert", "/visca.1/focus", 6906, ";", ";", "#X", "insert", "/visca.1/focus", 5416, ";", ";", "#X", "insert", "/visca.1/focus", 7447, ";", ";", "#X", "insert", "/visca.1/focus", 7583, ";", ";", "#X", "insert", "/visca.1/focus", 7853, ";", ";", "#X", "insert", "/visca.1/focus", 8531, ";", ";", "#X", "insert", "/visca.1/focus", 9343, ";", ";", "#X", "insert", "/visca.1/focus", 10562, ";", ";", "#X", "insert", "/visca.1/focus", 11239, ";", ";", "#X", "insert", "/visca.1/focus", 12186, ";", ";", "#X", "insert", "/visca.1/focus", 12863, ";", ";", "#X", "insert", "/visca.1/focus", 13270, ";", ";", "#X", "insert", "/visca.1/focus", 13405, ";", ";", "#X", "insert", "/visca.1/focus", 13540, ";", ";", "#X", "insert", "/visca.1/focus", 13676, ";", ";", "#X", "insert", "/visca.1/focus", 13811, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 11239, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12863, ";", ";", "#X", "insert", "/visca.1/focus", 12051, ";", ";", "#X", "insert", "/visca.1/focus", 11916, ";", ";", "#X", "insert", "/visca.1/focus", 11645, ";", ";", "#X", "insert", "/visca.1/focus", 11239, ";", ";", "#X", "insert", "/visca.1/focus", 10562, ";", ";", "#X", "insert", "/visca.1/focus", 9885, ";", ";", "#X", "insert", "/visca.1/focus", 9208, ";", ";", "#X", "insert", "/visca.1/focus", 7989, ";", ";", "#X", "insert", "/visca.1/focus", 7583, ";", ";", "#X", "insert", "/visca.1/focus", 7041, ";", ";", "#X", "insert", "/visca.1/focus", 6770, ";", ";", "#X", "insert", "/visca.1/focus", 6635, ";", ";", "#X", "insert", "/visca.1/focus", 6499, ";", ";", "#X", "insert", "/visca.1/focus", 6364, ";", ";", "#X", "insert", "/visca.1/focus", 6093, ";", ";", "#X", "insert", "/visca.1/focus", 5822, ";", ";", "#X", "insert", "/visca.1/focus", 5416, ";", ";", "#X", "insert", "/visca.1/focus", 4875, ";", ";", "#X", "insert", "/visca.1/focus", 4468, ";", ";", "#X", "insert", "/visca.1/focus", 4062, ";", ";", "#X", "insert", "/visca.1/focus", 3791, ";", ";", "#X", "insert", "/visca.1/focus", 3385, ";", ";", "#X", "insert", "/visca.1/focus", 3250, ";", ";", "#X", "insert", "/visca.1/focus", 2979, ";", ";", "#X", "insert", "/visca.1/focus", 2844, ";", ";", "#X", "insert", "/visca.1/focus", 2708, ";", ";", "#X", "insert", "/visca.1/focus", 2573, ";", ";", "#X", "insert", "/visca.1/focus", 2437, ";", ";", "#X", "insert", "/visca.1/focus", 2166, ";", ";", "#X", "insert", "/visca.1/focus", 1896, ";", ";", "#X", "insert", "/visca.1/focus", 1625, ";", ";", "#X", "insert", "/visca.1/focus", 1489, ";", ";", "#X", "insert", "/visca.1/focus", 1083, ";", ";", "#X", "insert", "/visca.1/focus", 812, ";", ";", "#X", "insert", "/visca.1/focus", 677, ";", ";", "#X", "insert", "/visca.1/focus", 542, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6093, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6499, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7041, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7989, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 9072, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 10291, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 11239, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 11780, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12863, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 13540, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 14353, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 15030, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 15707, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 13676, ";", ";", "#X", "insert", "/visca.1/focus", 13947, ";", ";", "#X", "insert", "/visca.1/focus", 14082, ";", ";", "#X", "insert", "/visca.1/focus", 14218, ";", ";", "#X", "insert", "/visca.1/focus", 14488, ";", ";", "#X", "insert", "/visca.1/focus", 15030, ";", ";", "#X", "insert", "/visca.1/focus", 15572, ";", ";", "#X", "insert", "/visca.1/focus", 15978, ";", ";", "#X", "insert", "/visca.1/focus", 16249, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 15842, ";", ";", "#X", "insert", "/visca.1/focus", 15842, ";", ";", "#X", "insert", "/visca.1/focus", 15436, ";", ";", "#X", "insert", "/visca.1/focus", 13811, ";", ";", "#X", "insert", "/visca.1/focus", 11509, ";", ";", "#X", "insert", "/visca.1/focus", 8801, ";", ";", "#X", "insert", "/visca.1/focus", 6906, ";", ";", "#X", "insert", "/visca.1/focus", 4739, ";", ";", "#X", "insert", "/visca.1/focus", 2708, ";", ";", "#X", "insert", "/visca.1/focus", 948, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 5281, ";", ";", "#X", "insert", "/visca.1/focus", 5416, ";", ";", "#X", "insert", "/visca.1/focus", 5552, ";", ";", "#X", "insert", "/visca.1/focus", 5822, ";", ";", "#X", "insert", "/visca.1/focus", 6093, ";", ";", "#X", "insert", "/visca.1/focus", 6229, ";", ";", "#X", "insert", "/visca.1/focus", 6364, ";", ";", "#X", "insert", "/visca.1/zoom", 6635, ";", ";", "#X", "insert", "/visca.1/zoom", 6635, ";", ";", "#X", "insert", "/visca.1/zoom", 5687, ";", ";", "#X", "insert", "/visca.1/zoom", 5552, ";", ";", "#X", "insert", "/visca.1/zoom", 5416, ";", ";", "#X", "insert", "/visca.1/zoom", 5281, ";", ";", "#X", "insert", "/visca.1/zoom", 5145, ";", ";", "#X", "insert", "/visca.1/zoom", 4875, ";", ";", "#X", "insert", "/visca.1/zoom", 4739, ";", ";", "#X", "insert", "/visca.1/zoom", 4468, ";", ";", "#X", "insert", "/visca.1/zoom", 4198, ";", ";", "#X", "insert", "/visca.1/zoom", 4062, ";", ";", "#X", "insert", "/visca.1/zoom", 3927, ";", ";", "#X", "insert", "/visca.1/zoom", 3791, ";", ";", "#X", "insert", "/visca.1/zoom", 3656, ";", ";", "#X", "insert", "/visca.1/zoom", 3521, ";", ";", "#X", "insert", "/visca.1/zoom", 3385, ";", ";", "#X", "insert", "/visca.1/zoom", 3114, ";", ";", "#X", "insert", "/visca.1/zoom", 2844, ";", ";", "#X", "insert", "/visca.1/zoom", 2573, ";", ";", "#X", "insert", "/visca.1/zoom", 2302, ";", ";", "#X", "insert", "/visca.1/zoom", 2166, ";", ";", "#X", "insert", "/visca.1/zoom", 2166, ";", ";", "#X", "insert", "/visca.1/zoom", 1896, ";", ";", "#X", "insert", "/visca.1/zoom", 2031, ";", ";", "#X", "insert", "/visca.1/zoom", 2166, ";", ";", "#X", "insert", "/visca.1/zoom", 2302, ";", ";", "#X", "insert", "/visca.1/zoom", 2573, ";", ";", "#X", "insert", "/visca.1/zoom", 2708, ";", ";", "#X", "insert", "/visca.1/zoom", 2844, ";", ";", "#X", "insert", "/visca.1/zoom", 2979, ";", ";", "#X", "insert", "/visca.1/zoom", 3114, ";", ";", "#X", "insert", "/visca.1/zoom", 3250, ";", ";", "#X", "insert", "/visca.1/zoom", 3385, ";", ";", "#X", "insert", "/visca.1/zoom", 3521, ";", ";", "#X", "insert", "/visca.1/zoom", 3656, ";", ";", "#X", "insert", "/visca.1/zoom", 3791, ";", ";", "#X", "insert", "/visca.1/zoom", 3927, ";", ";", "#X", "insert", "/visca.1/zoom", 4062, ";", ";", "#X", "insert", "/visca.1/zoom", 4198, ";", ";", "#X", "insert", "/visca.1/zoom", 4333, ";", ";", "#X", "insert", "/visca.1/zoom", 4468, ";", ";", "#X", "insert", "/visca.1/zoom", 4875, ";", ";", "#X", "insert", "/visca.1/zoom", 5145, ";", ";", "#X", "insert", "/visca.1/zoom", 5416, ";", ";", "#X", "insert", "/visca.1/zoom", 5552, ";", ";", "#X", "insert", "/visca.1/zoom", 5687, ";", ";", "#X", "insert", "/visca.1/zoom", 5822, ";", ";", "#X", "insert", "/visca.1/zoom", 5958, ";", ";", "#X", "insert", "/visca.1/zoom", 6093, ";", ";", "#X", "insert", "/visca.1/zoom", 6229, ";", ";", "#X", "insert", "/visca.1/zoom", 6364, ";", ";", "#X", "insert", "/visca.1/zoom", 6635, ";", ";", "#X", "insert", "/visca.1/zoom", 7041, ";", ";", "#X", "insert", "/visca.1/zoom", 7312, ";", ";", "#X", "insert", "/visca.1/zoom", 7583, ";", ";", "#X", "insert", "/visca.1/zoom", 7718, ";", ";", "#X", "insert", "/visca.1/zoom", 7853, ";", ";", "#X", "insert", "/visca.1/zoom", 8124, ";", ";", "#X", "insert", "/visca.1/zoom", 8395, ";", ";", "#X", "insert", "/visca.1/zoom", 8531, ";", ";", "#X", "insert", "/visca.1/zoom", 8666, ";", ";", "#X", "insert", "/visca.1/zoom", 8801, ";", ";", "#X", "insert", "/visca.1/zoom", 8937, ";", ";", "#X", "insert", "/visca.1/zoom", 9072, ";", ";", "#X", "insert", "/visca.1/zoom", 9208, ";", ";", "#X", "insert", "/visca.1/zoom", 9343, ";", ";", "#X", "insert", "/visca.1/zoom", 9478, ";", ";", "#X", "insert", "/visca.1/zoom", 9614, ";", ";", "#X", "insert", "/visca.1/zoom", 9749, ";", ";", "#X", "insert", "/visca.1/zoom", 9885, ";", ";", "#X", "insert", "/visca.1/zoom", 10020, ";", ";", "#X", "insert", "/visca.1/zoom", 10155, ";", ";", "#X", "insert", "/visca.1/zoom", 10291, ";", ";", "#X", "insert", "/visca.1/zoom", 10426, ";", ";", "#X", "insert", "/visca.1/zoom", 10562, ";", ";", "#X", "insert", "/visca.1/zoom", 10832, ";", ";", "#X", "insert", "/visca.1/zoom", 10968, ";", ";", "#X", "insert", "/visca.1/zoom", 11239, ";", ";", "#X", "insert", "/visca.1/zoom", 11374, ";", ";", "#X", "insert", "/visca.1/zoom", 11509, ";", ";", "#X", "insert", "/visca.1/zoom", 11645, ";", ";", "#X", "insert", "/visca.1/zoom", 11780, ";", ";", "#X", "insert", "/visca.1/zoom", 11916, ";", ";", "#X", "insert", "/visca.1/zoom", 12186, ";", ";", "#X", "insert", "/visca.1/zoom", 12322, ";", ";", "#X", "insert", "/visca.1/zoom", 14218, ";", ";", "#X", "insert", "/visca.1/zoom", 7176, ";", ";", "#X", "insert", "/visca.1/zoom", 7176, ";", ";", "#X", "insert", "/visca.1/zoom", 7041, ";", ";", "#X", "insert", "/visca.1/zoom", 6635, ";", ";", "#X", "insert", "/visca.1/zoom", 6093, ";", ";", "#X", "insert", "/visca.1/zoom", 5687, ";", ";", "#X", "insert", "/visca.1/zoom", 5145, ";", ";", "#X", "insert", "/visca.1/zoom", 4739, ";", ";", "#X", "insert", "/visca.1/zoom", 4604, ";", ";", "#X", "insert", "/visca.1/zoom", 4468, ";", ";", "#X", "insert", "/visca.1/zoom", 4333, ";", ";", "#X", "insert", "/visca.1/zoom", 4198, ";", ";", "#X", "insert", "/visca.1/zoom", 4062, ";", ";", "#X", "insert", "/visca.1/zoom", 3927, ";", ";", "#X", "insert", "/visca.1/zoom", 3791, ";", ";", "#X", "insert", "/visca.1/zoom", 3656, ";", ";", "#X", "insert", "/visca.1/zoom", 3521, ";", ";", "#X", "insert", "/visca.1/zoom", 3385, ";", ";", "#X", "insert", "/visca.1/zoom", 3250, ";", ";", "#X", "insert", "/visca.1/zoom", 3114, ";", ";", "#X", "insert", "/visca.1/zoom", 2979, ";", ";", "#X", "insert", "/visca.1/zoom", 2844, ";", ";", "#X", "insert", "/visca.1/zoom", 2844, ";", ";", "#X", "insert", "/visca.1/zoom", 2573, ";", ";", "#X", "insert", "/visca.1/zoom", 2708, ";", ";", "#X", "insert", "/visca.1/zoom", 9072, ";", ";", "#X", "insert", "/visca.1/zoom", 9343, ";", ";", "#X", "insert", "/visca.1/zoom", 9885, ";", ";", "#X", "insert", "/visca.1/zoom", 10697, ";", ";", "#X", "insert", "/visca.1/zoom", 11374, ";", ";", "#X", "insert", "/visca.1/zoom", 11780, ";", ";", "#X", "insert", "/visca.1/zoom", 12051, ";", ";", "#X", "insert", "/visca.1/zoom", 12186, ";", ";", "#X", "insert", "/visca.1/zoom", 12322, ";", ";", "#X", "insert", "/visca.1/zoom", 12186, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7176, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7447, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7583, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7718, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7583, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7041, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6229, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 4875, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 3791, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 2708, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 1896, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 948, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 271, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5958, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6229, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6364, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6906, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7583, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8395, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 9749, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 11645, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 13811, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 15707, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 12457, ";", ";", "#X", "insert", "/visca.1/focus", 12728, ";", ";", "#X", "insert", "/visca.1/focus", 12999, ";", ";", "#X", "insert", "/visca.1/focus", 13540, ";", ";", "#X", "insert", "/visca.1/focus", 13947, ";", ";", "#X", "insert", "/visca.1/focus", 14353, ";", ";", "#X", "insert", "/visca.1/focus", 14895, ";", ";", "#X", "insert", "/visca.1/focus", 15301, ";", ";", "#X", "insert", "/visca.1/focus", 15707, ";", ";", "#X", "insert", "/visca.1/focus", 15978, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 15707, ";", ";", "#X", "insert", "/visca.1/focus", 14488, ";", ";", "#X", "insert", "/visca.1/focus", 13134, ";", ";", "#X", "insert", "/visca.1/focus", 11916, ";", ";", "#X", "insert", "/visca.1/focus", 10697, ";", ";", "#X", "insert", "/visca.1/focus", 9885, ";", ";", "#X", "insert", "/visca.1/focus", 8801, ";", ";", "#X", "insert", "/visca.1/focus", 7989, ";", ";", "#X", "insert", "/visca.1/focus", 7312, ";", ";", "#X", "insert", "/visca.1/focus", 6635, ";", ";", "#X", "insert", "/visca.1/focus", 6093, ";", ";", "#X", "insert", "/visca.1/focus", 5687, ";", ";", "#X", "insert", "/visca.1/focus", 5416, ";", ";", "#X", "insert", "/visca.1/focus", 5010, ";", ";", "#X", "insert", "/visca.1/focus", 4739, ";", ";", "#X", "insert", "/visca.1/focus", 4604, ";", ";", "#X", "insert", "/visca.1/focus", 4468, ";", ";", "#X", "insert", "/visca.1/focus", 4198, ";", ";", "#X", "insert", "/visca.1/focus", 4062, ";", ";", "#X", "insert", "/visca.1/focus", 3656, ";", ";", "#X", "insert", "/visca.1/focus", 3521, ";", ";", "#X", "insert", "/visca.1/focus", 3250, ";", ";", "#X", "insert", "/visca.1/focus", 2844, ";", ";", "#X", "insert", "/visca.1/focus", 2708, ";", ";", "#X", "insert", "/visca.1/focus", 2437, ";", ";", "#X", "insert", "/visca.1/focus", 2166, ";", ";", "#X", "insert", "/visca.1/focus", 1896, ";", ";", "#X", "insert", "/visca.1/focus", 1625, ";", ";", "#X", "insert", "/visca.1/focus", 1354, ";", ";", "#X", "insert", "/visca.1/focus", 1083, ";", ";", "#X", "insert", "/visca.1/focus", 406, ";", ";", "#X", "insert", "/visca.1/focus", 271, ";", ";", "#X", "insert", "/visca.1/focus", 135, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 3521, ";", ";", "#X", "insert", "/visca.1/focus", 3656, ";", ";", "#X", "insert", "/visca.1/focus", 4333, ";", ";", "#X", "insert", "/visca.1/focus", 5416, ";", ";", "#X", "insert", "/visca.1/focus", 6635, ";", ";", "#X", "insert", "/visca.1/focus", 7989, ";", ";", "#X", "insert", "/visca.1/focus", 8666, ";", ";", "#X", "insert", "/visca.1/focus", 9478, ";", ";", "#X", "insert", "/visca.1/focus", 10291, ";", ";", "#X", "insert", "/visca.1/focus", 10697, ";", ";", "#X", "insert", "/visca.1/focus", 11374, ";", ";", "#X", "insert", "/visca.1/focus", 11780, ";", ";", "#X", "insert", "/visca.1/focus", 12051, ";", ";", "#X", "insert", "/visca.1/focus", 12322, ";", ";", "#X", "insert", "/visca.1/focus", 12457, ";", ";", "#X", "insert", "/visca.1/focus", 12728, ";", ";", "#X", "insert", "/visca.1/focus", 13270, ";", ";", "#X", "insert", "/visca.1/focus", 13405, ";", ";", "#X", "insert", "/visca.1/focus", 13811, ";", ";", "#X", "insert", "/visca.1/focus", 14082, ";", ";", "#X", "insert", "/visca.1/focus", 14353, ";", ";", "#X", "insert", "/visca.1/focus", 14488, ";", ";", "#X", "insert", "/visca.1/focus", 14624, ";", ";", "#X", "insert", "/visca.1/focus", 14895, ";", ";", "#X", "insert", "/visca.1/focus", 15165, ";", ";", "#X", "insert", "/visca.1/focus", 15436, ";", ";", "#X", "insert", "/visca.1/focus", 15707, ";", ";", "#X", "insert", "/visca.1/focus", 15978, ";", ";", "#X", "insert", "/visca.1/focus", 16249, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 14082, ";", ";", "#X", "insert", "/visca.1/focus", 12863, ";", ";", "#X", "insert", "/visca.1/focus", 11374, ";", ";", "#X", "insert", "/visca.1/focus", 10562, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7989, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6499, ";", ";", "#X", "insert", "/visca.1/focus", 7853, ";", ";", "#X", "insert", "/visca.1/focus/mode", "auto", ";", ";", "#X", "insert", "/visca.1/focus/mode", "manual", ";", ";", "#X", "insert", "/visca.1/ir", 1, ";", ";", "#X", "insert", "/visca.1/ir", 0, ";", ";", "#X", "insert", "/visca.1/ir", 1, ";", ";", "#X", "insert", "/visca.1/ir/correction", 1, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 14624, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 14759, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 15165, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 15572, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 15842, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16113, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16249, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 14082, ";", ";", "#X", "insert", "/visca.1/focus", 14353, ";", ";", "#X", "insert", "/visca.1/focus", 14624, ";", ";", "#X", "insert", "/visca.1/focus", 15165, ";", ";", "#X", "insert", "/visca.1/focus", 15707, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5552, ";", ";", "#X", "insert", "/visca.1/focus", 4604, ";", ";", "#X", "insert", "/visca.1/focus", 3250, ";", ";", "#X", "insert", "/visca.1/ir", 0, ";", ";", "#X", "insert", "/visca.1/ir/correction", 0, ";", ";", "#X", "insert", "/visca.1/ir", 1, ";", ";", "#X", "insert", "/visca.1/ir/correction", 1, ";", ";", "#X", "insert", "/visca.1/focus/standart", "far", ";", ";", "#X", "insert", "/visca.1/focus/standart", "near", ";", ";", "#X", "insert", "/visca.1/focus/standart", "far", ";", ";", "#X", "insert", "/visca.1/zoom/standart", "wide", ";", ";", "#X", "insert", "/visca.1/slowshutter", "auto", ";", ";", "#X", "insert", "/visca.1/mode", "auto", ";", ";", "#X", "insert", "/visca.1/ir", 0, ";", ";", "#X", "insert", "/visca.1/ir/correction", 0, ";", ";", "#X", "insert", "/visca.1/shutter", 7, ";", ";", "#X", "insert", "/visca.1/mode", "manual", ";", ";", "#X", "insert", "/visca.1/shutter", 8, ";", ";", "#X", "insert", "/visca.1/zoom", 14353, ";", ";", "#X", "insert", "/visca.1/zoom", 14488, ";", ";", "#X", "insert", "/visca.1/zoom", 14759, ";", ";", "#X", "insert", "/visca.1/zoom", 15030, ";", ";", "#X", "insert", "/visca.1/zoom", 15436, ";", ";", "#X", "insert", "/visca.1/zoom", 15978, ";", ";", "#X", "insert", "/visca.1/zoom", 16249, ";", ";", "#X", "insert", "/visca.1/zoom", 16384, ";", ";", "#X", "insert", "/visca.1/zoom", 16384, ";", ";", "#X", "insert", "/visca.1/zoom", 16384, ";", ";", "#X", "insert", "/visca.1/zoom", 16384, ";", ";", "#X", "insert", "/visca.1/zoom", 16384, ";", ";", "#X", "insert", "/visca.1/zoom", 16384, ";", ";", "#X", "insert", "/visca.1/zoom", 16384, ";", ";", "#X", "insert", "/visca.1/zoom", 16384, ";", ";", "#X", "insert", "/visca.1/zoom", 16384, ";", ";", "#X", "insert", "/visca.1/zoom", 16384, ";", ";", "#X", "insert", "/visca.1/zoom", 16384, ";", ";", "#X", "insert", "/visca.1/zoom", 16384, ";", ";", "#X", "insert", "/visca.1/zoom", 16384, ";", ";", "#X", "insert", "/visca.1/zoom", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 9072, ";", ";", "#X", "insert", "/visca.1/focus", 9343, ";", ";", "#X", "insert", "/visca.1/focus", 9478, ";", ";", "#X", "insert", "/visca.1/focus", 9614, ";", ";", "#X", "insert", "/visca.1/focus", 9749, ";", ";", "#X", "insert", "/visca.1/focus", 9885, ";", ";", "#X", "insert", "/visca.1/focus", 10020, ";", ";", "#X", "insert", "/visca.1/focus", 10155, ";", ";", "#X", "insert", "/visca.1/focus", 10291, ";", ";", "#X", "insert", "/visca.1/focus", 10426, ";", ";", "#X", "insert", "/visca.1/focus", 10697, ";", ";", "#X", "insert", "/visca.1/focus", 10832, ";", ";", "#X", "insert", "/visca.1/focus", 10968, ";", ";", "#X", "insert", "/visca.1/focus", 11103, ";", ";", "#X", "insert", "/visca.1/focus", 11239, ";", ";", "#X", "insert", "/visca.1/focus", 11374, ";", ";", "#X", "insert", "/visca.1/focus", 11509, ";", ";", "#X", "insert", "/visca.1/focus", 11780, ";", ";", "#X", "insert", "/visca.1/focus", 11916, ";", ";", "#X", "insert", "/visca.1/focus", 12051, ";", ";", "#X", "insert", "/visca.1/focus", 12186, ";", ";", "#X", "insert", "/visca.1/focus", 12322, ";", ";", "#X", "insert", "/visca.1/focus", 12457, ";", ";", "#X", "insert", "/visca.1/focus", 12593, ";", ";", "#X", "insert", "/visca.1/focus", 12728, ";", ";", "#X", "insert", "/visca.1/focus", 12999, ";", ";", "#X", "insert", "/visca.1/focus", 13134, ";", ";", "#X", "insert", "/visca.1/focus", 13270, ";", ";", "#X", "insert", "/visca.1/focus", 13405, ";", ";", "#X", "insert", "/visca.1/focus", 13540, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 11374, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 11509, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 11916, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12322, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12999, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 13676, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 14353, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 14759, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 15436, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 15842, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16249, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 12728, ";", ";", "#X", "insert", "/visca.1/focus", 12593, ";", ";", "#X", "insert", "/visca.1/focus", 12186, ";", ";", "#X", "insert", "/visca.1/focus", 11916, ";", ";", "#X", "insert", "/visca.1/focus", 11645, ";", ";", "#X", "insert", "/visca.1/focus", 11239, ";", ";", "#X", "insert", "/visca.1/focus", 10968, ";", ";", "#X", "insert", "/visca.1/focus", 10832, ";", ";", "#X", "insert", "/visca.1/focus", 10697, ";", ";", "#X", "insert", "/visca.1/focus", 10562, ";", ";", "#X", "insert", "/visca.1/focus", 10426, ";", ";", "#X", "insert", "/visca.1/focus", 10291, ";", ";", "#X", "insert", "/visca.1/focus", 10155, ";", ";", "#X", "insert", "/visca.1/focus", 10020, ";", ";", "#X", "insert", "/visca.1/focus", 9885, ";", ";", "#X", "insert", "/visca.1/focus", 9749, ";", ";", "#X", "insert", "/visca.1/focus", 9614, ";", ";", "#X", "insert", "/visca.1/focus", 9478, ";", ";", "#X", "insert", "/visca.1/focus", 9343, ";", ";", "#X", "insert", "/visca.1/focus", 9072, ";", ";", "#X", "insert", "/visca.1/focus", 8801, ";", ";", "#X", "insert", "/visca.1/focus", 8666, ";", ";", "#X", "insert", "/visca.1/focus", 8531, ";", ";", "#X", "insert", "/visca.1/focus", 8395, ";", ";", "#X", "insert", "/visca.1/focus", 8260, ";", ";", "#X", "insert", "/visca.1/focus", 8124, ";", ";", "#X", "insert", "/visca.1/focus", 7989, ";", ";", "#X", "insert", "/visca.1/focus", 8124, ";", ";", "#X", "insert", "/visca.1/focus", 8260, ";", ";", "#X", "insert", "/visca.1/focus", 8395, ";", ";", "#X", "insert", "/visca.1/focus", 8531, ";", ";", "#X", "insert", "/visca.1/focus", 8666, ";", ";", "#X", "insert", "/visca.1/focus", 8801, ";", ";", "#X", "insert", "/visca.1/focus", 8937, ";", ";", "#X", "insert", "/visca.1/focus", 9072, ";", ";", "#X", "insert", "/visca.1/focus", 9208, ";", ";", "#X", "insert", "/visca.1/focus", 9343, ";", ";", "#X", "insert", "/visca.1/focus", 9478, ";", ";", "#X", "insert", "/visca.1/focus", 9614, ";", ";", "#X", "insert", "/visca.1/focus", 9749, ";", ";", "#X", "insert", "/visca.1/focus", 9885, ";", ";", "#X", "insert", "/visca.1/focus", 10020, ";", ";", "#X", "insert", "/visca.1/focus", 10291, ";", ";", "#X", "insert", "/visca.1/focus", 10562, ";", ";", "#X", "insert", "/visca.1/focus", 10697, ";", ";", "#X", "insert", "/visca.1/focus", 10832, ";", ";", "#X", "insert", "/visca.1/focus", 10968, ";", ";", "#X", "insert", "/visca.1/focus", 11103, ";", ";", "#X", "insert", "/visca.1/focus", 11239, ";", ";", "#X", "insert", "/visca.1/focus", 11509, ";", ";", "#X", "insert", "/visca.1/focus", 11645, ";", ";", "#X", "insert", "/visca.1/focus", 11780, ";", ";", "#X", "insert", "/visca.1/focus", 11916, ";", ";", "#X", "insert", "/visca.1/focus", 12186, ";", ";", "#X", "insert", "/visca.1/focus", 12457, ";", ";", "#X", "insert", "/visca.1/focus", 12322, ";", ";", "#X", "insert", "/visca.1/focus", 12186, ";", ";", "#X", "insert", "/visca.1/focus", 12051, ";", ";", "#X", "insert", "/visca.1/focus", 11916, ";", ";", "#X", "insert", "/visca.1/focus", 11780, ";", ";", "#X", "insert", "/visca.1/focus", 11645, ";", ";", "#X", "insert", "/visca.1/focus", 11509, ";", ";", "#X", "insert", "/visca.1/focus", 11374, ";", ";", "#X", "insert", "/visca.1/focus", 11239, ";", ";", "#X", "insert", "/visca.1/focus", 11103, ";", ";", "#X", "insert", "/visca.1/focus", 10968, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7989, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7853, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7312, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6770, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6364, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5822, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5281, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5010, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 4739, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 4604, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 4468, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 4333, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 4062, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 3927, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 3791, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 3656, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 3385, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 3114, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 2979, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 2708, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 2437, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 2166, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 2031, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 1760, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 1489, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 1083, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 812, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 542, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 271, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 135, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 812, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 1896, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 3250, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 4468, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5145, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5958, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6364, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6635, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6770, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7041, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7312, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7447, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7853, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8124, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8260, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8531, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8666, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8801, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 9072, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 9208, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 9343, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 9478, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 9614, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 9885, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 10020, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 10155, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 10291, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 10426, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 10562, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 10697, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 10832, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 11103, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 11239, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 11374, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 11509, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 11645, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 11780, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 11916, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12051, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12186, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12322, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12457, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12593, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12728, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12728, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12863, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12999, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 13134, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 13270, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 13405, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 13540, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 13811, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 13947, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 14082, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 14353, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 14488, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 14624, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 14759, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 14895, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 15030, ";", ";", "#X", "insert", "/visca.1/focus", 13947, ";", ";", "#X", "insert", "/visca.1/focus", 13947, ";", ";", "#X", "insert", "/visca.1/focus", 13811, ";", ";", "#X", "insert", "/visca.1/focus", 13676, ";", ";", "#X", "insert", "/visca.1/focus", 13540, ";", ";", "#X", "insert", "/visca.1/focus", 13405, ";", ";", "#X", "insert", "/visca.1/focus", 13270, ";", ";", "#X", "insert", "/visca.1/focus", 13134, ";", ";", "#X", "insert", "/visca.1/focus", 12863, ";", ";", "#X", "insert", "/visca.1/focus", 12728, ";", ";", "#X", "insert", "/visca.1/focus", 12593, ";", ";", "#X", "insert", "/visca.1/focus", 12457, ";", ";", "#X", "insert", "/visca.1/focus", 12322, ";", ";", "#X", "insert", "/visca.1/focus", 12186, ";", ";", "#X", "insert", "/visca.1/focus", 12051, ";", ";", "#X", "insert", "/visca.1/focus", 11916, ";", ";", "#X", "insert", "/visca.1/focus", 11645, ";", ";", "#X", "insert", "/visca.1/focus", 11509, ";", ";", "#X", "insert", "/visca.1/focus", 11374, ";", ";", "#X", "insert", "/visca.1/focus", 11239, ";", ";", "#X", "insert", "/visca.1/focus", 11103, ";", ";", "#X", "insert", "/visca.1/focus", 10968, ";", ";", "#X", "insert", "/visca.1/focus", 10832, ";", ";", "#X", "insert", "/visca.1/focus", 10697, ";", ";", "#X", "insert", "/visca.1/focus", 10562, ";", ";", "#X", "insert", "/visca.1/focus", 10426, ";", ";", "#X", "insert", "/visca.1/focus", 10291, ";", ";", "#X", "insert", "/visca.1/focus", 10155, ";", ";", "#X", "insert", "/visca.1/focus", 10020, ";", ";", "#X", "insert", "/visca.1/focus", 9885, ";", ";", "#X", "insert", "/visca.1/focus", 9749, ";", ";", "#X", "insert", "/visca.1/focus", 9614, ";", ";", "#X", "insert", "/visca.1/focus", 9478, ";", ";", "#X", "insert", "/visca.1/focus", 9208, ";", ";", "#X", "insert", "/visca.1/focus", 9072, ";", ";", "#X", "insert", "/visca.1/focus", 8937, ";", ";", "#X", "insert", "/visca.1/focus", 8666, ";", ";", "#X", "insert", "/visca.1/focus", 8531, ";", ";", "#X", "insert", "/visca.1/focus", 8260, ";", ";", "#X", "insert", "/visca.1/focus", 8124, ";", ";", "#X", "insert", "/visca.1/focus", 7989, ";", ";", "#X", "insert", "/visca.1/focus", 7853, ";", ";", "#X", "insert", "/visca.1/focus", 7583, ";", ";", "#X", "insert", "/visca.1/focus", 7312, ";", ";", "#X", "insert", "/visca.1/focus", 7176, ";", ";", "#X", "insert", "/visca.1/focus", 6906, ";", ";", "#X", "insert", "/visca.1/focus", 6499, ";", ";", "#X", "insert", "/visca.1/focus", 6093, ";", ";", "#X", "insert", "/visca.1/focus", 5822, ";", ";", "#X", "insert", "/visca.1/focus", 5281, ";", ";", "#X", "insert", "/visca.1/focus", 4875, ";", ";", "#X", "insert", "/visca.1/focus", 4468, ";", ";", "#X", "insert", "/visca.1/focus", 4062, ";", ";", "#X", "insert", "/visca.1/focus", 3656, ";", ";", "#X", "insert", "/visca.1/focus", 3385, ";", ";", "#X", "insert", "/visca.1/focus", 3250, ";", ";", "#X", "insert", "/visca.1/focus", 3114, ";", ";", "#X", "insert", "/visca.1/focus", 2979, ";", ";", "#X", "insert", "/visca.1/focus", 2844, ";", ";", "#X", "insert", "/visca.1/focus", 2708, ";", ";", "#X", "insert", "/visca.1/focus", 2573, ";", ";", "#X", "insert", "/visca.1/focus", 2166, ";", ";", "#X", "insert", "/visca.1/focus", 1489, ";", ";", "#X", "insert", "/visca.1/focus", 948, ";", ";", "#X", "insert", "/visca.1/focus", 271, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 677, ";", ";", "#X", "insert", "/visca.1/focus", 1760, ";", ";", "#X", "insert", "/visca.1/focus", 3114, ";", ";", "#X", "insert", "/visca.1/focus", 4062, ";", ";", "#X", "insert", "/visca.1/focus", 5010, ";", ";", "#X", "insert", "/visca.1/focus", 6093, ";", ";", "#X", "insert", "/visca.1/focus", 6770, ";", ";", "#X", "insert", "/visca.1/focus", 7583, ";", ";", "#X", "insert", "/visca.1/focus", 8395, ";", ";", "#X", "insert", "/visca.1/focus", 8937, ";", ";", "#X", "insert", "/visca.1/focus", 9478, ";", ";", "#X", "insert", "/visca.1/focus", 9885, ";", ";", "#X", "insert", "/visca.1/focus", 10291, ";", ";", "#X", "insert", "/visca.1/focus", 10968, ";", ";", "#X", "insert", "/visca.1/focus", 11239, ";", ";", "#X", "insert", "/visca.1/focus", 11645, ";", ";", "#X", "insert", "/visca.1/focus", 11916, ";", ";", "#X", "insert", "/visca.1/focus", 12186, ";", ";", "#X", "insert", "/visca.1/focus", 12322, ";", ";", "#X", "insert", "/visca.1/focus", 12457, ";", ";", "#X", "insert", "/visca.1/focus", 12863, ";", ";", "#X", "insert", "/visca.1/focus", 13134, ";", ";", "#X", "insert", "/visca.1/focus", 13405, ";", ";", "#X", "insert", "/visca.1/focus", 13811, ";", ";", "#X", "insert", "/visca.1/focus", 14082, ";", ";", "#X", "insert", "/visca.1/focus", 14488, ";", ";", "#X", "insert", "/visca.1/focus", 14895, ";", ";", "#X", "insert", "/visca.1/focus", 15301, ";", ";", "#X", "insert", "/visca.1/focus", 15572, ";", ";", "#X", "insert", "/visca.1/focus", 15978, ";", ";", "#X", "insert", "/visca.1/focus", 16249, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 15842, ";", ";", "#X", "insert", "/visca.1/focus", 14759, ";", ";", "#X", "insert", "/visca.1/focus", 13811, ";", ";", "#X", "insert", "/visca.1/focus", 12728, ";", ";", "#X", "insert", "/visca.1/focus", 11780, ";", ";", "#X", "insert", "/visca.1/focus", 10562, ";", ";", "#X", "insert", "/visca.1/focus", 9885, ";", ";", "#X", "insert", "/visca.1/focus", 8937, ";", ";", "#X", "insert", "/visca.1/focus", 7853, ";", ";", "#X", "insert", "/visca.1/focus", 6770, ";", ";", "#X", "insert", "/visca.1/focus", 6093, ";", ";", "#X", "insert", "/visca.1/focus", 5145, ";", ";", "#X", "insert", "/visca.1/focus", 4198, ";", ";", "#X", "insert", "/visca.1/focus", 3656, ";", ";", "#X", "insert", "/visca.1/focus", 2979, ";", ";", "#X", "insert", "/visca.1/focus", 2437, ";", ";", "#X", "insert", "/visca.1/focus", 2031, ";", ";", "#X", "insert", "/visca.1/focus", 1625, ";", ";", "#X", "insert", "/visca.1/focus", 1083, ";", ";", "#X", "insert", "/visca.1/focus", 677, ";", ";", "#X", "insert", "/visca.1/focus", 542, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus", 812, ";", ";", "#X", "insert", "/visca.1/focus", 1354, ";", ";", "#X", "insert", "/visca.1/focus", 1760, ";", ";", "#X", "insert", "/visca.1/focus", 2031, ";", ";", "#X", "insert", "/visca.1/focus", 2166, ";", ";", "#X", "insert", "/visca.1/focus", 2437, ";", ";", "#X", "insert", "/visca.1/focus", 2708, ";", ";", "#X", "insert", "/visca.1/focus", 2979, ";", ";", "#X", "insert", "/visca.1/focus", 3250, ";", ";", "#X", "insert", "/visca.1/focus", 3521, ";", ";", "#X", "insert", "/visca.1/focus", 3656, ";", ";", "#X", "insert", "/visca.1/focus", 3791, ";", ";", "#X", "insert", "/visca.1/focus", 3927, ";", ";", "#X", "insert", "/visca.1/focus", 4062, ";", ";", "#X", "insert", "/visca.1/focus", 4333, ";", ";", "#X", "insert", "/visca.1/focus", 4468, ";", ";", "#X", "insert", "/visca.1/focus", 4604, ";", ";", "#X", "insert", "/visca.1/focus", 4739, ";", ";", "#X", "insert", "/visca.1/focus", 4875, ";", ";", "#X", "insert", "/visca.1/focus", 5145, ";", ";", "#X", "insert", "/visca.1/focus", 5416, ";", ";", "#X", "insert", "/visca.1/focus", 5552, ";", ";", "#X", "insert", "/visca.1/focus", 5687, ";", ";", "#X", "insert", "/visca.1/focus", 5822, ";", ";", "#X", "insert", "/visca.1/focus", 5958, ";", ";", "#X", "insert", "/visca.1/focus", 6093, ";", ";", "#X", "insert", "/visca.1/focus", 6229, ";", ";", "#X", "insert", "/visca.1/focus", 6364, ";", ";", "#X", "insert", "/visca.1/focus", 6499, ";", ";", "#X", "insert", "/visca.1/focus", 6770, ";", ";", "#X", "insert", "/visca.1/focus", 6906, ";", ";", "#X", "insert", "/visca.1/focus", 7176, ";", ";", "#X", "insert", "/visca.1/focus", 7312, ";", ";", "#X", "insert", "/visca.1/focus", 7447, ";", ";", "#X", "insert", "/visca.1/focus", 7583, ";", ";", "#X", "insert", "/visca.1/focus", 7718, ";", ";", "#X", "insert", "/visca.1/focus", 7853, ";", ";", "#X", "insert", "/visca.1/focus", 7853, ";", ";", "#X", "insert", "/visca.1/focus", 7989, ";", ";", "#X", "insert", "/visca.1/focus", 8124, ";", ";", "#X", "insert", "/visca.1/focus", 8260, ";", ";", "#X", "insert", "/visca.1/focus", 8395, ";", ";", "#X", "insert", "/visca.1/focus", 8531, ";", ";", "#X", "insert", "/visca.1/focus", 8666, ";", ";", "#X", "insert", "/visca.1/focus", 8801, ";", ";", "#X", "insert", "/visca.1/focus", 8937, ";", ";", "#X", "insert", "/visca.1/focus", 9072, ";", ";", "#X", "insert", "/visca.1/focus", 9208, ";", ";", "#X", "insert", "/visca.1/focus", 9343, ";", ";", "#X", "insert", "/visca.1/focus", 9343, ";", ";", "#X", "insert", "/visca.1/focus", 9478, ";", ";", "#X", "insert", "/visca.1/focus", 9614, ";", ";", "#X", "insert", "/visca.1/focus", 9749, ";", ";", "#X", "insert", "/visca.1/focus", 9885, ";", ";", "#X", "insert", "/visca.1/focus", 10020, ";", ";", "#X", "insert", "/visca.1/focus", 10155, ";", ";", "#X", "insert", "/visca.1/focus", 10155, ";", ";", "#X", "insert", "/visca.1/focus", 10291, ";", ";", "#X", "insert", "/visca.1/focus", 10426, ";", ";", "#X", "insert", "/visca.1/focus", 10562, ";", ";", "#X", "insert", "/visca.1/focus", 10697, ";", ";", "#X", "insert", "/visca.1/focus", 10832, ";", ";", "#X", "insert", "/visca.1/focus", 10968, ";", ";", "#X", "insert", "/visca.1/focus", 10832, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 10697, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 10291, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 9614, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 8666, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7853, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 6770, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5958, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 5145, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 4604, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 3521, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 2844, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 1896, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 1083, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 271, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/zoom", 1083, ";", ";", "#X", "insert", "/visca.1/zoom", 14895, ";", ";", "#X", "insert", "/visca.1/focus/mode", "auto", ";", ";", "#X", "insert", "/visca.1/focus/auto/trigger", "bang", ";", ";", "#X", "insert", "/visca.1/focus/auto/trigger", "bang", ";", ";", "#X", "insert", "/visca.1/focus/auto/trigger", "bang", ";", ";", "#X", "insert", "/visca.1/focus/auto/sensitivity", 1, ";", ";", "#X", "insert", "/visca.1/focus/auto/sensitivity", 0, ";", ";", "#X", "insert", "/visca.1/focus/infinity", "bang", ";", ";", "#X", "insert", "/visca.1/focus/infinity", "bang", ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 9749, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 10020, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 10291, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 10697, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 11239, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 11645, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12051, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12322, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12457, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12593, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12863, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 12999, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 13134, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 13405, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 13540, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 13947, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 14082, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 14353, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 14624, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 14759, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 15165, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 15436, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 15572, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 15707, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 15842, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 15978, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16113, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 16384, ";", ";", "#X", "insert", "/visca.1/focus", 12593, ";", ";", "#X", "insert", "/visca.1/focus", 12863, ";", ";", "#X", "insert", "/visca.1/focus", 13134, ";", ";", "#X", "insert", "/visca.1/focus", 13405, ";", ";", "#X", "insert", "/visca.1/focus", 13540, ";", ";", "#X", "insert", "/visca.1/focus", 13811, ";", ";", "#X", "insert", "/visca.1/focus", 13947, ";", ";", "#X", "insert", "/visca.1/focus", 14082, ";", ";", "#X", "insert", "/visca.1/focus", 14218, ";", ";", "#X", "insert", "/visca.1/focus", 14353, ";", ";", "#X", "insert", "/visca.1/focus", 14624, ";", ";", "#X", "insert", "/visca.1/focus", 14759, ";", ";", "#X", "insert", "/visca.1/focus", 14895, ";", ";", "#X", "insert", "/visca.1/focus", 15165, ";", ";", "#X", "insert", "/visca.1/focus", 15436, ";", ";", "#X", "insert", "/visca.1/focus", 15572, ";", ";", "#X", "insert", "/visca.1/focus", 15842, ";", ";", "#X", "insert", "/visca.1/focus", 15978, ";", ";", "#X", "insert", "/visca.1/focus", 15978, ";", ";", "#X", "insert", "/visca.1/focus", 15707, ";", ";", "#X", "insert", "/visca.1/focus", 15436, ";", ";", "#X", "insert", "/visca.1/focus", 14895, ";", ";", "#X", "insert", "/visca.1/focus", 14353, ";", ";", "#X", "insert", "/visca.1/focus", 13811, ";", ";", "#X", "insert", "/visca.1/focus", 12999, ";", ";", "#X", "insert", "/visca.1/focus", 12186, ";", ";", "#X", "insert", "/visca.1/focus", 11509, ";", ";", "#X", "insert", "/visca.1/focus", 10968, ";", ";", "#X", "insert", "/visca.1/focus", 10562, ";", ";", "#X", "insert", "/visca.1/focus", 10155, ";", ";", "#X", "insert", "/visca.1/focus", 9885, ";", ";", "#X", "insert", "/visca.1/focus", 9614, ";", ";", "#X", "insert", "/visca.1/focus", 9343, ";", ";", "#X", "insert", "/visca.1/focus", 8937, ";", ";", "#X", "insert", "/visca.1/focus", 8666, ";", ";", "#X", "insert", "/visca.1/focus", 8260, ";", ";", "#X", "insert", "/visca.1/focus", 7989, ";", ";", "#X", "insert", "/visca.1/focus", 7583, ";", ";", "#X", "insert", "/visca.1/focus", 7447, ";", ";", "#X", "insert", "/visca.1/focus", 7312, ";", ";", "#X", "insert", "/visca.1/focus", 7041, ";", ";", "#X", "insert", "/visca.1/focus", 6906, ";", ";", "#X", "insert", "/visca.1/focus", 6635, ";", ";", "#X", "insert", "/visca.1/focus", 6499, ";", ";", "#X", "insert", "/visca.1/focus", 6364, ";", ";", "#X", "insert", "/visca.1/focus", 6229, ";", ";", "#X", "insert", "/visca.1/focus", 6093, ";", ";", "#X", "insert", "/visca.1/focus", 5822, ";", ";", "#X", "insert", "/visca.1/focus", 5687, ";", ";", "#X", "insert", "/visca.1/focus", 5416, ";", ";", "#X", "insert", "/visca.1/focus", 5281, ";", ";", "#X", "insert", "/visca.1/focus", 5145, ";", ";", "#X", "insert", "/visca.1/focus", 5010, ";", ";", "#X", "insert", "/visca.1/focus", 4875, ";", ";", "#X", "insert", "/visca.1/focus", 4875, ";", ";", "#X", "insert", "/visca.1/focus", 4739, ";", ";", "#X", "insert", "/visca.1/focus", 4875, ";", ";", "#X", "insert", "/visca.1/focus", 5010, ";", ";", "#X", "insert", "/visca.1/focus", 5145, ";", ";", "#X", "insert", "/visca.1/focus", 5281, ";", ";", "#X", "insert", "/visca.1/focus", 5416, ";", ";", "#X", "insert", "/visca.1/focus", 5687, ";", ";", "#X", "insert", "/visca.1/focus", 6229, ";", ";", "#X", "insert", "/visca.1/focus", 6770, ";", ";", "#X", "insert", "/visca.1/focus", 7312, ";", ";", "#X", "insert", "/visca.1/focus", 7583, ";", ";", "#X", "insert", "/visca.1/focus", 7853, ";", ";", "#X", "insert", "/visca.1/focus", 7989, ";", ";", "#X", "insert", "/visca.1/focus", 8124, ";", ";", "#X", "insert", "/visca.1/focus", 8260, ";", ";", "#X", "insert", "/visca.1/focus", 8395, ";", ";", "#X", "insert", "/visca.1/focus", 8531, ";", ";", "#X", "insert", "/visca.1/focus", 8666, ";", ";", "#X", "insert", "/visca.1/focus", 8801, ";", ";", "#X", "insert", "/visca.1/focus", 8937, ";", ";", "#X", "insert", "/visca.1/focus", 9072, ";", ";", "#X", "insert", "/visca.1/focus", 9343, ";", ";", "#X", "insert", "/visca.1/focus", 9478, ";", ";", "#X", "insert", "/visca.1/focus", 9749, ";", ";", "#X", "insert", "/visca.1/focus", 9885, ";", ";", "#X", "insert", "/visca.1/focus", 10020, ";", ";", "#X", "insert", "/visca.1/focus", 10155, ";", ";", "#X", "insert", "/visca.1/focus", 10291, ";", ";", "#X", "insert", "/visca.1/focus", 10426, ";", ";", "#X", "insert", "/visca.1/focus", 10562, ";", ";", "#X", "insert", "/visca.1/focus/mode", "manual", ";", ";", "#X", "insert", "/visca.1/focus/mode", "auto", ";", ";", "#X", "insert", "/visca.1/focus", 6229, ";", ";", "#X", "insert", "/visca.1/focus", 4198, ";", ";", "#X", "insert", "/visca.1/focus", 9343, ";", ";", "#X", "insert", "/visca.1/focus/mode", "manual", ";", ";", "#X", "insert", "/visca.1/focus", 4062, ";", ";", "#X", "insert", "/visca.1/focus", 3385, ";", ";", "#X", "insert", "/visca.1/focus", 3114, ";", ";", "#X", "insert", "/visca.1/focus", 2979, ";", ";", "#X", "insert", "/visca.1/focus", 2708, ";", ";", "#X", "insert", "/visca.1/focus", 2437, ";", ";", "#X", "insert", "/visca.1/focus", 2302, ";", ";", "#X", "insert", "/visca.1/focus", 2031, ";", ";", "#X", "insert", "/visca.1/focus", 1896, ";", ";", "#X", "insert", "/visca.1/focus", 1760, ";", ";", "#X", "insert", "/visca.1/focus", 1625, ";", ";", "#X", "insert", "/visca.1/focus", 1760, ";", ";", "#X", "insert", "/visca.1/focus", 1896, ";", ";", "#X", "insert", "/visca.1/focus", 2166, ";", ";", "#X", "insert", "/visca.1/focus", 2302, ";", ";", "#X", "insert", "/visca.1/focus", 2979, ";", ";", "#X", "insert", "/visca.1/focus", 3521, ";", ";", "#X", "insert", "/visca.1/focus", 4333, ";", ";", "#X", "insert", "/visca.1/focus", 5145, ";", ";", "#X", "insert", "/visca.1/focus", 5822, ";", ";", "#X", "insert", "/visca.1/focus", 6229, ";", ";", "#X", "insert", "/visca.1/focus", 6364, ";", ";", "#X", "insert", "/visca.1/focus", 6499, ";", ";", "#X", "insert", "/visca.1/focus", 6635, ";", ";", "#X", "insert", "/visca.1/focus", 6770, ";", ";", "#X", "insert", "/visca.1/focus", 6906, ";", ";", "#X", "insert", "/visca.1/focus", 7041, ";", ";", "#X", "insert", "/visca.1/focus", 7312, ";", ";", "#X", "insert", "/visca.1/focus", 7447, ";", ";", "#X", "insert", "/visca.1/focus", 7583, ";", ";", "#X", "insert", "/visca.1/focus", 7718, ";", ";", "#X", "insert", "/visca.1/focus", 7853, ";", ";", "#X", "insert", "/visca.1/focus", 7989, ";", ";", "#X", "insert", "/visca.1/focus", 8124, ";", ";", "#X", "insert", "/visca.1/focus", 8260, ";", ";", "#X", "insert", "/visca.1/focus", 8395, ";", ";", "#X", "insert", "/visca.1/focus", 8666, ";", ";", "#X", "insert", "/visca.1/focus", 8801, ";", ";", "#X", "insert", "/visca.1/focus", 8937, ";", ";", "#X", "insert", "/visca.1/focus", 9072, ";", ";", "#X", "insert", "/visca.1/focus", 9208, ";", ";", "#X", "insert", "/visca.1/focus", 9343, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 7447, ";", ";", "#X", "insert", "/visca.1/focus", 14488, ";", ";", "#X", "insert", "/visca.1/focus", 14488, ";", ";", "#X", "insert", "/visca.1/focus", 14218, ";", ";", "#X", "insert", "/visca.1/focus", 13676, ";", ";", "#X", "insert", "/visca.1/focus", 12999, ";", ";", "#X", "insert", "/visca.1/focus", 12322, ";", ";", "#X", "insert", "/visca.1/focus", 11645, ";", ";", "#X", "insert", "/visca.1/focus", 10832, ";", ";", "#X", "insert", "/visca.1/focus", 10291, ";", ";", "#X", "insert", "/visca.1/focus", 10020, ";", ";", "#X", "insert", "/visca.1/focus", 9614, ";", ";", "#X", "insert", "/visca.1/focus", 9343, ";", ";", "#X", "insert", "/visca.1/focus", 9208, ";", ";", "#X", "insert", "/visca.1/focus", 9072, ";", ";", "#X", "insert", "/visca.1/focus", 8937, ";", ";", "#X", "insert", "/visca.1/focus", 8801, ";", ";", "#X", "insert", "/visca.1/focus", 8666, ";", ";", "#X", "insert", "/visca.1/focus", 8395, ";", ";", "#X", "insert", "/visca.1/focus", 8260, ";", ";", "#X", "insert", "/visca.1/focus", 8124, ";", ";", "#X", "insert", "/visca.1/focus", 7989, ";", ";", "#X", "insert", "/visca.1/focus", 7853, ";", ";", "#X", "insert", "/visca.1/focus", 7718, ";", ";", "#X", "insert", "/visca.1/focus", 7583, ";", ";", "#X", "insert", "/visca.1/focus", 7447, ";", ";", "#X", "insert", "/visca.1/focus", 7312, ";", ";", "#X", "insert", "/visca.1/focus", 7176, ";", ";", "#X", "insert", "/visca.1/focus", 7041, ";", ";", "#X", "insert", "/visca.1/focus", 6906, ";", ";", "#X", "insert", "/visca.1/focus", 6770, ";", ";", "#X", "insert", "/visca.1/focus", 6635, ";", ";", "#X", "insert", "/visca.1/focus", 6499, ";", ";", "#X", "insert", "/visca.1/focus", 6364, ";", ";", "#X", "insert", "/visca.1/focus", 6093, ";", ";", "#X", "insert", "/visca.1/focus", 5958, ";", ";", "#X", "insert", "/visca.1/focus", 5822, ";", ";", "#X", "insert", "/visca.1/focus", 5687, ";", ";", "#X", "insert", "/visca.1/focus", 5687, ";", ";", "#X", "insert", "/visca.1/focus", 5552, ";", ";", "#X", "insert", "/visca.1/focus", 5416, ";", ";", "#X", "insert", "/visca.1/focus", 5281, ";", ";", "#X", "insert", "/visca.1/focus", 5281, ";", ";", "#X", "insert", "/visca.1/focus", 5145, ";", ";", "#X", "insert", "/visca.1/focus", 5281, ";", ";", "#X", "insert", "/visca.1/focus", 5416, ";", ";", "#X", "insert", "/visca.1/focus", 5552, ";", ";", "#X", "insert", "/visca.1/focus", 5687, ";", ";", "#X", "insert", "/visca.1/focus", 6093, ";", ";", "#X", "insert", "/visca.1/focus", 6229, ";", ";", "#X", "insert", "/visca.1/focus", 6364, ";", ";", "#X", "insert", "/visca.1/focus", 6499, ";", ";", "#X", "insert", "/visca.1/focus", 6635, ";", ";", "#X", "insert", "/visca.1/focus", 6770, ";", ";", "#X", "insert", "/visca.1/focus", 6906, ";", ";", "#X", "insert", "/visca.1/focus", 7041, ";", ";", "#X", "insert", "/visca.1/focus", 7176, ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 11916, ";", ";", "#X", "insert", "/visca.1/focus", 13811, ";", ";", "#X", "insert", "/visca.1/focus", 13811, ";", ";", "#X", "insert", "/visca.1/focus", 13811, ";", ";", "#X", "insert", "/visca.1/focus", 9614, ";", ";", "#X", "insert", "/visca.1/focus", 7853, ";", ";", "#X", "insert", "/visca.1/focus", 6364, ";", ";", "#X", "insert", "/visca.1/setaddress", "bang", ";", ";", "#X", "insert", "/visca.1/sw", 1, ";", ";", "#X", "insert", "/visca.1/zoom/stop", "bang", ";", ";", "#X", "insert", "/visca.1/zoom/variable/tele", 0, ";", ";", "#X", "insert", "/visca.1/zoom/variable/wide", 0, ";", ";", "#X", "insert", "/visca.1/zoom/standart", "wide", ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/focus/mode", 0, ";", ";", "#X", "insert", "/visca.1/focus/stop", "bang", ";", ";", "#X", "insert", "/visca.1/focus/variable/far", 0, ";", ";", "#X", "insert", "/visca.1/focus/variable/near", 0, ";", ";", "#X", "insert", "/visca.1/focus/standart", "near", ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus/auto/trigger", "bang", ";", ";", "#X", "insert", "/visca.1/focus/infinity", "bang", ";", ";", "#X", "insert", "/visca.1/focus/auto/sensitivity", 0, ";", ";", "#X", "insert", "/visca.1/whitebalance", "auto", ";", ";", "#X", "insert", "/visca.1/whitebalance/trig", "bang", ";", ";", "#X", "insert", "/visca.1/mode", "manual", ";", ";", "#X", "insert", "/visca.1/shutter", 6, ";", ";", "#X", "insert", "/visca.1/gain", 1, ";", ";", "#X", "insert", "/visca.1/iris", 11, ";", ";", "#X", "insert", "/visca.1/slowshutter", 0, ";", ";", "#X", "insert", "/visca.1/compensation/sw", 0, ";", ";", "#X", "insert", "/visca.1/compensation/level", 0, ";", ";", "#X", "insert", "/visca.1/auto/response", 0, ";", ";", "#X", "insert", "/visca.1/wd", 1, ";", ";", "#X", "insert", "/visca.1/aperture", 0, ";", ";", "#X", "insert", "/visca.1/hr", 1, ";", ";", "#X", "insert", "/visca.1/nr", 0, ";", ";", "#X", "insert", "/visca.1/gamma", 0, ";", ";", "#X", "insert", "/visca.1/hs", 1, ";", ";", "#X", "insert", "/visca.1/reverse", 0, ";", ";", "#X", "insert", "/visca.1/freeze", 0, ";", ";", "#X", "insert", "/visca.1/fx", 0, ";", ";", "#X", "insert", "/visca.1/flip", 0, ";", ";", "#X", "insert", "/visca.1/ir", 0, ";", ";", "#X", "insert", "/visca.1/stabilizer", 1, ";", ";", "#X", "insert", "/visca.1/chromasupress", 0, ";", ";", "#X", "insert", "/visca.1/ir/correction", 0, ";", ";", "#X", "insert", "/visca.1/setaddress", "bang", ";", ";", "#X", "insert", "/visca.1/sw", 1, ";", ";", "#X", "insert", "/visca.1/zoom/stop", "bang", ";", ";", "#X", "insert", "/visca.1/zoom/variable/tele", 0, ";", ";", "#X", "insert", "/visca.1/zoom/variable/wide", 0, ";", ";", "#X", "insert", "/visca.1/zoom/standart", "wide", ";", ";", "#X", "insert", "/visca.1/zoom", 0, ";", ";", "#X", "insert", "/visca.1/focus/mode", 0, ";", ";", "#X", "insert", "/visca.1/focus/stop", "bang", ";", ";", "#X", "insert", "/visca.1/focus/variable/far", 0, ";", ";", "#X", "insert", "/visca.1/focus/variable/near", 0, ";", ";", "#X", "insert", "/visca.1/focus/standart", "near", ";", ";", "#X", "insert", "/visca.1/focus/nearlimit", 0, ";", ";", "#X", "insert", "/visca.1/focus", 0, ";", ";", "#X", "insert", "/visca.1/focus/auto/trigger", "bang", ";", ";", "#X", "insert", "/visca.1/focus/infinity", "bang", ";", ";", "#X", "insert", "/visca.1/focus/auto/sensitivity", 0, ";", ";", "#X", "insert", "/visca.1/whitebalance", "auto", ";", ";", "#X", "insert", "/visca.1/whitebalance/trig", "bang", ";", ";", "#X", "insert", "/visca.1/mode", "manual", ";", ";", "#X", "insert", "/visca.1/shutter", 6, ";", ";", "#X", "insert", "/visca.1/gain", 1, ";", ";", "#X", "insert", "/visca.1/iris", 11, ";", ";", "#X", "insert", "/visca.1/slowshutter", 0, ";", ";", "#X", "insert", "/visca.1/compensation/sw", 0, ";", ";", "#X", "insert", "/visca.1/compensation/level", 0, ";", ";", "#X", "insert", "/visca.1/auto/response", 0, ";", ";", "#X", "insert", "/visca.1/wd", 1, ";", ";", "#X", "insert", "/visca.1/aperture", 0, ";", ";", "#X", "insert", "/visca.1/hr", 1, ";", ";", "#X", "insert", "/visca.1/nr", 0, ";", ";", "#X", "insert", "/visca.1/gamma", 0, ";", ";", "#X", "insert", "/visca.1/hs", 1, ";", ";", "#X", "insert", "/visca.1/reverse", 0, ";", ";", "#X", "insert", "/visca.1/freeze", 0, ";", ";", "#X", "insert", "/visca.1/fx", 0, ";", ";", "#X", "insert", "/visca.1/flip", 0, ";", ";", "#X", "insert", "/visca.1/ir", 0, ";", ";", "#X", "insert", "/visca.1/stabilizer", 1, ";", ";", "#X", "insert", "/visca.1/chromasupress", 0, ";", ";", "#X", "insert", "/visca.1/ir/correction", 0, ";", ";", "#X", "insert", "/visca.1/reverse", 1, ";", ";", "#X", "insert", "/visca.1/reverse", 0, ";", ";", "#X", "insert", "/visca.1/flip", 1, ";", ";", "#X", "insert", "/visca.1/flip", 0, ";", ";", "#X", "insert", "/visca.1/freeze", 1, ";", ";", "#X", "insert", "/visca.1/freeze", 0, ";", ";", "#X", "insert", "/visca.1/stabilizer", 0, ";", ";", "#X", "insert", "/visca.1/hs", 0, ";", ";", "#X", "insert", "/visca.1/nr", 1, ";", ";", "#X", "insert", "/visca.1/hr", 0, ";", ";", "#X", "insert", "/visca.1/hr", 1, ";", ";", "#X", "insert", "/visca.1/whitebalance", "one", "push", "trigger", ";", ";", "#X", "insert", "/visca.1/whitebalance", "indoor", ";", ";", "#X", "insert", "/visca.1/slowshutter", "manual", ";", ";", "#X", "insert", "/visca.1/slowshutter", "auto", ";", ";", "#X", "insert", "/visca.1/slowshutter", "manual", ";", ";", "#X", "insert", "/visca.1/slowshutter", "auto", ";", ";", "#X", "insert", "/visca.1/compensation/level", 4, ";", ";", "#X", "insert", "/visca.1/ir/correction", 1, ";", ";", "#X", "insert", "/visca.1/ir", 1, ";", ";", "#X", "insert", "/visca.1/ir", 0, ";", ";" ],
					"text" : "qlist"
				}

			}
, 			{
				"box" : 				{
					"fontname" : "Arial",
					"fontsize" : 12.0,
					"id" : "obj-9",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 415.5, 139.0, 72.0, 20.0 ],
					"text" : "tosymbol"
				}

			}
, 			{
				"box" : 				{
					"fontname" : "Arial",
					"fontsize" : 12.0,
					"id" : "obj-7",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 296.5, 168.0, 138.0, 20.0 ],
					"text" : "sprintf append %s %s \\;"
				}

			}
, 			{
				"box" : 				{
					"fontname" : "Arial",
					"fontsize" : 12.0,
					"id" : "obj-6",
					"maxclass" : "newobj",
					"numinlets" : 2,
					"numoutlets" : 2,
					"outlettype" : [ "", "" ],
					"patching_rect" : [ 296.5, 106.0, 138.0, 20.0 ],
					"text" : "zl slice 1"
				}

			}
, 			{
				"box" : 				{
					"args" : [ "/visca.1" ],
					"bgcolor" : [ 0.80611, 0.80611, 0.80611, 1.0 ],
					"bgmode" : 2,
					"id" : "obj-2",
					"maxclass" : "bpatcher",
					"name" : "fcb3410.edit.maxpat",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 0.0, 54.0, 252.0, 662.0 ],
					"presentation" : 1,
					"presentation_rect" : [ 0.0, 54.0, 252.0, 645.0 ]
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.640158, 0.228509, 0.251162, 1.0 ],
					"fontname" : "Arial",
					"fontsize" : 14.0,
					"id" : "obj-1",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 33.5, 726.0, 185.0, 22.0 ],
					"text" : "fcb3410.standalone /visca.1"
				}

			}
 ],
		"lines" : [ 			{
				"patchline" : 				{
					"destination" : [ "obj-19", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-14", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-6", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-14", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-57", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-25", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-39", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-43", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-8", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-5", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-62", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"midpoints" : [ 387.0, 473.832825, 306.0, 473.832825 ],
					"source" : [ "obj-57", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-62", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-57", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-61", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"midpoints" : [ 386.0, 564.832825, 306.0, 564.832825 ],
					"source" : [ "obj-58", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-61", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-58", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-58", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-59", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-60", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"midpoints" : [ 354.0, 525.832825, 413.0, 525.832825 ],
					"source" : [ "obj-59", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-7", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-6", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-9", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-6", 1 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-61", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"midpoints" : [ 413.0, 564.832825, 306.0, 564.832825 ],
					"source" : [ "obj-60", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-59", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-62", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-8", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-7", 0 ]
				}

			}
, 			{
				"patchline" : 				{
					"destination" : [ "obj-7", 1 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-9", 0 ]
				}

			}
 ],
		"dependency_cache" : [ 			{
				"name" : "fcb3410.standalone.maxpat",
				"bootpath" : "/Users/renaudrubiano/Documents/GITs/osc-visca/max 6",
				"patcherrelativepath" : "",
				"type" : "JSON",
				"implicit" : 1
			}
, 			{
				"name" : "rprepend.maxpat",
				"bootpath" : "/Users/renaudrubiano/Documents/GITs/osc-visca/max 6",
				"patcherrelativepath" : "",
				"type" : "JSON",
				"implicit" : 1
			}
, 			{
				"name" : "fcb3410.edit.maxpat",
				"bootpath" : "/Users/renaudrubiano/Documents/GITs/osc-visca/max 6",
				"patcherrelativepath" : "",
				"type" : "JSON",
				"implicit" : 1
			}
, 			{
				"name" : "var.maxpat",
				"bootpath" : "/Applications/Max6/examples/max-tricks/send-receive-tricks/lib",
				"patcherrelativepath" : "../../../../../../Applications/Max6/examples/max-tricks/send-receive-tricks/lib",
				"type" : "JSON",
				"implicit" : 1
			}
 ]
	}

}
