{
	"patcher" : 	{
		"fileversion" : 1,
		"appversion" : 		{
			"major" : 6,
			"minor" : 1,
			"revision" : 3,
			"architecture" : "x86"
		}
,
		"rect" : [ 527.0, 139.0, 1088.0, 483.0 ],
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
		"boxes" : [ 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-1",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 17.284607, 162.905106, 201.0, 17.0 ],
					"text" : "rprepend #1/zoom/digital/sw"
				}

			}
, 			{
				"box" : 				{
					"fontname" : "Arial",
					"fontsize" : 12.0,
					"id" : "obj-169",
					"maxclass" : "newobj",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patcher" : 					{
						"fileversion" : 1,
						"appversion" : 						{
							"major" : 6,
							"minor" : 1,
							"revision" : 3,
							"architecture" : "x86"
						}
,
						"rect" : [ 25.0, 69.0, 316.0, 490.0 ],
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
									"fontsize" : 9.0,
									"id" : "obj-14",
									"linecount" : 42,
									"maxclass" : "message",
									"numinlets" : 2,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 13.0, 43.0, 267.0, 427.0 ],
									"text" : ";\n#1/setaddress bang;\r#1/sw 1;\n#1/zoom/stop bang;\n#1/zoom/variable/tele 0;\n#1/zoom/variable/wide 0;\n#1/zoom/standart wide;\n#1/zoom 0;\n#1/focus/mode 0;\n#1/focus/stop bang;\n#1/focus/variable/far 0;\n#1/focus/variable/near 0;\n#1/focus/standart near;\n#1/focus/nearlimit 0;\n#1/focus 0;\n#1/focus/auto/trigger bang;\n#1/focus/infinity bang;\n#1/focus/auto/sensitivity 0;\n#1/whitebalance auto;\n#1/whitebalance/trig bang;\n#1/mode manual;\n#1/shutter 6;\n#1/gain 1;\n#1/iris 11;\n#1/slowshutter 0;\n#1/compensation/sw 0;\n#1/compensation/level 0;\n#1/auto/response 0;\n#1/wd 1;\n#1/aperture 0;\n#1/hr 1;\n#1/nr 0;\n#1/gamma 0;\n#1/hs 1;\n#1/reverse 0;\n#1/freeze 0;\n#1/fx 0;\n#1/flip 0;\n#1/ir 0;\n#1/stabilizer 1;\n#1/chromasupress 0;\n#1/ir/correction 0;\n"
								}

							}
, 							{
								"box" : 								{
									"comment" : "",
									"id" : "obj-168",
									"maxclass" : "inlet",
									"numinlets" : 0,
									"numoutlets" : 1,
									"outlettype" : [ "" ],
									"patching_rect" : [ 13.0, 7.0, 25.0, 25.0 ]
								}

							}
 ],
						"lines" : [ 							{
								"patchline" : 								{
									"destination" : [ "obj-14", 0 ],
									"disabled" : 0,
									"hidden" : 0,
									"source" : [ "obj-168", 0 ]
								}

							}
 ]
					}
