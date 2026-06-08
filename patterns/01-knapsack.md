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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QZZHBRMC%2F20260608%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260608T122707Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAqpI2W5pTvpt1xLPvwulLBMwXZuEBMS6EtJSoeO45SkAiAlv8t%2BIrXHMvl%2F5PIUvkLZak1UZVaIuIc0J0mtEmqPICqIBAi1%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMCewVi2znF7719J2fKtwDSa%2Fdnsnr1KIrAcJ65ft9eTauKk3wGw6zoqAvyB8xwMmMbmXXoNZW1wuXxwbEQcIoZf0oO6fvWDwXzPEiSYI7s5eTxEDNIZTbN76%2BhjYTjCjh%2F13FMWc1yCq1Wo4U9agv1azzOM%2Bz6zyRXUukz2%2FIs2lfMl5uqXLML9VgYjOiThub64MYOv%2F4idCqfHIFM7GT83N0rigZIM7in%2BIiDlEM3guog1dWnX5zuPfRrbqD4Yh3FuX%2BFJ7eCMzqohp8DuJYP2MGWhTpMh2corA22rTIc8YgPqOggr1UTVbNdqSWOmMad%2FoosAjkptS6cC09PkCvEljwCt3dNxFTLxGbu5lvV2u9lEAVp2PbRCsaoyzmbumcN8n6jeHijMmahrkDXYyXWROoBWKimmKv%2BLmm0GQ8X9Lt4pbpqiAAgp5vQ%2B9QiZp0uGPrI0IRn6Df3BE3HjSKnqb6uq1Rpdlo%2BT2Ks%2BRkRbPtAFgdkv2jWPE7tUE%2BO0gC%2FK9x3hRaF2Ydgm76qiveXUpJFm34yiCIGxbQbM55%2FWrPk10IjV8i07l2%2BXie%2FJNSlyoHwPdJTlx4CzD8fDD7i59sB3DX2MiF7cMAp3VuaFqlu7SpcRtLo3TsD0wqYVr4FfuK8UJhm1ONQwcwwtaa0QY6pgET3IGbG%2Fo8fbCFavfJceKINwXTLARk4PI4NSDtaPTNO5lyaojv%2B0GmKEy1NqVToGg7hLSeIvaDePPAfddvVaI%2Fxx%2BXCd2h%2FcGdhr80kZc0cHCwG7VBG%2B%2BUsi2q62fsj3lBtEahD9b%2BGZFXdbSEgZpNFRDicF1GPUnhOOBt6Io1GInz3t9ql3%2Fyt%2FHt2J0MzC3%2FUy6lMjQbDv9ZsyfPA%2FZK%2Bji3cvl5&X-Amz-Signature=23fde651d118857abc3d32e75157e1d8b525fc9f540ef7eee924d02c4ea00ca4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QZZHBRMC%2F20260608%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260608T122707Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAqpI2W5pTvpt1xLPvwulLBMwXZuEBMS6EtJSoeO45SkAiAlv8t%2BIrXHMvl%2F5PIUvkLZak1UZVaIuIc0J0mtEmqPICqIBAi1%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMCewVi2znF7719J2fKtwDSa%2Fdnsnr1KIrAcJ65ft9eTauKk3wGw6zoqAvyB8xwMmMbmXXoNZW1wuXxwbEQcIoZf0oO6fvWDwXzPEiSYI7s5eTxEDNIZTbN76%2BhjYTjCjh%2F13FMWc1yCq1Wo4U9agv1azzOM%2Bz6zyRXUukz2%2FIs2lfMl5uqXLML9VgYjOiThub64MYOv%2F4idCqfHIFM7GT83N0rigZIM7in%2BIiDlEM3guog1dWnX5zuPfRrbqD4Yh3FuX%2BFJ7eCMzqohp8DuJYP2MGWhTpMh2corA22rTIc8YgPqOggr1UTVbNdqSWOmMad%2FoosAjkptS6cC09PkCvEljwCt3dNxFTLxGbu5lvV2u9lEAVp2PbRCsaoyzmbumcN8n6jeHijMmahrkDXYyXWROoBWKimmKv%2BLmm0GQ8X9Lt4pbpqiAAgp5vQ%2B9QiZp0uGPrI0IRn6Df3BE3HjSKnqb6uq1Rpdlo%2BT2Ks%2BRkRbPtAFgdkv2jWPE7tUE%2BO0gC%2FK9x3hRaF2Ydgm76qiveXUpJFm34yiCIGxbQbM55%2FWrPk10IjV8i07l2%2BXie%2FJNSlyoHwPdJTlx4CzD8fDD7i59sB3DX2MiF7cMAp3VuaFqlu7SpcRtLo3TsD0wqYVr4FfuK8UJhm1ONQwcwwtaa0QY6pgET3IGbG%2Fo8fbCFavfJceKINwXTLARk4PI4NSDtaPTNO5lyaojv%2B0GmKEy1NqVToGg7hLSeIvaDePPAfddvVaI%2Fxx%2BXCd2h%2FcGdhr80kZc0cHCwG7VBG%2B%2BUsi2q62fsj3lBtEahD9b%2BGZFXdbSEgZpNFRDicF1GPUnhOOBt6Io1GInz3t9ql3%2Fyt%2FHt2J0MzC3%2FUy6lMjQbDv9ZsyfPA%2FZK%2Bji3cvl5&X-Amz-Signature=6e568132cdf65e77e620f0434e45090eabec74a01079082b9ed70d19ad4193fa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QZZHBRMC%2F20260608%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260608T122707Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAqpI2W5pTvpt1xLPvwulLBMwXZuEBMS6EtJSoeO45SkAiAlv8t%2BIrXHMvl%2F5PIUvkLZak1UZVaIuIc0J0mtEmqPICqIBAi1%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMCewVi2znF7719J2fKtwDSa%2Fdnsnr1KIrAcJ65ft9eTauKk3wGw6zoqAvyB8xwMmMbmXXoNZW1wuXxwbEQcIoZf0oO6fvWDwXzPEiSYI7s5eTxEDNIZTbN76%2BhjYTjCjh%2F13FMWc1yCq1Wo4U9agv1azzOM%2Bz6zyRXUukz2%2FIs2lfMl5uqXLML9VgYjOiThub64MYOv%2F4idCqfHIFM7GT83N0rigZIM7in%2BIiDlEM3guog1dWnX5zuPfRrbqD4Yh3FuX%2BFJ7eCMzqohp8DuJYP2MGWhTpMh2corA22rTIc8YgPqOggr1UTVbNdqSWOmMad%2FoosAjkptS6cC09PkCvEljwCt3dNxFTLxGbu5lvV2u9lEAVp2PbRCsaoyzmbumcN8n6jeHijMmahrkDXYyXWROoBWKimmKv%2BLmm0GQ8X9Lt4pbpqiAAgp5vQ%2B9QiZp0uGPrI0IRn6Df3BE3HjSKnqb6uq1Rpdlo%2BT2Ks%2BRkRbPtAFgdkv2jWPE7tUE%2BO0gC%2FK9x3hRaF2Ydgm76qiveXUpJFm34yiCIGxbQbM55%2FWrPk10IjV8i07l2%2BXie%2FJNSlyoHwPdJTlx4CzD8fDD7i59sB3DX2MiF7cMAp3VuaFqlu7SpcRtLo3TsD0wqYVr4FfuK8UJhm1ONQwcwwtaa0QY6pgET3IGbG%2Fo8fbCFavfJceKINwXTLARk4PI4NSDtaPTNO5lyaojv%2B0GmKEy1NqVToGg7hLSeIvaDePPAfddvVaI%2Fxx%2BXCd2h%2FcGdhr80kZc0cHCwG7VBG%2B%2BUsi2q62fsj3lBtEahD9b%2BGZFXdbSEgZpNFRDicF1GPUnhOOBt6Io1GInz3t9ql3%2Fyt%2FHt2J0MzC3%2FUy6lMjQbDv9ZsyfPA%2FZK%2Bji3cvl5&X-Amz-Signature=ea5d432db33ffaaadb1774e74300bb3463e5a7e2f32f4674ce20ec739b8526ab&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46643O25L6G%2F20260608%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260608T122708Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC3EtavW2WhLPI1GP5mrEvzOZ73c2d21WAnT5twfCvzegIgczmNYpmZikqvAArgmPUn0%2FXGKuDrKK4X2euS5KAdBGMqiAQItf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGsp%2FpI0O%2FMweCGLfircA3wytZs2H7DhpCqSkHd7%2F8lYZtiI5AWz8eYzyEtN5vlpSIoA6OLQxSuOWIP4QLhfqwb8nNoAGstRc5bIheT6dEktV0eCd2BpeEFdtqZ%2Fr%2FGit3%2B6bQBSrivUxUaJbR7WfHemE2eIvPOeX%2F2mpKLKu0GjH9cz1CwvgJPP0OQaxXcJwSffZN0DybT2D5N7mQkeGGwFi3akuGNk6UB0ZqRzYSCvSblCBPA797uaFGNmVEOv%2Fa5GlZ94JqgP4oBir%2FebNRXQCRg5hZmvrKECZFmEMTOqMfR6ksXGJZS64TuSnnbMWtfclMKDumeV8KyFYFEvbchc5xOW6vS2xgMyvU0W9ouofZNEx6KTPU3FOpAK%2B5OUDibuQaPliFqXnKnJUCOaXsw%2FHeTW%2FthZkFzhrin%2BqMmZd3sIigqT9VZiveoAzm9LZO%2BpBfXO4MowJv3QhCPGcUWyCby05E6qVb%2BbqITBGpmxd7sBQp5Hri4EOrkIgZkMq2gOBMUujWjDPM5mIjZ2%2BqeRhAERamGme2xOZeLGYjYIm6AHTzyOMNcWNy1uRm4bNKRft9E5C4lXYBA14mHZc%2BBQk%2FPiDkZVyz3O9nLR1MMstC8Fl%2BOiIoFHOogg%2FVg5v3%2F45KtT1qwyhXc7MM7WmtEGOqUBY9AZJcC5zYAxSr9gQaWmGMbJVp%2Fb1dccO%2FYTmR3yWqPvpbF6Z2b3a1mSpYf0YzkPQLyAaBbPEcw8NFU0hh4N7OPgy3XQo9U448z6OXerzc%2FVLATyLM5CeERvRbcwOM2AYQG1fVLyeZyFl3CJ8J%2B4AEPGIvl3Zb9ZGK8YfHlBqW11fPKp3is211ft94%2Bpla7rULVyWMOrCFV7ailEWsC%2BilYKr3SQ&X-Amz-Signature=76be4eb1adda68599869f6d47b3e83410b63fb8de7b7427a0905a28f30bafd6a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46643O25L6G%2F20260608%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260608T122708Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC3EtavW2WhLPI1GP5mrEvzOZ73c2d21WAnT5twfCvzegIgczmNYpmZikqvAArgmPUn0%2FXGKuDrKK4X2euS5KAdBGMqiAQItf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGsp%2FpI0O%2FMweCGLfircA3wytZs2H7DhpCqSkHd7%2F8lYZtiI5AWz8eYzyEtN5vlpSIoA6OLQxSuOWIP4QLhfqwb8nNoAGstRc5bIheT6dEktV0eCd2BpeEFdtqZ%2Fr%2FGit3%2B6bQBSrivUxUaJbR7WfHemE2eIvPOeX%2F2mpKLKu0GjH9cz1CwvgJPP0OQaxXcJwSffZN0DybT2D5N7mQkeGGwFi3akuGNk6UB0ZqRzYSCvSblCBPA797uaFGNmVEOv%2Fa5GlZ94JqgP4oBir%2FebNRXQCRg5hZmvrKECZFmEMTOqMfR6ksXGJZS64TuSnnbMWtfclMKDumeV8KyFYFEvbchc5xOW6vS2xgMyvU0W9ouofZNEx6KTPU3FOpAK%2B5OUDibuQaPliFqXnKnJUCOaXsw%2FHeTW%2FthZkFzhrin%2BqMmZd3sIigqT9VZiveoAzm9LZO%2BpBfXO4MowJv3QhCPGcUWyCby05E6qVb%2BbqITBGpmxd7sBQp5Hri4EOrkIgZkMq2gOBMUujWjDPM5mIjZ2%2BqeRhAERamGme2xOZeLGYjYIm6AHTzyOMNcWNy1uRm4bNKRft9E5C4lXYBA14mHZc%2BBQk%2FPiDkZVyz3O9nLR1MMstC8Fl%2BOiIoFHOogg%2FVg5v3%2F45KtT1qwyhXc7MM7WmtEGOqUBY9AZJcC5zYAxSr9gQaWmGMbJVp%2Fb1dccO%2FYTmR3yWqPvpbF6Z2b3a1mSpYf0YzkPQLyAaBbPEcw8NFU0hh4N7OPgy3XQo9U448z6OXerzc%2FVLATyLM5CeERvRbcwOM2AYQG1fVLyeZyFl3CJ8J%2B4AEPGIvl3Zb9ZGK8YfHlBqW11fPKp3is211ft94%2Bpla7rULVyWMOrCFV7ailEWsC%2BilYKr3SQ&X-Amz-Signature=d1125d166de7bbd9524096c8155794fec5d8592657d20cb4d307d60facbfc402&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46643O25L6G%2F20260608%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260608T122708Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC3EtavW2WhLPI1GP5mrEvzOZ73c2d21WAnT5twfCvzegIgczmNYpmZikqvAArgmPUn0%2FXGKuDrKK4X2euS5KAdBGMqiAQItf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGsp%2FpI0O%2FMweCGLfircA3wytZs2H7DhpCqSkHd7%2F8lYZtiI5AWz8eYzyEtN5vlpSIoA6OLQxSuOWIP4QLhfqwb8nNoAGstRc5bIheT6dEktV0eCd2BpeEFdtqZ%2Fr%2FGit3%2B6bQBSrivUxUaJbR7WfHemE2eIvPOeX%2F2mpKLKu0GjH9cz1CwvgJPP0OQaxXcJwSffZN0DybT2D5N7mQkeGGwFi3akuGNk6UB0ZqRzYSCvSblCBPA797uaFGNmVEOv%2Fa5GlZ94JqgP4oBir%2FebNRXQCRg5hZmvrKECZFmEMTOqMfR6ksXGJZS64TuSnnbMWtfclMKDumeV8KyFYFEvbchc5xOW6vS2xgMyvU0W9ouofZNEx6KTPU3FOpAK%2B5OUDibuQaPliFqXnKnJUCOaXsw%2FHeTW%2FthZkFzhrin%2BqMmZd3sIigqT9VZiveoAzm9LZO%2BpBfXO4MowJv3QhCPGcUWyCby05E6qVb%2BbqITBGpmxd7sBQp5Hri4EOrkIgZkMq2gOBMUujWjDPM5mIjZ2%2BqeRhAERamGme2xOZeLGYjYIm6AHTzyOMNcWNy1uRm4bNKRft9E5C4lXYBA14mHZc%2BBQk%2FPiDkZVyz3O9nLR1MMstC8Fl%2BOiIoFHOogg%2FVg5v3%2F45KtT1qwyhXc7MM7WmtEGOqUBY9AZJcC5zYAxSr9gQaWmGMbJVp%2Fb1dccO%2FYTmR3yWqPvpbF6Z2b3a1mSpYf0YzkPQLyAaBbPEcw8NFU0hh4N7OPgy3XQo9U448z6OXerzc%2FVLATyLM5CeERvRbcwOM2AYQG1fVLyeZyFl3CJ8J%2B4AEPGIvl3Zb9ZGK8YfHlBqW11fPKp3is211ft94%2Bpla7rULVyWMOrCFV7ailEWsC%2BilYKr3SQ&X-Amz-Signature=84d89fbd84daf880cae0852c4fee87f3e553aed42fb01df57b51c1d07da1601c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46643O25L6G%2F20260608%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260608T122708Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC3EtavW2WhLPI1GP5mrEvzOZ73c2d21WAnT5twfCvzegIgczmNYpmZikqvAArgmPUn0%2FXGKuDrKK4X2euS5KAdBGMqiAQItf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGsp%2FpI0O%2FMweCGLfircA3wytZs2H7DhpCqSkHd7%2F8lYZtiI5AWz8eYzyEtN5vlpSIoA6OLQxSuOWIP4QLhfqwb8nNoAGstRc5bIheT6dEktV0eCd2BpeEFdtqZ%2Fr%2FGit3%2B6bQBSrivUxUaJbR7WfHemE2eIvPOeX%2F2mpKLKu0GjH9cz1CwvgJPP0OQaxXcJwSffZN0DybT2D5N7mQkeGGwFi3akuGNk6UB0ZqRzYSCvSblCBPA797uaFGNmVEOv%2Fa5GlZ94JqgP4oBir%2FebNRXQCRg5hZmvrKECZFmEMTOqMfR6ksXGJZS64TuSnnbMWtfclMKDumeV8KyFYFEvbchc5xOW6vS2xgMyvU0W9ouofZNEx6KTPU3FOpAK%2B5OUDibuQaPliFqXnKnJUCOaXsw%2FHeTW%2FthZkFzhrin%2BqMmZd3sIigqT9VZiveoAzm9LZO%2BpBfXO4MowJv3QhCPGcUWyCby05E6qVb%2BbqITBGpmxd7sBQp5Hri4EOrkIgZkMq2gOBMUujWjDPM5mIjZ2%2BqeRhAERamGme2xOZeLGYjYIm6AHTzyOMNcWNy1uRm4bNKRft9E5C4lXYBA14mHZc%2BBQk%2FPiDkZVyz3O9nLR1MMstC8Fl%2BOiIoFHOogg%2FVg5v3%2F45KtT1qwyhXc7MM7WmtEGOqUBY9AZJcC5zYAxSr9gQaWmGMbJVp%2Fb1dccO%2FYTmR3yWqPvpbF6Z2b3a1mSpYf0YzkPQLyAaBbPEcw8NFU0hh4N7OPgy3XQo9U448z6OXerzc%2FVLATyLM5CeERvRbcwOM2AYQG1fVLyeZyFl3CJ8J%2B4AEPGIvl3Zb9ZGK8YfHlBqW11fPKp3is211ft94%2Bpla7rULVyWMOrCFV7ailEWsC%2BilYKr3SQ&X-Amz-Signature=d56905000b4b842c2ed8279f2b5f4acaf53b3c62adfc81045bcea8f598ef1e52&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UBPQEZBF%2F20260608%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260608T122709Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDKmZuH1dXQYN7NhFr18gkWgBWZOYWQFNELCAzgN7HiUAIgC7BGJCLzA90S5YRG%2BJ5FQUBqn6yAGssrjLnmMMI48q8qiAQItf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJfrPU1YpOLkcrALkircA3FmYwXdtrkJvxUcpIjMspK%2F%2B1kgQvnr3K9sRYci0KxrJUVJXDv%2FDSwcEVNQYLEP5qXreT36LptynYWRPxCCjlKRCepT%2Bl1vkqe5HquuzuGfrHAKRNQfR66GI5eLDxsnS%2BYUf52ZhSUlzFrmBrp4xxGbv9ASyEQycagzG3jWZg9LeRTVamGSqr4GLHqz8fRtQ1qqibF7rStDuK60WxWl6FD8DayrRL%2FKVZMx%2BHXxDjSYa4h733IHRHETwnzNxGv70gUa6dccF6J%2BbjfjImAV8j8o%2BhGLwsmQV20VFHum7raqEhOyv9YB0Rag1I2P3UN85V9PH9lZfCm1KwPMWhVmSV3A7twEAYz8rEqQ64CQY8T%2Fk6t8UTfomZ9EDRNU8ptv80NK6F1IcDdSmW0fWCBXUbYqPJSIF2jKghwVkjRsq6l6kpN7%2FCodYInCj2EcyOYZV8FpGAgk6AzfZwxLiK3O5if1STompulLiz4sbIBG703Yh4aywCLe5asKEH2pUB1ZmKpf9lC%2BSA8ouE41hkbBUfDDnYBVNoqkNPRwUTfxzaP9ChyH7OsdB4UNiUKVB0BSrOPPKXoitxxxZ2jko2zgK%2Bcl5n8orwd6%2FlfI0t3NhfNxl%2BjYBf5xN3iG6f0kMP7UmtEGOqUBn%2BlIAdqdEEQPBTV0zvI21%2FJPUKrBfzOvHlFtIjfPvUzILJt88WI1OoF9eGz2o3gynJLnbTEKz3bltMmj%2BbuAt%2F0YP8ZgKJYaDi2cghy77p23uRth42S2WaTNttcoUudkjYuyLPz9C345MYXCvxOfnoRml6U0McpSAAgJAbI37fMhL%2BFlg0ecjF35fLXjZ9H4yrrHP2BqjnEj%2FyYTYsJOYnwVGTfj&X-Amz-Signature=1663a18663fe8bae922f7550629151d4c2f5afb0514910b4d56be766830ca8d6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XTLSKVJN%2F20260608%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260608T122709Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDbOkFOSGyePPBJ50VL0qrRbJVZUSztCFAkbTph0o%2FgvAIhALkFv9cFK%2BHfZ1Ow6YRHWfh3m5aUMp5gkLS%2BQhjYZ0m4KogECLX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxS5jGUjvnGqyN6kfwq3AP1xaMEAKak8QV9qDi0GJyW2X5J4nTv1bkXp66gF1uTNxP0NcOCxN%2FZSnh%2FBFtzRLJwTMWJwY%2BddKEQFDdx0OMT7MXtlneK8wxY38ary2LxmQiUA%2BKlH%2B3Fxi7x8v4YX%2BRl2Eohghdkbb0i3gBqs2Tl3k27x0s8t8Q5sDKypw3cO8fVkvOuIkeTplv4C1PpHB5NjO4oRMCiTO1B08mH%2FapY1pwQb8c1VvqBPvWRA6Y3Tx1W0OFkYJ81c6Rhhb6%2BLnJdWCMQVY0gp81CHGHhPvFnAptClOWDO4MX4KhzIr%2BeTujR38Dg7LFdKwwsgS9ePJBRKKLeqP50lOrnzeFgfnU8XG8AKM1shTC3j60xFOwFrDj79acMkHZdUlQXYDSx8nXnSpqeJYSZTL0D%2FXXeCJaq4jF2zn8nHt7PbrQiAh48jpxIon543gXF8mly85DCojybpELiIfpe4ZikVDkQl3dDVNjgg0%2FROuh8gFKhG2wFySAYP%2BnjXKUuusHMHancv7NrY2qT9NrdCkU%2BA7m0Id63cvCx0PbFsLtXRzq5FzHMxorE2mK3%2FY4D7XkPiTraTH%2BZBJZ164L1Pp81GHU6dQ9EwGs7wfAg7FKClsk9NHF1Tu4zjF6mFSJGmxed3zD11JrRBjqkAbemkOVvrNm6R024JdLO%2BPUrzjqdcGbvV93eA%2BZQSvfl1gq7Pg3aP%2F8MOjIYepaJFMovM0d6HsLtjktS3h6AmFHwFkj%2Fa2TtwoJ5%2BIDMNs6bikTL6m8IniMeOhG8q3qS2K6%2BlHrvgz%2BMuRk5JupePou1UsDYEE6pGntQD9rjUbj%2F08yCzNp95PC6cPLSiSkotUXGl8THWsBgB26mXX0eApAnqwo6&X-Amz-Signature=befa48ebdf3085ffd0f7b549dfade83ed1a30ce3e31ac4e951c68e2b1b02539c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XTLSKVJN%2F20260608%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260608T122709Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDbOkFOSGyePPBJ50VL0qrRbJVZUSztCFAkbTph0o%2FgvAIhALkFv9cFK%2BHfZ1Ow6YRHWfh3m5aUMp5gkLS%2BQhjYZ0m4KogECLX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxS5jGUjvnGqyN6kfwq3AP1xaMEAKak8QV9qDi0GJyW2X5J4nTv1bkXp66gF1uTNxP0NcOCxN%2FZSnh%2FBFtzRLJwTMWJwY%2BddKEQFDdx0OMT7MXtlneK8wxY38ary2LxmQiUA%2BKlH%2B3Fxi7x8v4YX%2BRl2Eohghdkbb0i3gBqs2Tl3k27x0s8t8Q5sDKypw3cO8fVkvOuIkeTplv4C1PpHB5NjO4oRMCiTO1B08mH%2FapY1pwQb8c1VvqBPvWRA6Y3Tx1W0OFkYJ81c6Rhhb6%2BLnJdWCMQVY0gp81CHGHhPvFnAptClOWDO4MX4KhzIr%2BeTujR38Dg7LFdKwwsgS9ePJBRKKLeqP50lOrnzeFgfnU8XG8AKM1shTC3j60xFOwFrDj79acMkHZdUlQXYDSx8nXnSpqeJYSZTL0D%2FXXeCJaq4jF2zn8nHt7PbrQiAh48jpxIon543gXF8mly85DCojybpELiIfpe4ZikVDkQl3dDVNjgg0%2FROuh8gFKhG2wFySAYP%2BnjXKUuusHMHancv7NrY2qT9NrdCkU%2BA7m0Id63cvCx0PbFsLtXRzq5FzHMxorE2mK3%2FY4D7XkPiTraTH%2BZBJZ164L1Pp81GHU6dQ9EwGs7wfAg7FKClsk9NHF1Tu4zjF6mFSJGmxed3zD11JrRBjqkAbemkOVvrNm6R024JdLO%2BPUrzjqdcGbvV93eA%2BZQSvfl1gq7Pg3aP%2F8MOjIYepaJFMovM0d6HsLtjktS3h6AmFHwFkj%2Fa2TtwoJ5%2BIDMNs6bikTL6m8IniMeOhG8q3qS2K6%2BlHrvgz%2BMuRk5JupePou1UsDYEE6pGntQD9rjUbj%2F08yCzNp95PC6cPLSiSkotUXGl8THWsBgB26mXX0eApAnqwo6&X-Amz-Signature=d0271437d30eeacdf3e74355ce897b2a65922aabb0b2f2bdfaac8ec5c465fe2b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
