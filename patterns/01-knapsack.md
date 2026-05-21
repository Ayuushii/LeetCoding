# 0/1 Knapsack


### Questions

<details>
<summary>Identification of this Pattern</summary>
- Pattern covers problems where you include/exclude an item to find an optimal solution (min/max)
- Unbounded knapsack - supply of items is unlimited
- Fractional Knapsack is Greedy - _**Link to that**_

</details>

<details>
<summary>[0/1 Knapsack Problem](https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1) - Given list of items with their values and weights and a bag with weight W, choose items to fill in the bag such that profit is maximised.</summary>
- We need **BASE CONDITION + CHOICE DIAGRAM**

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663TDW67O2%2F20260521%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260521T112306Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDoaCXVzLXdlc3QtMiJGMEQCIE5%2BxfEGkUYFGJZLeISsxGTD%2Fjd9qGaIbxaIUYymGRdiAiABXTurrnvt1EL5RanVW7fxP1k7VNr5%2BYjC9Tc%2B0Bgapyr%2FAwgDEAAaDDYzNzQyMzE4MzgwNSIMyVDXzzu5EmPddljPKtwDJb7NQMhuELXymnpg7%2B1MlbP1c%2B6zcuNBWRzRM6u8xxTeq7JS2Lq%2BjXsog8depXtwcHOQ3asuvElJP4q16IHmkIl8HAoguui4p5HlY056gjho1mzWZmZFz%2Bf55ZwMirmwP9VAiAkwn45HhMhAVAuhpNrL5jc5TOTAXD54OLMSOLESuya2MrVbokWF35XzKfHBpcZAwm1XYGB9tviHe74SwAnJrTD3tZHvceMsSTBFlkOWWQVyiwZYP1693GhF%2BsDiWXbjHTyaqUcyn7SjhME%2B2HMIKzC8RQleFxDQsPHDeyPDD3HeoGoNiY5pNqj%2BysAX0wvoOLPFoT7DcfukompvSe3p0aIvUBm6nZgkXpJetpyCan7HWW3gbCuv3OAi0mNrMURtctfXI%2F1kbgniL0%2F%2B%2BD%2FBw1sG2GUESqfM3efs5rZV5Bzjn7bGRRKiNQvr3B31elqXKK%2BDFtgrQczhiaCkJjMzeMyGK9s%2FRQXXaeXSCsqOMJmGAR6oshStPbKkeZBq0qEdwupx4eS8AvZYcebulAsQ2%2FecxhxS0VAdriloJJoVhpgesw1Qkob%2FaE%2Bnz6RmIEFvGEzw60A%2FC0XzIbHTZ1%2BMxY04EYBs25G3bSWadxP7N4zf2PTmI5mXHTgw8q670AY6pgGcZJLlQiTGOZNvdl0qefBEKQgFMjPvu%2BYmiyo74WXLyOfaXmW5sfCFtzB9WlQ9lWC58u19ppZFxpxSKMPch83zz7Chu7hjQL2lILw7Pbt%2FETYvlLAivW%2BlPOHltW%2Bv0GgyMT2Xuna6JpTNMML1VqcXlpRxUThPAavEA6kxjKxouBmt75eKoh%2BgsNV2KBEAwitTGh8j1FgolqBKI5o6DnHeyBBGFuDE&X-Amz-Signature=731546e0e258f099e2d8e1958f428acb957aa3d67e2ef560ddf4f8300da06464&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663TDW67O2%2F20260521%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260521T112306Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDoaCXVzLXdlc3QtMiJGMEQCIE5%2BxfEGkUYFGJZLeISsxGTD%2Fjd9qGaIbxaIUYymGRdiAiABXTurrnvt1EL5RanVW7fxP1k7VNr5%2BYjC9Tc%2B0Bgapyr%2FAwgDEAAaDDYzNzQyMzE4MzgwNSIMyVDXzzu5EmPddljPKtwDJb7NQMhuELXymnpg7%2B1MlbP1c%2B6zcuNBWRzRM6u8xxTeq7JS2Lq%2BjXsog8depXtwcHOQ3asuvElJP4q16IHmkIl8HAoguui4p5HlY056gjho1mzWZmZFz%2Bf55ZwMirmwP9VAiAkwn45HhMhAVAuhpNrL5jc5TOTAXD54OLMSOLESuya2MrVbokWF35XzKfHBpcZAwm1XYGB9tviHe74SwAnJrTD3tZHvceMsSTBFlkOWWQVyiwZYP1693GhF%2BsDiWXbjHTyaqUcyn7SjhME%2B2HMIKzC8RQleFxDQsPHDeyPDD3HeoGoNiY5pNqj%2BysAX0wvoOLPFoT7DcfukompvSe3p0aIvUBm6nZgkXpJetpyCan7HWW3gbCuv3OAi0mNrMURtctfXI%2F1kbgniL0%2F%2B%2BD%2FBw1sG2GUESqfM3efs5rZV5Bzjn7bGRRKiNQvr3B31elqXKK%2BDFtgrQczhiaCkJjMzeMyGK9s%2FRQXXaeXSCsqOMJmGAR6oshStPbKkeZBq0qEdwupx4eS8AvZYcebulAsQ2%2FecxhxS0VAdriloJJoVhpgesw1Qkob%2FaE%2Bnz6RmIEFvGEzw60A%2FC0XzIbHTZ1%2BMxY04EYBs25G3bSWadxP7N4zf2PTmI5mXHTgw8q670AY6pgGcZJLlQiTGOZNvdl0qefBEKQgFMjPvu%2BYmiyo74WXLyOfaXmW5sfCFtzB9WlQ9lWC58u19ppZFxpxSKMPch83zz7Chu7hjQL2lILw7Pbt%2FETYvlLAivW%2BlPOHltW%2Bv0GgyMT2Xuna6JpTNMML1VqcXlpRxUThPAavEA6kxjKxouBmt75eKoh%2BgsNV2KBEAwitTGh8j1FgolqBKI5o6DnHeyBBGFuDE&X-Amz-Signature=e8b682c593d0d6632f0823942161996502dca81a307bdc75d14469fb8f1804f0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663TDW67O2%2F20260521%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260521T112306Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDoaCXVzLXdlc3QtMiJGMEQCIE5%2BxfEGkUYFGJZLeISsxGTD%2Fjd9qGaIbxaIUYymGRdiAiABXTurrnvt1EL5RanVW7fxP1k7VNr5%2BYjC9Tc%2B0Bgapyr%2FAwgDEAAaDDYzNzQyMzE4MzgwNSIMyVDXzzu5EmPddljPKtwDJb7NQMhuELXymnpg7%2B1MlbP1c%2B6zcuNBWRzRM6u8xxTeq7JS2Lq%2BjXsog8depXtwcHOQ3asuvElJP4q16IHmkIl8HAoguui4p5HlY056gjho1mzWZmZFz%2Bf55ZwMirmwP9VAiAkwn45HhMhAVAuhpNrL5jc5TOTAXD54OLMSOLESuya2MrVbokWF35XzKfHBpcZAwm1XYGB9tviHe74SwAnJrTD3tZHvceMsSTBFlkOWWQVyiwZYP1693GhF%2BsDiWXbjHTyaqUcyn7SjhME%2B2HMIKzC8RQleFxDQsPHDeyPDD3HeoGoNiY5pNqj%2BysAX0wvoOLPFoT7DcfukompvSe3p0aIvUBm6nZgkXpJetpyCan7HWW3gbCuv3OAi0mNrMURtctfXI%2F1kbgniL0%2F%2B%2BD%2FBw1sG2GUESqfM3efs5rZV5Bzjn7bGRRKiNQvr3B31elqXKK%2BDFtgrQczhiaCkJjMzeMyGK9s%2FRQXXaeXSCsqOMJmGAR6oshStPbKkeZBq0qEdwupx4eS8AvZYcebulAsQ2%2FecxhxS0VAdriloJJoVhpgesw1Qkob%2FaE%2Bnz6RmIEFvGEzw60A%2FC0XzIbHTZ1%2BMxY04EYBs25G3bSWadxP7N4zf2PTmI5mXHTgw8q670AY6pgGcZJLlQiTGOZNvdl0qefBEKQgFMjPvu%2BYmiyo74WXLyOfaXmW5sfCFtzB9WlQ9lWC58u19ppZFxpxSKMPch83zz7Chu7hjQL2lILw7Pbt%2FETYvlLAivW%2BlPOHltW%2Bv0GgyMT2Xuna6JpTNMML1VqcXlpRxUThPAavEA6kxjKxouBmt75eKoh%2BgsNV2KBEAwitTGh8j1FgolqBKI5o6DnHeyBBGFuDE&X-Amz-Signature=358acaa0583f723bd57bce9d737ee6b1d52f947146ff921a0f039116405832fa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZKAHMKHL%2F20260521%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260521T112307Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDoaCXVzLXdlc3QtMiJHMEUCIBeAji8zxYywA7cyM8FJsVOXjFo1cLpEcFYjLbrOiExuAiEArB4hsP5BTRq1WVYfMapnghMRzgk7mVNyDtytSCbE3xwq%2FwMIAxAAGgw2Mzc0MjMxODM4MDUiDGmo0uQ0EbK85rjQICrcA%2FZBgD5kEEmd40ZsG%2FJFZ1MTUsr5jEN%2BCPaLxDEy8nUCTdA33UmjMy7Ryio5Rlxz%2FvpvmgHZvcCyIYlnObDn6O%2B0JM2dfgqNC0HMGrneWG2MYg7ynqcQYzXdT7O8PJN%2Flo1%2BXxnkmcggUSWsyLf1vP20uW0gdmePUQh2%2FiBiTxMnaK6z%2FdhEy7IGsdLhIdimEOpZNjH2gXer%2BHK7ezsVylpUajggqPxN02l%2FX4XZGQ2Z3kljfbOpXPNL4Bwb0CAgflYNI0I3zX54WlBHGMpb%2BL36QgtFKx9lqcyiRWBwFMY68I87nG0KUbGi4BmlOlUrYy24Dam%2FOvPJNlCzTYnX27siGYTWCpq1ZEJefG8aOrdJ%2FaF1WXWrWd55wooFbsX8NHE7BPW8q8RDkbyCN2PQmI7kAYY4Lf%2BJTgH3ZNGuSAHilpCrjg9avpIj254BZOeWc35FQByyH8X4lOkr58zLByLifFfbi05qBT%2Fh9NF5pkvOrVn0zmzhbPWYdu07%2BVnVsdi39bloa68IDOklgQWa%2Bb0h0DUEg1YkVt1pl%2FU4%2BJnHJVekTAOv%2B%2BWhviQ2YbTTLr5J%2FEXeqnlvBkSTrPi4Jcnpi41gUCQ8nsLZFWJ%2FNwapMwBC8Yw%2F%2FE0GD%2BelMNuvu9AGOqUBIaZQDGyprV%2F5YfXluWdZCt4LjImBOoymM8UoxFr3%2BTehiPkywGndp7erg3tsZimS%2Bwx5f6PCoqfSjHK%2FtCcBMVuBc7xgHKhZends4Crn0aNgnnPdyhk9hScf4gB9mHbC2XRR2kFhiW%2Fvv23Clc93lUbXadAKU%2F%2B756BlIFmpUpZ2Uynzt5UGa0qpzsIupkwKPVG1saB9D2Oyg9p2xYn%2BOLTjiHqp&X-Amz-Signature=4021a39023d16f28898aa8df8b45f3a3f20a13d64712db172e5b725b07bc5c0f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZKAHMKHL%2F20260521%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260521T112307Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDoaCXVzLXdlc3QtMiJHMEUCIBeAji8zxYywA7cyM8FJsVOXjFo1cLpEcFYjLbrOiExuAiEArB4hsP5BTRq1WVYfMapnghMRzgk7mVNyDtytSCbE3xwq%2FwMIAxAAGgw2Mzc0MjMxODM4MDUiDGmo0uQ0EbK85rjQICrcA%2FZBgD5kEEmd40ZsG%2FJFZ1MTUsr5jEN%2BCPaLxDEy8nUCTdA33UmjMy7Ryio5Rlxz%2FvpvmgHZvcCyIYlnObDn6O%2B0JM2dfgqNC0HMGrneWG2MYg7ynqcQYzXdT7O8PJN%2Flo1%2BXxnkmcggUSWsyLf1vP20uW0gdmePUQh2%2FiBiTxMnaK6z%2FdhEy7IGsdLhIdimEOpZNjH2gXer%2BHK7ezsVylpUajggqPxN02l%2FX4XZGQ2Z3kljfbOpXPNL4Bwb0CAgflYNI0I3zX54WlBHGMpb%2BL36QgtFKx9lqcyiRWBwFMY68I87nG0KUbGi4BmlOlUrYy24Dam%2FOvPJNlCzTYnX27siGYTWCpq1ZEJefG8aOrdJ%2FaF1WXWrWd55wooFbsX8NHE7BPW8q8RDkbyCN2PQmI7kAYY4Lf%2BJTgH3ZNGuSAHilpCrjg9avpIj254BZOeWc35FQByyH8X4lOkr58zLByLifFfbi05qBT%2Fh9NF5pkvOrVn0zmzhbPWYdu07%2BVnVsdi39bloa68IDOklgQWa%2Bb0h0DUEg1YkVt1pl%2FU4%2BJnHJVekTAOv%2B%2BWhviQ2YbTTLr5J%2FEXeqnlvBkSTrPi4Jcnpi41gUCQ8nsLZFWJ%2FNwapMwBC8Yw%2F%2FE0GD%2BelMNuvu9AGOqUBIaZQDGyprV%2F5YfXluWdZCt4LjImBOoymM8UoxFr3%2BTehiPkywGndp7erg3tsZimS%2Bwx5f6PCoqfSjHK%2FtCcBMVuBc7xgHKhZends4Crn0aNgnnPdyhk9hScf4gB9mHbC2XRR2kFhiW%2Fvv23Clc93lUbXadAKU%2F%2B756BlIFmpUpZ2Uynzt5UGa0qpzsIupkwKPVG1saB9D2Oyg9p2xYn%2BOLTjiHqp&X-Amz-Signature=6148e95d22cfdb3956dca26146743db8ca205dd6d2d739b532914ba76d1fa7fd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZKAHMKHL%2F20260521%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260521T112307Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDoaCXVzLXdlc3QtMiJHMEUCIBeAji8zxYywA7cyM8FJsVOXjFo1cLpEcFYjLbrOiExuAiEArB4hsP5BTRq1WVYfMapnghMRzgk7mVNyDtytSCbE3xwq%2FwMIAxAAGgw2Mzc0MjMxODM4MDUiDGmo0uQ0EbK85rjQICrcA%2FZBgD5kEEmd40ZsG%2FJFZ1MTUsr5jEN%2BCPaLxDEy8nUCTdA33UmjMy7Ryio5Rlxz%2FvpvmgHZvcCyIYlnObDn6O%2B0JM2dfgqNC0HMGrneWG2MYg7ynqcQYzXdT7O8PJN%2Flo1%2BXxnkmcggUSWsyLf1vP20uW0gdmePUQh2%2FiBiTxMnaK6z%2FdhEy7IGsdLhIdimEOpZNjH2gXer%2BHK7ezsVylpUajggqPxN02l%2FX4XZGQ2Z3kljfbOpXPNL4Bwb0CAgflYNI0I3zX54WlBHGMpb%2BL36QgtFKx9lqcyiRWBwFMY68I87nG0KUbGi4BmlOlUrYy24Dam%2FOvPJNlCzTYnX27siGYTWCpq1ZEJefG8aOrdJ%2FaF1WXWrWd55wooFbsX8NHE7BPW8q8RDkbyCN2PQmI7kAYY4Lf%2BJTgH3ZNGuSAHilpCrjg9avpIj254BZOeWc35FQByyH8X4lOkr58zLByLifFfbi05qBT%2Fh9NF5pkvOrVn0zmzhbPWYdu07%2BVnVsdi39bloa68IDOklgQWa%2Bb0h0DUEg1YkVt1pl%2FU4%2BJnHJVekTAOv%2B%2BWhviQ2YbTTLr5J%2FEXeqnlvBkSTrPi4Jcnpi41gUCQ8nsLZFWJ%2FNwapMwBC8Yw%2F%2FE0GD%2BelMNuvu9AGOqUBIaZQDGyprV%2F5YfXluWdZCt4LjImBOoymM8UoxFr3%2BTehiPkywGndp7erg3tsZimS%2Bwx5f6PCoqfSjHK%2FtCcBMVuBc7xgHKhZends4Crn0aNgnnPdyhk9hScf4gB9mHbC2XRR2kFhiW%2Fvv23Clc93lUbXadAKU%2F%2B756BlIFmpUpZ2Uynzt5UGa0qpzsIupkwKPVG1saB9D2Oyg9p2xYn%2BOLTjiHqp&X-Amz-Signature=b73a0c91c7287a1f35c7e3ff787e6b557a5a1817c8ca231a7ab6badd9486fadb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZKAHMKHL%2F20260521%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260521T112307Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDoaCXVzLXdlc3QtMiJHMEUCIBeAji8zxYywA7cyM8FJsVOXjFo1cLpEcFYjLbrOiExuAiEArB4hsP5BTRq1WVYfMapnghMRzgk7mVNyDtytSCbE3xwq%2FwMIAxAAGgw2Mzc0MjMxODM4MDUiDGmo0uQ0EbK85rjQICrcA%2FZBgD5kEEmd40ZsG%2FJFZ1MTUsr5jEN%2BCPaLxDEy8nUCTdA33UmjMy7Ryio5Rlxz%2FvpvmgHZvcCyIYlnObDn6O%2B0JM2dfgqNC0HMGrneWG2MYg7ynqcQYzXdT7O8PJN%2Flo1%2BXxnkmcggUSWsyLf1vP20uW0gdmePUQh2%2FiBiTxMnaK6z%2FdhEy7IGsdLhIdimEOpZNjH2gXer%2BHK7ezsVylpUajggqPxN02l%2FX4XZGQ2Z3kljfbOpXPNL4Bwb0CAgflYNI0I3zX54WlBHGMpb%2BL36QgtFKx9lqcyiRWBwFMY68I87nG0KUbGi4BmlOlUrYy24Dam%2FOvPJNlCzTYnX27siGYTWCpq1ZEJefG8aOrdJ%2FaF1WXWrWd55wooFbsX8NHE7BPW8q8RDkbyCN2PQmI7kAYY4Lf%2BJTgH3ZNGuSAHilpCrjg9avpIj254BZOeWc35FQByyH8X4lOkr58zLByLifFfbi05qBT%2Fh9NF5pkvOrVn0zmzhbPWYdu07%2BVnVsdi39bloa68IDOklgQWa%2Bb0h0DUEg1YkVt1pl%2FU4%2BJnHJVekTAOv%2B%2BWhviQ2YbTTLr5J%2FEXeqnlvBkSTrPi4Jcnpi41gUCQ8nsLZFWJ%2FNwapMwBC8Yw%2F%2FE0GD%2BelMNuvu9AGOqUBIaZQDGyprV%2F5YfXluWdZCt4LjImBOoymM8UoxFr3%2BTehiPkywGndp7erg3tsZimS%2Bwx5f6PCoqfSjHK%2FtCcBMVuBc7xgHKhZends4Crn0aNgnnPdyhk9hScf4gB9mHbC2XRR2kFhiW%2Fvv23Clc93lUbXadAKU%2F%2B756BlIFmpUpZ2Uynzt5UGa0qpzsIupkwKPVG1saB9D2Oyg9p2xYn%2BOLTjiHqp&X-Amz-Signature=e7aef87c5713c4f6dd5511529ed6d19bb84f719955f286c6a1b0dd6360d5898a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662DX53TOO%2F20260521%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260521T112307Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDoaCXVzLXdlc3QtMiJGMEQCIHj%2BAfaRkn8XhRegcmBqhYjABu5KHIvJkE1XaTwS6l%2BCAiB4O7aqHsw0WrU0W30Rtt4nx%2FDhYzpO1ZIjISFdsyzQQCr%2FAwgDEAAaDDYzNzQyMzE4MzgwNSIMusJlVmgIflAaIMupKtwDoSERrM8u8JwVoo1UTYHKy4sSbWCdNGAVf243mTrfRjEqbB7XyM4DUANEWOyPOufzx0G3fnvNf8a56FoQExHCIYXaQz2i43lVBp1X2za%2ByeDKQavcy%2BB2pZBYBxMQzT9GuoEf%2B3PhIYGJR7mD7YtJrvlVFY42SL6Q%2BWUM5s8rA4ZiKTnMRZ5vXpkAaPw0BFRraCvGuWNbuaDpX%2BPfel4xsbnMN%2FNGUpTW8P8Eq%2FUTk2lcylrdtd2dbTwcCfwcB3ILe6ydSz7FSXC6VQY0zMjdtFIBF2a9dVfwD%2B9gmrW22K7gfsVsjt8hF9YfytvTAEWYBq%2FQlIJ8N3%2B08NMkZuFTMv8gqvYySNiBH6HV6psAVDBNu6gFaeGnNo402eeYWmGsC6%2BRnQhKYrt5FoplYv6oFhOprx21xV69OrVdtuQRnZCyfr3jJ8CaBAPqanCdlaTatwoEdCN20ooKpM66Yy5XZ5C%2B2dXWlArNnczY6Q0QDvaNcTw6IdXckttAsBzXhoaVbZHL1fbcptu5J1gINhg4TZDzBHN%2Fjjd%2BvEh5s5UAJe1k6PRC4eNZH3Jir7LmHR5qGXoNYMHd%2FcFdkmxI%2FKTkTbhvEd48uxRzez%2F2e2J8vi8yxY9PqCwc7hhlJSIw5rS70AY6pgEsbQ4fdjLIn1Z%2B2OQV8CGHnM3E3dSMA6y3o2cWDO%2B9BdKXSLmTLNuq1xA2q4OcB%2BH0bGQwkJaGpcMFTRHJsD01oTo5mqbup6nAm6wXjunVTkWEj7F0%2FtJjNxoCgipkAMj0e%2FkeB8Peh2nNskfOpOsQLebAadJSGoFxRr1cffczKMNPO%2BuP4eNMo3Y65570f%2F949ezkDWDn2F%2B07LjCvXWRSYd7t%2FxO&X-Amz-Signature=ccf1ea1033f181f8fd626ef4832b1e1c9f1c87323e00d0b5377573aacdb4da40&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VDZWZIHV%2F20260521%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260521T112307Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDoaCXVzLXdlc3QtMiJGMEQCIDRzJ8ZG2TOAbPi1wKUj7KlW2honOywF9h2S29xr8ps1AiBfyDZNqZCIAcPBiCJDqSNcrvIaDQmfhcyw1yBO%2F3xtTCr%2FAwgDEAAaDDYzNzQyMzE4MzgwNSIMUIdgHzkqR%2F54NxNDKtwDVmLF1paAYhGohWHVzIk6%2FsVjSTbxRhIqBWA%2BW57yEMmcJx5G4vbDFfisdEsHG1pN%2FB6sT7HYTfYABU20AhKLTFI60Fcx%2F%2Fs1b77BVQBZCHp22d4EheRXca3tmgaKU%2BwYxNNVUzETFSAu3sVoJvVuAZi9ZkFtFRYSKsdDLU4xiSch%2BjNTHPExLZInpAKKu37dw5dH8479P71ohsnfGSyWU%2Bm0qtW%2B5QBSRMpyEwHmFHMQbZkRUZ1FPw6loeDWBlD6dQHsHvxtuD8kQwJZYW0LPPbQkadEFGOoqqJnPpXg91Fy8J9LeMvHZVsUBnJODUuJ13E7UrG%2Fq05ouPMk2Qvwp0oFZ2E3BIMYOdVDoT2gLhEF%2FrJx8a2Lp4KWwLcAmrXnF%2F3jhliMbQ%2BN6Jx9IoRZajhvoJymidSAGc9E5SztsQrTryqLaK%2BVVQi4Bv9eH%2B17KkQnjRsbuNVF4K2BV1G%2FxxAoMzdTJ5mEsnEP9XnKfE0haKgg6LxYLcMlZmm15xFMHSQChPYdcphcWUEv2kPHOjWQ5u6og9dmWefk%2Fjj0SlYxihyWKysR44oWvLapFUeOp%2FeT5QaoloHSJwJ%2B33BHx3SNVaLVct53Hz4taXPd1fjewoCzSbeMCtrK9WIw5K270AY6pgFh7XJDtp%2BAmhIWNQX9Ec5XFnslLX536tWGiUmZHwk6EmnUC7xuxXc7DOX2SXexowM1fAu9fANde3s5WsKJ8MczHnv8Nzd0NlfAtzqfUP1Z%2FH4aCK4%2BnNqESclVS3caJwZS7jfB26wUheopfpcNEVLU0ofWFZpD%2BoZVKXX6jfG8UaZ8Hl%2B8HrnpayI1RBWet%2FUojzEpf7rei2UarvHKo1NtCiBsHftp&X-Amz-Signature=5af5029b3dab38cc6d803645ebe436d940aa9892b638b42729d92c1a18c7c523&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VDZWZIHV%2F20260521%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260521T112307Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDoaCXVzLXdlc3QtMiJGMEQCIDRzJ8ZG2TOAbPi1wKUj7KlW2honOywF9h2S29xr8ps1AiBfyDZNqZCIAcPBiCJDqSNcrvIaDQmfhcyw1yBO%2F3xtTCr%2FAwgDEAAaDDYzNzQyMzE4MzgwNSIMUIdgHzkqR%2F54NxNDKtwDVmLF1paAYhGohWHVzIk6%2FsVjSTbxRhIqBWA%2BW57yEMmcJx5G4vbDFfisdEsHG1pN%2FB6sT7HYTfYABU20AhKLTFI60Fcx%2F%2Fs1b77BVQBZCHp22d4EheRXca3tmgaKU%2BwYxNNVUzETFSAu3sVoJvVuAZi9ZkFtFRYSKsdDLU4xiSch%2BjNTHPExLZInpAKKu37dw5dH8479P71ohsnfGSyWU%2Bm0qtW%2B5QBSRMpyEwHmFHMQbZkRUZ1FPw6loeDWBlD6dQHsHvxtuD8kQwJZYW0LPPbQkadEFGOoqqJnPpXg91Fy8J9LeMvHZVsUBnJODUuJ13E7UrG%2Fq05ouPMk2Qvwp0oFZ2E3BIMYOdVDoT2gLhEF%2FrJx8a2Lp4KWwLcAmrXnF%2F3jhliMbQ%2BN6Jx9IoRZajhvoJymidSAGc9E5SztsQrTryqLaK%2BVVQi4Bv9eH%2B17KkQnjRsbuNVF4K2BV1G%2FxxAoMzdTJ5mEsnEP9XnKfE0haKgg6LxYLcMlZmm15xFMHSQChPYdcphcWUEv2kPHOjWQ5u6og9dmWefk%2Fjj0SlYxihyWKysR44oWvLapFUeOp%2FeT5QaoloHSJwJ%2B33BHx3SNVaLVct53Hz4taXPd1fjewoCzSbeMCtrK9WIw5K270AY6pgFh7XJDtp%2BAmhIWNQX9Ec5XFnslLX536tWGiUmZHwk6EmnUC7xuxXc7DOX2SXexowM1fAu9fANde3s5WsKJ8MczHnv8Nzd0NlfAtzqfUP1Z%2FH4aCK4%2BnNqESclVS3caJwZS7jfB26wUheopfpcNEVLU0ofWFZpD%2BoZVKXX6jfG8UaZ8Hl%2B8HrnpayI1RBWet%2FUojzEpf7rei2UarvHKo1NtCiBsHftp&X-Amz-Signature=44956e7dfd69d5c70a34c617f861d8a11fb2570a479098a2497e9b5f9c334311&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Equal Sum Partition](https://leetcode.com/problems/partition-equal-subset-sum/description/) - Given an array, return true if it can be divided into two subsets with equal sum?</summary>
- For equal sum equation becomes 2s = S where S is the target sum. s = S/2. If there is a subset equal to S/2 then the array can be divided into two subsets of equal sum. Same as Subset Sum Problem.

</details>

<details>
<summary>[Perfect Sum Problem](https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1) - Given an array, return the number of subsets with sum equal to target S</summary>
- When we needed to max profit we did max (include, exclude)
- When we needed to find if a subset exists, we did OR (include, exclude)
- To find the count we would do SUM(include, exclude) results and we return 1 whenever we find a subset so that all the 1s count.

</details>

<details>
<summary>[Minimum Subset Sum Difference](https://www.geeksforgeeks.org/problems/minimum-sum-partition3317/1) - Given an array, return the minimum possible difference between two subset sums</summary>
- We need to minimise abs(s1-s2) where s1 & s2 are two valid subset sums. s1+s2 = total sum of array
- Min abs(s1-s2) can be 0. Start from there.

</details>

<details>
<summary>WHAT TO DO WHEN WE HAVE 0s in the subset? How does the Base Condition change then?</summary>

With 0s or duplicates, specially when counting subsets, we need to account for all possible options. Example for a sum 0 the possible subsets can be not only a { } but also {0}, {0,0} 
Meaning we cannot just return from a branch when we see sum==0, go down till n==0 also and return 1 for that. 


```c++
if(n==0) return sum==0?1:0;
```


</details>

<details>
<summary>[Partitions with Given Difference](https://www.geeksforgeeks.org/problems/partitions-with-given-difference/1) - Given array, partition it into s1, s2 such that diff between them is d. Count number of such subsets.</summary>

s1+s2 = S (total Sum)
s1-s2 = d
2s1 = S + d         therefore we need count of s1s which equals (S+d)/2


</details>


### Resources

- [https://www.youtube.com/watch?v=nqowUJzG-iM&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go](https://www.youtube.com/watch?v=nqowUJzG-iM&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go)

### Notes (use sparingly!)

- Start with Recursive solution which is Base Condition + Choice Diagram (include/exclude)
- For Top-Down start with initialising matrix with base condition
- Convert the recursive hypothesis into a formula to fill up the remaining matrix
