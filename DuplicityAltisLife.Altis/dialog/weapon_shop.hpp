class ItemPanelBackgroundCOMMON : Life_RscText {
    idc = -1;
    colorBackground[] = {0, 0, 0, 0.5};
    x = 0; y = 0;
    w = 0.475; h = 0.36;
};

class ItemImageBackgroundCOMMON : Life_RscPictureKeepAspect {
    idc = -1;
    text = "images\pegboard2x1round.paa";
    x = 0.00625; y = 0.01;
    w = 0.15; h = 0.12;
};

class ItemImageCOMMON : Life_RscPictureKeepAspect {
    text = "";
    x = 0.00625; y = 0.01;
    w = 0.15; h = 0.12;
};

class ItemButtonCOMMON : Life_RscButtonInvisible {
    tooltip = "Click to buy!";
    x = 0.00625; y = 0.01;
    w = 0.15; h = 0.12;
};

class ItemInfoCOMMON : Life_RscStructuredText {
    x = 0.1625; y = 0.02;
    w = 0.30625; h = 0.11;
};

class Mag1ImageBackgroundCOMMON : Life_RscPictureKeepAspect {
    idc = -1;
    text = "images\pegboard1x1round.paa";
    x = 0.00625; y = 0.14;
    w = 0.0625; h = 0.1;
};

class Mag1ImageCOMMON : Life_RscPictureKeepAspect {
    text = "";
    x = 0.00625; y = 0.14;
    w = 0.0625; h = 0.1;
};

class Mag1ButtonCOMMON : Life_RscButtonInvisible {
    x = 0.00625; y = 0.14;
    w = 0.0625; h = 0.1;
    tooltip = "Click to buy!";
};

class Mag1InfoCOMMON : Life_RscStructuredText {
    x = 0.075; y = 0.15;
    w = 0.39375; h = 0.09;
};

class Mag2ImageBackgroundCOMMON : Life_RscPictureKeepAspect {
    idc = -1;
    text = "images\pegboard1x1round.paa";
    x = 0.00625; y = 0.25;
    w = 0.0625; h = 0.1;
};

class Mag2ImageCOMMON : Life_RscPictureKeepAspect {
    text = "";
    x = 0.00625; y = 0.25;
    w = 0.0625; h = 0.1;
};

class Mag2ButtonCOMMON : Life_RscButtonInvisible {
    x = 0.00625; y = 0.25;
    w = 0.0625; h = 0.1;
    tooltip = "Click to buy!";
};

class Mag2DescriptionCOMMON : Life_RscStructuredText {
    x = 0.075; y = 0.26;
    w = 0.39375; h = 0.09;
};

class AccPanelBackgroundCOMMON : Life_RscText {
    idc = -1;
    x = 0; y = 0;
    w = 0.33125; h = 0.12;
    colorBackground[] = {0, 0, 0, 0.5};
};

class AccItemImageBackgroundCOMMON : Life_RscPictureKeepAspect {
    idc = -1;
    x = 0.00625; y = 0.01;
    w = 0.0625; h = 0.1;
    text = "images\pegboard1x1round.paa";
};

class AccItemImageCOMMON : Life_RscPictureKeepAspect {
    text = "";
    x = 0.00625; y = 0.01;
    w = 0.0625; h = 0.1;
};

class AccItemButtonCOMMON : Life_RscButtonInvisible {
    x = 0.00625; y = 0.01;
    w = 0.0625; h = 0.1;
    tooltip = "Click to buy!";
};

class AccItemInfoCOMMON : Life_RscStructuredText {
    x = 0.075; y = 0.02;
    w = 0.25; h = 0.09;
};

