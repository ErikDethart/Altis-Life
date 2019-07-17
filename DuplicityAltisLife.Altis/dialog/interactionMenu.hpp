class ActionButton_Common: Life_RscButtonMenu {
	idc = -1;
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.8};
	text = "";
	x = 0.0125;
	w = 0.375;
	h = 0.04;
};

class life_interaction_menu {
	idd = 500;
	movingEnable = 0;
	enableSimulation = 1;

	class controlsBackground {
		class titleBar : Life_RscText {
			idc = 100;
			text = "";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.8};
			x = 0.3;
			y = 0;
			w = 0.4;
			h = 0.04;
		};

		class mainBackground : Life_RscText {
			idc = 103;
			x = 0.3;
			y = 0;
			w = 0.4;
			h = 0;
			text = "";
			colorBackground[] = {0, 0, 0, 0.7};
		};
	};

	class controls {
		class closeButton : Life_RscButtonMenu {
			idc = 102;
			text = "close";
			onButtonClick = "closeDialog 0;";
			x = 0.3;
			y = 0;
			w = 0.1;
			h = 0.04;
		};

		class buttonsGroup : Life_RscControlsGroup {
			idc = 101;
			x = 0.3;
			y = 0;
			w = 0.4;
			h = 0;

			class VScrollBar {
				width = 0;
				scrollSpeed = 0;
			};

			class HScrollBar {
				height = 0;
			};

			class controls {
				class button0 : ActionButton_Common {
					idc = 1000;
					y = 0.02;
				};

				class button1 : ActionButton_Common {
					idc = 1001;
					y = 0.08;
				};

				class button2 : ActionButton_Common {
					idc = 1002;
					y = 0.14;
				};

				class button3 : ActionButton_Common {
					idc = 1003;
					y = 0.2;
				};

				class button4 : ActionButton_Common {
					idc = 1004;
					y = 0.26;
				};

				class button5 : ActionButton_Common {
					idc = 1005;
					y = 0.32;
				};

				class button6 : ActionButton_Common {
					idc = 1006;
					y = 0.38;
				};

				class button7 : ActionButton_Common {
					idc = 1007;
					y = 0.44;
				};

				class button8 : ActionButton_Common {
					idc = 1008;
					y = 0.5;
				};

				class button9 : ActionButton_Common {
					idc = 1009;
					y = 0.56;
				};

				class button10 : ActionButton_Common {
					idc = 1010;
					y = 0.62;
				};

				class button11 : ActionButton_Common {
					idc = 1011;
					y = 0.68;
				};

				class button12 : ActionButton_Common {
					idc = 1012;
					y = 0.74;
				};

				class button13 : ActionButton_Common {
					idc = 1013;
					y = 0.8;
				};

				class button14 : ActionButton_Common {
					idc = 1014;
					y = 0.86;
				};

				class button15 : ActionButton_Common {
					idc = 1015;
					y = 0.92;
				};
			};
		};
	};
};