,
					"patching_rect" : [ 747.284607, 241.586609, 36.0, 20.0 ],
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
					"text" : "p init"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-164",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 453.0, 108.126465, 257.0, 17.0 ],
					"text" : "rprepend #1/memory/reset"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-65",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 17.284607, 374.19812, 273.0, 17.0 ],
					"text" : "rprepend #1/focus/auto/sensitivity"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-69",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 17.284607, 353.068817, 248.0, 17.0 ],
					"text" : "rprepend #1/focus/nearlimit"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-70",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 17.284607, 331.939514, 239.0, 17.0 ],
					"text" : "rprepend #1/focus/infinity"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-11",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 17.284607, 310.810211, 259.0, 17.0 ],
					"text" : "rprepend #1/focus/onepushtrigger"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-13",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 17.284607, 289.680908, 231.0, 17.0 ],
					"text" : "rprepend #1/focus/mode"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-75",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 17.284607, 247.422318, 246.0, 17.0 ],
					"text" : "rprepend #1/focus/standart"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-76",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 17.284607, 268.551605, 211.0, 17.0 ],
					"text" : "rprepend #1/focus/direct"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-80",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 17.284607, 205.163712, 258.0, 17.0 ],
					"text" : "rprepend #1/focus/variable/far"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-7",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 17.284607, 184.034409, 231.0, 17.0 ],
					"text" : "rprepend #1/focus/stop"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-83",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 17.284607, 226.293015, 266.0, 17.0 ],
					"text" : "rprepend #1/focus/variable/near"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-92",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 453.0, 31.988525, 257.0, 17.0 ],
					"text" : "rprepend #1/whitebalance/trig"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-95",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 453.0, 11.327454, 242.0, 17.0 ],
					"text" : "rprepend #1/whitebalance"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-97",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 754.284607, 153.361084, 247.0, 17.0 ],
					"text" : "rprepend #1/auto/response"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-98",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 754.284607, 132.700073, 267.0, 17.0 ],
					"text" : "rprepend #1/compensation/level"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-30",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 754.284607, 112.039001, 259.0, 17.0 ],
					"text" : "rprepend #1/compensation/sw"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-5",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 754.284607, 91.37793, 249.0, 17.0 ],
					"text" : "rprepend #1/slowshutter"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-103",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 17.284607, 438.465454, 207.0, 17.0 ],
					"text" : "rprepend #1/gain"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-8",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 17.284607, 397.143311, 212.0, 17.0 ],
					"text" : "rprepend #1/AE"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-104",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 17.284607, 459.126526, 201.0, 17.0 ],
					"text" : "rprepend #1/iris"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-105",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 17.284607, 417.804382, 217.0, 17.0 ],
					"text" : "rprepend #1/shutter"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-118",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 446.0, 295.143311, 197.0, 17.0 ],
					"text" : "rprepend #1/fx"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-120",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 446.0, 329.959106, 225.0, 17.0 ],
					"text" : "rprepend #1/stabilizer"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-124",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 446.0, 152.616943, 201.0, 17.0 ],
					"text" : "rprepend #1/wd"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-128",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 446.0, 170.432739, 223.0, 17.0 ],
					"text" : "rprepend #1/aperture"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-20",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 446.0, 188.248535, 198.0, 17.0 ],
					"text" : "rprepend #1/hr"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-25",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 446.0, 206.064331, 198.0, 17.0 ],
					"text" : "rprepend #1/nr"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-133",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 446.0, 223.880127, 220.0, 17.0 ],
					"text" : "rprepend #1/gamma"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-37",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 446.0, 241.695923, 199.0, 17.0 ],
					"text" : "rprepend #1/hs"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-137",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 446.0, 259.511719, 220.0, 17.0 ],
					"text" : "rprepend #1/reverse"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-141",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 446.0, 277.327515, 215.0, 17.0 ],
					"text" : "rprepend #1/freeze"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-145",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 446.0, 312.959106, 201.0, 17.0 ],
					"text" : "rprepend #1/flip"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-149",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 446.0, 346.959106, 195.0, 17.0 ],
					"text" : "rprepend #1/ir"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-150",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 754.284607, 174.022156, 251.0, 17.0 ],
					"text" : "rprepend #1/chromasupress"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-41",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 453.0, 52.649597, 233.0, 17.0 ],
					"text" : "rprepend #1/init/internal"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-56",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 446.0, 365.590759, 237.0, 17.0 ],
					"text" : "rprepend #1/ir/correction"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-156",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 453.0, 69.649597, 234.0, 17.0 ],
					"text" : "rprepend #1/memory/recall"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-157",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 453.0, 87.465393, 249.0, 17.0 ],
					"text" : "rprepend #1/memory/set"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-2",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 17.284607, 120.646507, 247.0, 17.0 ],
					"text" : "rprepend #1/zoom/standart"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-3",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 17.284607, 141.775803, 212.0, 17.0 ],
					"text" : "rprepend #1/zoom/direct"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-12",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 17.284607, 78.387901, 263.0, 17.0 ],
					"text" : "rprepend #1/zoom/variable/tele"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-15",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 17.284607, 57.258602, 231.0, 17.0 ],
					"text" : "rprepend #1/zoom/stop"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-26",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 17.284607, 99.517204, 267.0, 17.0 ],
					"text" : "rprepend #1/zoom/variable/wide"
				}

			}
, 			{
				"box" : 				{
					"fontname" : "Arial",
					"fontsize" : 12.0,
					"frgb" : 0.0,
					"id" : "obj-61",
					"linecount" : 16,
					"maxclass" : "comment",
					"numinlets" : 1,
					"numoutlets" : 0,
					"patching_rect" : [ 922.284607, 193.143311, 99.0, 221.0 ],
					"text" : "TODO : \nCAM_AFMODE\nZOOMFOCUS\nRED GAIN\nBLUE GAIN\nCUSTOM\nMemSAVE\nDISPLAY\nMULTILINE\nMUTE\nPRIVACY\nIDWRITE\nALARAM\nMD\n\nDIGITAL ZOOM"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-10",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 17.284607, 36.129303, 201.0, 17.0 ],
					"text" : "rprepend #1/power"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.4, 0.4, 0.8, 1.0 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-22",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 1,
					"outlettype" : [ "" ],
					"patching_rect" : [ 747.284607, 218.0802, 168.0, 17.0 ],
					"text" : "r #1/init"
				}

			}
, 			{
				"box" : 				{
					"color" : [ 0.409616, 0.407898, 0.812012, 0.36 ],
					"fontname" : "Arial",
					"fontsize" : 9.0,
					"id" : "obj-29",
					"maxclass" : "newobj",
					"numinlets" : 0,
					"numoutlets" : 0,
					"patching_rect" : [ 17.284607, 15.0, 234.0, 17.0 ],
					"text" : "rprepend #1/setaddress"
				}

			}
 ],
		"lines" : [ 			{
				"patchline" : 				{
					"destination" : [ "obj-169", 0 ],
					"disabled" : 0,
					"hidden" : 0,
					"source" : [ "obj-22", 0 ]
				}

			}
 ]
	}

}