class life_weapon_shop {
    idd = 38400;
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class LeftPanelTitle : Life_RscText {
            idc = 1;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.8};
            x = -0.1875; y = -0.02;
            w = 1; h = 0.04;
        };

        class LeftPanelBackground : Life_RscText {
            idc = -1;
            colorBackground[] = {0, 0, 0, 0.7};
            x = -0.1875; y = 0.02;
            w = 1; h = 1;
        };

        class RightPanelTitle : Life_RscText {
            idc = -1;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.8};
            text = "Accessories";
            x = 0.825; y = -0.02;
            w = 0.3625; h = 0.04;
        };

        class RightPanelBackground : Life_RscText {
            idc = -1;
            colorBackground[] = {0, 0, 0, 0.7};
            x = 0.825; y = 0.02;
            w = 0.3625; h = 1;
        };
    };

    class controls {
        class LeftPanelControls : Life_RscControlsGroup {
            idc = -1;
            x = -0.1875; y = 0.02;
            w = 1; h = 1;
            class VScrollBar : Life_RscScrollBar {
                width = 0.025;
                color[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.8};
                colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 1};
            };
            class controls {
                class Item00 : Life_RscControlsGroup {
                    idc = 100;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1100;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 200;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 300;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 400;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 500;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 600;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 700;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 800;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 900;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1000;
                        };
                    };
                };

                class Item01 : Life_RscControlsGroup {
                    idc = 101;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1101;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 201;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 301;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 401;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 501;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 601;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 701;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 801;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 901;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1001;
                        };
                    };
                };

                class Item02 : Life_RscControlsGroup {
                    idc = 102;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1102;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 202;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 302;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 402;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 502;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 602;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 702;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 802;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 902;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1002;
                        };
                    };
                };

                class Item03 : Life_RscControlsGroup {
                    idc = 103;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1103;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 203;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 303;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 403;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 503;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 603;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 703;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 803;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 903;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1003;
                        };
                    };
                };

                class Item04 : Life_RscControlsGroup {
                    idc = 104;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1104;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 204;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 304;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 404;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 504;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 604;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 704;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 804;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 904;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1004;
                        };
                    };
                };

                class Item05 : Life_RscControlsGroup {
                    idc = 105;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1105;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 205;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 305;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 405;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 505;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 605;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 705;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 805;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 905;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1005;
                        };
                    };
                };

                class Item06 : Life_RscControlsGroup {
                    idc = 106;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1106;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 206;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 306;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 406;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 506;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 606;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 706;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 806;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 906;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1006;
                        };
                    };
                };

                class Item07 : Life_RscControlsGroup {
                    idc = 107;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1107;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 207;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 307;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 407;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 507;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 607;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 707;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 807;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 907;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1007;
                        };
                    };
                };

                class Item08 : Life_RscControlsGroup {
                    idc = 108;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1108;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 208;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 308;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 408;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 508;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 608;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 708;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 808;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 908;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1008;
                        };
                    };
                };

                class Item09 : Life_RscControlsGroup {
                    idc = 109;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1109;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 209;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 309;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 409;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 509;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 609;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 709;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 809;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 909;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1009;
                        };
                    };
                };

                class Item10 : Life_RscControlsGroup {
                    idc = 110;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1110;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 210;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 310;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 410;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 510;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 610;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 710;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 810;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 910;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1010;
                        };
                    };
                };

                class Item11 : Life_RscControlsGroup {
                    idc = 111;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1111;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 211;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 311;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 411;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 511;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 611;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 711;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 811;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 911;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1011;
                        };
                    };
                };

                class Item12 : Life_RscControlsGroup {
                    idc = 112;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1112;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 212;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 312;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 412;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 512;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 612;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 712;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 812;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 912;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1012;
                        };
                    };
                };

                class Item13 : Life_RscControlsGroup {
                    idc = 113;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1113;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 213;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 313;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 413;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 513;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 613;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 713;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 813;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 913;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1013;
                        };
                    };
                };

                class Item14 : Life_RscControlsGroup {
                    idc = 114;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1114;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 214;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 314;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 414;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 514;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 614;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 714;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 814;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 914;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1014;
                        };
                    };
                };

                class Item15 : Life_RscControlsGroup {
                    idc = 115;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1115;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 215;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 315;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 415;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 515;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 615;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 715;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 815;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 915;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1015;
                        };
                    };
                };

                class Item16 : Life_RscControlsGroup {
                    idc = 116;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1116;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 216;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 316;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 416;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 516;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 616;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 716;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 816;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 916;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1016;
                        };
                    };
                };

                class Item17 : Life_RscControlsGroup {
                    idc = 117;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1117;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 217;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 317;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 417;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 517;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 617;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 717;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 817;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 917;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1017;
                        };
                    };
                };

                class Item18 : Life_RscControlsGroup {
                    idc = 118;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1118;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 218;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 318;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 418;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 518;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 618;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 718;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 818;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 918;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1018;
                        };
                    };
                };

                class Item19 : Life_RscControlsGroup {
                    idc = 119;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1119;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 219;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 319;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 419;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 519;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 619;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 719;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 819;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 919;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1019;
                        };
                    };
                };

                class Item20 : Life_RscControlsGroup {
                    idc = 120;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1120;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 220;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 320;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 420;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 520;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 620;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 720;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 820;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 920;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1020;
                        };
                    };
                };

                class Item21 : Life_RscControlsGroup {
                    idc = 121;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1121;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 221;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 321;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 421;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 521;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 621;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 721;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 821;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 921;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1021;
                        };
                    };
                };

                class Item22 : Life_RscControlsGroup {
                    idc = 122;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1122;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 222;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 322;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 422;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 522;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 622;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 722;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 822;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 922;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1022;
                        };
                    };
                };

                class Item23 : Life_RscControlsGroup {
                    idc = 123;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1123;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 223;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 323;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 423;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 523;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 623;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 723;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 823;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 923;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1023;
                        };
                    };
                };

                class Item24 : Life_RscControlsGroup {
                    idc = 124;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1124;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 224;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 324;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 424;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 524;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 624;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 724;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 824;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 924;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1024;
                        };
                    };
                };

                class Item25 : Life_RscControlsGroup {
                    idc = 125;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1125;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 225;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 325;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 425;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 525;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 625;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 725;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 825;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 925;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1025;
                        };
                    };
                };

                class Item26 : Life_RscControlsGroup {
                    idc = 126;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1126;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 226;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 326;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 426;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 526;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 626;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 726;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 826;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 926;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1026;
                        };
                    };
                };

                class Item27 : Life_RscControlsGroup {
                    idc = 127;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1127;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 227;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 327;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 427;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 527;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 627;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 727;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 827;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 927;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1027;
                        };
                    };
                };

                class Item28 : Life_RscControlsGroup {
                    idc = 128;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1128;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 228;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 328;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 428;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 528;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 628;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 728;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 828;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 928;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1028;
                        };
                    };
                };

                class Item29 : Life_RscControlsGroup {
                    idc = 129;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1129;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 229;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 329;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 429;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 529;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 629;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 729;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 829;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 929;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1029;
                        };
                    };
                };

                class Item30 : Life_RscControlsGroup {
                    idc = 130;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1130;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 230;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 330;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 430;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 530;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 630;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 730;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 830;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 930;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1030;
                        };
                    };
                };

                class Item31 : Life_RscControlsGroup {
                    idc = 131;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1131;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 231;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 331;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 431;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 531;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 631;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 731;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 831;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 931;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1031;
                        };
                    };
                };

                class Item32 : Life_RscControlsGroup {
                    idc = 132;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1132;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 232;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 332;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 432;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 532;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 632;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 732;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 832;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 932;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1032;
                        };
                    };
                };

                class Item33 : Life_RscControlsGroup {
                    idc = 133;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1133;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 233;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 333;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 433;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 533;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 633;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 733;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 833;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 933;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1033;
                        };
                    };
                };

                class Item34 : Life_RscControlsGroup {
                    idc = 134;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1134;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 234;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 334;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 434;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 534;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 634;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 734;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 834;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 934;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1034;
                        };
                    };
                };

                class Item35 : Life_RscControlsGroup {
                    idc = 135;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1135;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 235;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 335;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 435;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 535;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 635;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 735;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 835;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 935;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1035;
                        };
                    };
                };

                class Item36 : Life_RscControlsGroup {
                    idc = 136;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1136;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 236;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 336;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 436;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 536;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 636;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 736;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 836;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 936;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1036;
                        };
                    };
                };

                class Item37 : Life_RscControlsGroup {
                    idc = 137;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1138;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 237;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 337;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 437;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 537;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 637;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 737;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 837;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 937;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1037;
                        };
                    };
                };

                class Item38 : Life_RscControlsGroup {
                    idc = 138;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1138;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 238;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 338;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 438;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 538;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 638;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 738;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 838;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 938;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1038;
                        };
                    };
                };

                class Item39 : Life_RscControlsGroup {
                    idc = 139;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1139;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 239;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 339;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 439;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 539;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 639;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 739;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 839;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 939;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1039;
                        };
                    };
                };

                class Item40 : Life_RscControlsGroup {
                    idc = 140;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1140;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 240;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 340;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 440;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 540;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 640;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 740;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 840;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 940;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1040;
                        };
                    };
                };

                class Item41 : Life_RscControlsGroup {
                    idc = 141;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1141;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 241;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 341;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 441;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 541;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 641;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 741;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 841;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 941;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1041;
                        };
                    };
                };

                class Item42 : Life_RscControlsGroup {
                    idc = 142;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1142;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 242;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 342;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 442;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 542;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 642;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 742;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 842;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 942;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1042;
                        };
                    };
                };

                class Item43 : Life_RscControlsGroup {
                    idc = 143;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1143;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 243;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 343;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 443;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 543;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 643;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 743;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 843;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 943;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1043;
                        };
                    };
                };

                class Item44 : Life_RscControlsGroup {
                    idc = 144;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1144;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 244;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 344;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 444;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 544;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 644;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 744;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 844;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 944;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1044;
                        };
                    };
                };

                class Item45 : Life_RscControlsGroup {
                    idc = 145;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1145;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 245;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 345;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 445;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 545;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 645;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 745;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 845;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 945;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1045;
                        };
                    };
                };

                class Item46 : Life_RscControlsGroup {
                    idc = 146;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1146;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 246;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 346;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 446;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 546;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 646;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 746;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 846;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 946;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1046;
                        };
                    };
                };

                class Item47 : Life_RscControlsGroup {
                    idc = 147;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1147;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 247;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 347;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 447;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 547;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 647;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 747;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 847;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 947;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1047;
                        };
                    };
                };

                class Item48 : Life_RscControlsGroup {
                    idc = 148;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1148;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 248;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 348;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 448;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 548;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 648;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 748;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 848;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 948;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1048;
                        };
                    };
                };

                class Item49 : Life_RscControlsGroup {
                    idc = 149;
                    w = 0.475; h = 0.36;
                    class controls {
                        class ItemPanelBackground : ItemPanelBackgroundCOMMON {};
                        class ItemImageBackground : ItemImageBackgroundCOMMON {};
                        class Mag1ImageBackground : Mag1ImageBackgroundCOMMON {};
                        class Mag2ImageBackground : Mag2ImageBackgroundCOMMON {
                            idc = 1149;
                        };
                        class ItemImage: ItemImageCOMMON {
                            idc = 249;
                        };
                        class ItemButton : ItemButtonCOMMON {
                            idc = 349;
                        };
                        class ItemInfo : ItemInfoCOMMON {
                            idc = 449;
                        };
                        class Mag1Image : Mag1ImageCOMMON {
                            idc = 549;
                        };
                        class Mag1Button : Mag1ButtonCOMMON {
                            idc = 649;
                        };
                        class Mag1Info : Mag1InfoCOMMON {
                            idc = 749;
                        };
                        class Mag2Image : Mag2ImageCOMMON {
                            idc = 849;
                        };
                        class Mag2Button : Mag2ButtonCOMMON {
                            idc = 949;
                        };
                        class Mag2Description : Mag2DescriptionCOMMON {
                            idc = 1049;
                        };
                    };
                };
            };
        };

        class RightPanelControls : Life_RscControlsGroup {
            idc = -1;
            x = 0.825; y = 0.02;
            w = 0.3625; h = 1;
            class VScrollBar : Life_RscScrollBar {
                width = 0.025;
                color[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.8};
                colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 1};
            };
            class controls {
                class Item00 : Life_RscControlsGroup {
                    idc = 2000;
                    x = 0.00625; y = (0.01 + (00 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2100;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2200;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2300;
                        };
                    };
                };

                class Item01 : Life_RscControlsGroup {
                    idc = 2001;
                    x = 0.00625; //y = (0.01 + (01 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2101;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2201;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2301;
                        };
                    };
                };

                class Item02 : Life_RscControlsGroup {
                    idc = 2002;
                    x = 0.00625; //y = (0.01 + (02 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2102;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2202;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2302;
                        };
                    };
                };

                class Item03 : Life_RscControlsGroup {
                    idc = 2003;
                    x = 0.00625; //y = (0.01 + (03 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2103;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2203;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2303;
                        };
                    };
                };

                class Item04 : Life_RscControlsGroup {
                    idc = 2004;
                    x = 0.00625; //y = (0.01 + (04 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2104;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2204;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2304;
                        };
                    };
                };

                class Item05 : Life_RscControlsGroup {
                    idc = 2005;
                    x = 0.00625; //y = (0.01 + (05 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2105;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2205;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2305;
                        };
                    };
                };

                class Item06 : Life_RscControlsGroup {
                    idc = 2006;
                    x = 0.00625; //y = (0.01 + (06 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2106;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2206;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2306;
                        };
                    };
                };

                class Item07 : Life_RscControlsGroup {
                    idc = 2007;
                    x = 0.00625; //y = (0.01 + (07 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2107;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2207;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2307;
                        };
                    };
                };

                class Item08 : Life_RscControlsGroup {
                    idc = 2008;
                    x = 0.00625; //y = (0.01 + (08 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2108;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2208;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2308;
                        };
                    };
                };

                class Item09 : Life_RscControlsGroup {
                    idc = 2009;
                    x = 0.00625; //y = (0.01 + (09 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2109;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2209;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2309;
                        };
                    };
                };

                class Item10 : Life_RscControlsGroup {
                    idc = 2010;
                    x = 0.00625; //y = (0.01 + (10 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2110;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2210;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2310;
                        };
                    };
                };

                class Item11 : Life_RscControlsGroup {
                    idc = 2011;
                    x = 0.00625; //y = (0.01 + (11 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2111;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2211;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2311;
                        };
                    };
                };

                class Item12 : Life_RscControlsGroup {
                    idc = 2012;
                    x = 0.00625; //y = (0.01 + (12 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2112;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2212;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2312;
                        };
                    };
                };

                class Item13 : Life_RscControlsGroup {
                    idc = 2013;
                    x = 0.00625; //y = (0.01 + (13 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2113;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2213;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2313;
                        };
                    };
                };

                class Item14 : Life_RscControlsGroup {
                    idc = 2014;
                    x = 0.00625; //y = (0.01 + (14 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2114;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2214;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2314;
                        };
                    };
                };

                class Item15 : Life_RscControlsGroup {
                    idc = 2015;
                    x = 0.00625; //y = (0.01 + (15 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2115;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2215;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2315;
                        };
                    };
                };

                class Item16 : Life_RscControlsGroup {
                    idc = 2016;
                    x = 0.00625; //y = (0.01 + (16 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2116;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2216;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2316;
                        };
                    };
                };

                class Item17 : Life_RscControlsGroup {
                    idc = 2017;
                    x = 0.00625; //y = (0.01 + (17 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2117;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2217;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2317;
                        };
                    };
                };

                class Item18 : Life_RscControlsGroup {
                    idc = 2018;
                    x = 0.00625; //y = (0.01 + (18 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2118;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2218;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2318;
                        };
                    };
                };

                class Item19 : Life_RscControlsGroup {
                    idc = 2019;
                    x = 0.00625; //y = (0.01 + (19 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2119;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2219;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2319;
                        };
                    };
                };

                class Item20 : Life_RscControlsGroup {
                    idc = 2020;
                    x = 0.00625; //y = (0.01 + (20 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2120;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2220;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2320;
                        };
                    };
                };

                class Item21 : Life_RscControlsGroup {
                    idc = 2021;
                    x = 0.00625; //y = (0.01 + (21 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2121;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2221;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2321;
                        };
                    };
                };

                class Item22 : Life_RscControlsGroup {
                    idc = 2022;
                    x = 0.00625; //y = (0.01 + (22 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2122;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2222;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2322;
                        };
                    };
                };

                class Item23 : Life_RscControlsGroup {
                    idc = 2023;
                    x = 0.00625; //y = (0.01 + (23 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2123;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2223;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2323;
                        };
                    };
                };

                class Item24 : Life_RscControlsGroup {
                    idc = 2024;
                    x = 0.00625; //y = (0.01 + (24 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2124;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2224;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2324;
                        };
                    };
                };

                class Item25 : Life_RscControlsGroup {
                    idc = 2025;
                    x = 0.00625; //y = (0.01 + (25 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2125;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2225;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2325;
                        };
                    };
                };

                class Item26 : Life_RscControlsGroup {
                    idc = 2026;
                    x = 0.00625; //y = (0.01 + (26 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2126;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2226;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2326;
                        };
                    };
                };

                class Item27 : Life_RscControlsGroup {
                    idc = 2027;
                    x = 0.00625; //y = (0.01 + (27 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2127;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2227;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2327;
                        };
                    };
                };

                class Item28 : Life_RscControlsGroup {
                    idc = 2028;
                    x = 0.00625; //y = (0.01 + (28 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2128;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2228;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2328;
                        };
                    };
                };

                class Item29 : Life_RscControlsGroup {
                    idc = 2029;
                    x = 0.00625; //y = (0.01 + (29 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2129;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2229;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2329;
                        };
                    };
                };

                class Item30 : Life_RscControlsGroup {
                    idc = 2030;
                    x = 0.00625; //y = (0.01 + (30 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2130;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2230;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2330;
                        };
                    };
                };

                class Item31 : Life_RscControlsGroup {
                    idc = 2031;
                    x = 0.00625; //y = (0.01 + (31 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2131;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2231;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2331;
                        };
                    };
                };

                class Item32 : Life_RscControlsGroup {
                    idc = 2032;
                    x = 0.00625; //y = (0.01 + (32 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2132;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2232;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2332;
                        };
                    };
                };

                class Item33 : Life_RscControlsGroup {
                    idc = 2033;
                    x = 0.00625; //y = (0.01 + (33 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2133;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2233;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2333;
                        };
                    };
                };

                class Item34 : Life_RscControlsGroup {
                    idc = 2034;
                    x = 0.00625; //y = (0.01 + (34 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2134;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2234;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2334;
                        };
                    };
                };

                class Item35 : Life_RscControlsGroup {
                    idc = 2035;
                    x = 0.00625; //y = (0.01 + (35 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2135;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2235;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2335;
                        };
                    };
                };

                class Item36 : Life_RscControlsGroup {
                    idc = 2036;
                    x = 0.00625; //y = (0.01 + (36 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2136;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2236;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2336;
                        };
                    };
                };

                class Item37 : Life_RscControlsGroup {
                    idc = 2037;
                    x = 0.00625; //y = (0.01 + (37 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2137;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2237;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2337;
                        };
                    };
                };

                class Item38 : Life_RscControlsGroup {
                    idc = 2038;
                    x = 0.00625; //y = (0.01 + (38 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2138;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2238;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2338;
                        };
                    };
                };

                class Item39 : Life_RscControlsGroup {
                    idc = 2039;
                    x = 0.00625; //y = (0.01 + (39 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2139;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2239;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2339;
                        };
                    };
                };

                class Item40 : Life_RscControlsGroup {
                    idc = 2040;
                    x = 0.00625; //y = (0.01 + (40 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2140;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2240;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2340;
                        };
                    };
                };

                class Item41 : Life_RscControlsGroup {
                    idc = 2041;
                    x = 0.00625; //y = (0.01 + (41 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2141;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2241;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2341;
                        };
                    };
                };

                class Item42 : Life_RscControlsGroup {
                    idc = 2042;
                    x = 0.00625; //y = (0.01 + (42 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2142;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2242;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2342;
                        };
                    };
                };

                class Item43 : Life_RscControlsGroup {
                    idc = 2043;
                    x = 0.00625; //y = (0.01 + (43 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2143;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2243;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2343;
                        };
                    };
                };

                class Item44 : Life_RscControlsGroup {
                    idc = 2044;
                    x = 0.00625; //y = (0.01 + (44 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2144;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2244;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2344;
                        };
                    };
                };

                class Item45 : Life_RscControlsGroup {
                    idc = 2045;
                    x = 0.00625; //y = (0.01 + (45 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2145;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2245;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2345;
                        };
                    };
                };

                class Item46 : Life_RscControlsGroup {
                    idc = 2046;
                    x = 0.00625; //y = (0.01 + (46 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2146;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2246;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2346;
                        };
                    };
                };

                class Item47 : Life_RscControlsGroup {
                    idc = 2047;
                    x = 0.00625; //y = (0.01 + (47 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2147;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2247;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2347;
                        };
                    };
                };

                class Item48 : Life_RscControlsGroup {
                    idc = 2048;
                    x = 0.00625; //y = (0.01 + (48 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2148;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2248;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2348;
                        };
                    };
                };

                class Item49 : Life_RscControlsGroup {
                    idc = 2049;
                    x = 0.00625; //y = (0.01 + (49 * 0.14));
                    w = 0.33125; h = 0.12;
                    class controls {
                        class PanelBackground : AccPanelBackgroundCOMMON {};
                        class ItemImageBackground : AccItemImageBackgroundCOMMON {};
                        class ItemImage : AccItemImageCOMMON {
                            idc = 2149;
                        };
                        class ItemButton : AccItemButtonCOMMON {
                            idc = 2249;
                        };
                        class ItemInfo : AccItemInfoCOMMON {
                            idc = 2349;
                        };
                    };
                };
            };
        };

        class CloseButton : Life_RscButtonMenu {
            idc = -1;
            text = "Close";
            onButtonClick = "closeDialog 0;";
            x = -0.1875; y = 1.024;
            w = (4 / 40); h = (1 / 25);
        };

        class RefillButton : Life_RscButtonMenu {
            idc = -1;
            text = "Refill Magazines";
            x = -0.0825; y = 1.024;
            w = 0.25; h = (1 / 25);
        };
    };
};
