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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VQN7RPBE%2F20260406%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260406T090821Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJHMEUCIAF27Y1bdzPE9d4xTG%2BFpVuNFoapB8KNRk5moWv2vFg1AiEAnFa0mUgTKKamRtRG3LKvfoUBGkmw9TxDsUwv2kSI0L4qiAQIyv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJx%2F2UChEwN73eREeircAznAi9JlYEVhyerdl5Rfk53nmiT8GTElQaRLBdJgpUB50Leovv2qiLfSR0NUw2%2FJSfHWLy14pnvkjI059Fm1kkQ%2BNN84VzHqWfBngA1EoK8QSZby%2BL1JUSW0635A4wMI8cKLbeLbMLzbkQd12bwlaSAVQbTbr458VvU%2FRcb5COxoxcp%2F3Iwdh7TUsMFgE0G6%2B2qZYEtDhTA2dxmgBGZduEOvNtVNVRJ6O11NaQGKXthbVBuRyO%2FaGkshzBUPVcTwzJr5XtEXWIEze9HMIYpV%2Fk%2BF88BZzImrJesRRaXb9VEK3s5yTtOctDw7oMojdcACx2WKRy5LD6TgY1u73DpxMdhipMFlgPog4eeKgP00vFwtSZxzmKFxOgps9Kf4xvzJG%2BmwRgLRBinfknVr63sVeuUMKCIPzRcKqIWzTCzoaod9gWo3AXnUDIhc7edBihKGcJppxndRxMR8GJGiks%2F5gfloSStIgSCi16Q3KZwMwLKlMqqb6cZIWeJ2c9ZG8NqI57o%2FLmi6Ko8U8SUvgGg13fr2QunuH9at97iCzlF10afRKZtNE%2FmBoSLRqMAIwPfgPPcBX9gwVcKBvI%2BlJuEQtBATL%2BuJGS2SBFMXF689qLCFuIOSyA7HG%2BCnl0d0MMfizc4GOqUBFx6Xb21BzzQAl7Ji6XQwS%2FmCqNHJ5zT53fz%2Fbs1DXrWDCG%2BuML9RALwwsSjWureTqHLQYGv%2BxfLlRBcqGNDnekPX0S5dYA3Zq7FB%2FHVeQIcpIlABYsdSGh%2FxKJY%2Fy%2FfA%2F%2BS4oKF7peKauBoyoD1QnqNzMR38n1VEpSWl4iiAwIiaONvJEQMLsm7edhB3cvu6SpJ0mjqMqQS4eiL03Bg6IE%2BTLcEq&X-Amz-Signature=7c87569e36f0e1f8d624b1c6d0f804b0ec92064cd846c46c3fb7235ce7b53158&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VQN7RPBE%2F20260406%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260406T090821Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJHMEUCIAF27Y1bdzPE9d4xTG%2BFpVuNFoapB8KNRk5moWv2vFg1AiEAnFa0mUgTKKamRtRG3LKvfoUBGkmw9TxDsUwv2kSI0L4qiAQIyv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJx%2F2UChEwN73eREeircAznAi9JlYEVhyerdl5Rfk53nmiT8GTElQaRLBdJgpUB50Leovv2qiLfSR0NUw2%2FJSfHWLy14pnvkjI059Fm1kkQ%2BNN84VzHqWfBngA1EoK8QSZby%2BL1JUSW0635A4wMI8cKLbeLbMLzbkQd12bwlaSAVQbTbr458VvU%2FRcb5COxoxcp%2F3Iwdh7TUsMFgE0G6%2B2qZYEtDhTA2dxmgBGZduEOvNtVNVRJ6O11NaQGKXthbVBuRyO%2FaGkshzBUPVcTwzJr5XtEXWIEze9HMIYpV%2Fk%2BF88BZzImrJesRRaXb9VEK3s5yTtOctDw7oMojdcACx2WKRy5LD6TgY1u73DpxMdhipMFlgPog4eeKgP00vFwtSZxzmKFxOgps9Kf4xvzJG%2BmwRgLRBinfknVr63sVeuUMKCIPzRcKqIWzTCzoaod9gWo3AXnUDIhc7edBihKGcJppxndRxMR8GJGiks%2F5gfloSStIgSCi16Q3KZwMwLKlMqqb6cZIWeJ2c9ZG8NqI57o%2FLmi6Ko8U8SUvgGg13fr2QunuH9at97iCzlF10afRKZtNE%2FmBoSLRqMAIwPfgPPcBX9gwVcKBvI%2BlJuEQtBATL%2BuJGS2SBFMXF689qLCFuIOSyA7HG%2BCnl0d0MMfizc4GOqUBFx6Xb21BzzQAl7Ji6XQwS%2FmCqNHJ5zT53fz%2Fbs1DXrWDCG%2BuML9RALwwsSjWureTqHLQYGv%2BxfLlRBcqGNDnekPX0S5dYA3Zq7FB%2FHVeQIcpIlABYsdSGh%2FxKJY%2Fy%2FfA%2F%2BS4oKF7peKauBoyoD1QnqNzMR38n1VEpSWl4iiAwIiaONvJEQMLsm7edhB3cvu6SpJ0mjqMqQS4eiL03Bg6IE%2BTLcEq&X-Amz-Signature=35061d6b0a68504f7c1a8fd29f3eb1b8a797962bc7b4964dc5c79ad269ec582b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VQN7RPBE%2F20260406%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260406T090821Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJHMEUCIAF27Y1bdzPE9d4xTG%2BFpVuNFoapB8KNRk5moWv2vFg1AiEAnFa0mUgTKKamRtRG3LKvfoUBGkmw9TxDsUwv2kSI0L4qiAQIyv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJx%2F2UChEwN73eREeircAznAi9JlYEVhyerdl5Rfk53nmiT8GTElQaRLBdJgpUB50Leovv2qiLfSR0NUw2%2FJSfHWLy14pnvkjI059Fm1kkQ%2BNN84VzHqWfBngA1EoK8QSZby%2BL1JUSW0635A4wMI8cKLbeLbMLzbkQd12bwlaSAVQbTbr458VvU%2FRcb5COxoxcp%2F3Iwdh7TUsMFgE0G6%2B2qZYEtDhTA2dxmgBGZduEOvNtVNVRJ6O11NaQGKXthbVBuRyO%2FaGkshzBUPVcTwzJr5XtEXWIEze9HMIYpV%2Fk%2BF88BZzImrJesRRaXb9VEK3s5yTtOctDw7oMojdcACx2WKRy5LD6TgY1u73DpxMdhipMFlgPog4eeKgP00vFwtSZxzmKFxOgps9Kf4xvzJG%2BmwRgLRBinfknVr63sVeuUMKCIPzRcKqIWzTCzoaod9gWo3AXnUDIhc7edBihKGcJppxndRxMR8GJGiks%2F5gfloSStIgSCi16Q3KZwMwLKlMqqb6cZIWeJ2c9ZG8NqI57o%2FLmi6Ko8U8SUvgGg13fr2QunuH9at97iCzlF10afRKZtNE%2FmBoSLRqMAIwPfgPPcBX9gwVcKBvI%2BlJuEQtBATL%2BuJGS2SBFMXF689qLCFuIOSyA7HG%2BCnl0d0MMfizc4GOqUBFx6Xb21BzzQAl7Ji6XQwS%2FmCqNHJ5zT53fz%2Fbs1DXrWDCG%2BuML9RALwwsSjWureTqHLQYGv%2BxfLlRBcqGNDnekPX0S5dYA3Zq7FB%2FHVeQIcpIlABYsdSGh%2FxKJY%2Fy%2FfA%2F%2BS4oKF7peKauBoyoD1QnqNzMR38n1VEpSWl4iiAwIiaONvJEQMLsm7edhB3cvu6SpJ0mjqMqQS4eiL03Bg6IE%2BTLcEq&X-Amz-Signature=6776ce8eb0196c5bc37c5a95e62a1bcb6aa89fc9a4facf75e879aac84febb978&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W2V4OLWN%2F20260406%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260406T090822Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJGMEQCIA2m%2Fy7AU%2F%2F86x8RDYAT2TfRCsDZKfBr3d8WeX%2Bjn58bAiAVafSEgwYXlKy8GH9PlkqzLU4hDEf18NxAjJAHr9GxYSqIBAjK%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMX6OBr%2B7ZnthcrBLaKtwD7wFMYBFqu3CUwi%2Fswe%2BgYa4D6C2kUUuW8uuGY5lSiQtW12EACFcKuuKTLvlJUExzh8ZM3QgDXuBgJrsqECQ5AKLFgJpZy1qqITYBWPLPoPyJNsm0z76M4ZYXqCwWct8isbprJSIhfL9RnJTbkB%2B5txoBpnQsRRsOVLWfX4QZ%2BtYJ9tgRRyfwK5jIqSu2h%2BLvxlWJwo1Tah%2BQlhIkn0QwCpg4C3bu0k%2FRy8EqnI%2BjY2gzdjwoGkZNqKleUg2nYMumFu3SIcnnpDf3%2F12WRQzzWmWWFvK1zq24w%2FArNU1C4f611qMtDjhMJAamDbfP%2FzeDbhfXOLB2O76rDXnWz6nlmgXMuszGLGbTDet2s8%2FM254H0qUNjlw0hYIAv90Vduq2ykYmT7SFmh2IMJivbF9Sg%2BtIIVHZmz43q%2BOjUNOPLwdfUj4I2iMkzYyIGq0wjYNlUznShiDurlsAgtZaHDvCyvKvZ3fNBfJ2I%2BX9JKV3EpPeuPIGouIPbkCDG3mps%2FYfUoAh8%2FUQm%2B5V%2BVMy3WqOHlzB67psp%2BrhWGlzRL61extJMr%2FtlTNMCCbVD2B2urxBosYr5M51KiYLuD7Ftce12bBHCMwy2NUNXU7K8ksY6Cujn834uPYyag%2BQD9QwyOPNzgY6pgFTq51amDME%2FXeULbzk8Lbj6PX%2BgCJD%2F6r%2BnTB1xSYVVMILAk65RDGiC6vWMp3J7RbfdaYdS4YMA138ct%2FL983YnAxCWPtk%2BccVScvH%2BgPiwqQSgxrlpdv10yj1Fq0RpKVTG0M91ymkr2WtkaPeY9qmB%2F5OtwbvhLL45R2mWzwFSBlspGAAsXjyFs3ibCRctuefDA4kOllalQC8WBt5L%2Ba1XViLPDq2&X-Amz-Signature=a71f35b64c08b1697d678af6217bb92220822e366ff00f6fb4842e9fb42ba8a4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W2V4OLWN%2F20260406%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260406T090822Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJGMEQCIA2m%2Fy7AU%2F%2F86x8RDYAT2TfRCsDZKfBr3d8WeX%2Bjn58bAiAVafSEgwYXlKy8GH9PlkqzLU4hDEf18NxAjJAHr9GxYSqIBAjK%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMX6OBr%2B7ZnthcrBLaKtwD7wFMYBFqu3CUwi%2Fswe%2BgYa4D6C2kUUuW8uuGY5lSiQtW12EACFcKuuKTLvlJUExzh8ZM3QgDXuBgJrsqECQ5AKLFgJpZy1qqITYBWPLPoPyJNsm0z76M4ZYXqCwWct8isbprJSIhfL9RnJTbkB%2B5txoBpnQsRRsOVLWfX4QZ%2BtYJ9tgRRyfwK5jIqSu2h%2BLvxlWJwo1Tah%2BQlhIkn0QwCpg4C3bu0k%2FRy8EqnI%2BjY2gzdjwoGkZNqKleUg2nYMumFu3SIcnnpDf3%2F12WRQzzWmWWFvK1zq24w%2FArNU1C4f611qMtDjhMJAamDbfP%2FzeDbhfXOLB2O76rDXnWz6nlmgXMuszGLGbTDet2s8%2FM254H0qUNjlw0hYIAv90Vduq2ykYmT7SFmh2IMJivbF9Sg%2BtIIVHZmz43q%2BOjUNOPLwdfUj4I2iMkzYyIGq0wjYNlUznShiDurlsAgtZaHDvCyvKvZ3fNBfJ2I%2BX9JKV3EpPeuPIGouIPbkCDG3mps%2FYfUoAh8%2FUQm%2B5V%2BVMy3WqOHlzB67psp%2BrhWGlzRL61extJMr%2FtlTNMCCbVD2B2urxBosYr5M51KiYLuD7Ftce12bBHCMwy2NUNXU7K8ksY6Cujn834uPYyag%2BQD9QwyOPNzgY6pgFTq51amDME%2FXeULbzk8Lbj6PX%2BgCJD%2F6r%2BnTB1xSYVVMILAk65RDGiC6vWMp3J7RbfdaYdS4YMA138ct%2FL983YnAxCWPtk%2BccVScvH%2BgPiwqQSgxrlpdv10yj1Fq0RpKVTG0M91ymkr2WtkaPeY9qmB%2F5OtwbvhLL45R2mWzwFSBlspGAAsXjyFs3ibCRctuefDA4kOllalQC8WBt5L%2Ba1XViLPDq2&X-Amz-Signature=38aa022b4379c831fcc03f48ecb73bfec1f8e72ca5fa41ff5629e5a17e9ce1bc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W2V4OLWN%2F20260406%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260406T090822Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJGMEQCIA2m%2Fy7AU%2F%2F86x8RDYAT2TfRCsDZKfBr3d8WeX%2Bjn58bAiAVafSEgwYXlKy8GH9PlkqzLU4hDEf18NxAjJAHr9GxYSqIBAjK%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMX6OBr%2B7ZnthcrBLaKtwD7wFMYBFqu3CUwi%2Fswe%2BgYa4D6C2kUUuW8uuGY5lSiQtW12EACFcKuuKTLvlJUExzh8ZM3QgDXuBgJrsqECQ5AKLFgJpZy1qqITYBWPLPoPyJNsm0z76M4ZYXqCwWct8isbprJSIhfL9RnJTbkB%2B5txoBpnQsRRsOVLWfX4QZ%2BtYJ9tgRRyfwK5jIqSu2h%2BLvxlWJwo1Tah%2BQlhIkn0QwCpg4C3bu0k%2FRy8EqnI%2BjY2gzdjwoGkZNqKleUg2nYMumFu3SIcnnpDf3%2F12WRQzzWmWWFvK1zq24w%2FArNU1C4f611qMtDjhMJAamDbfP%2FzeDbhfXOLB2O76rDXnWz6nlmgXMuszGLGbTDet2s8%2FM254H0qUNjlw0hYIAv90Vduq2ykYmT7SFmh2IMJivbF9Sg%2BtIIVHZmz43q%2BOjUNOPLwdfUj4I2iMkzYyIGq0wjYNlUznShiDurlsAgtZaHDvCyvKvZ3fNBfJ2I%2BX9JKV3EpPeuPIGouIPbkCDG3mps%2FYfUoAh8%2FUQm%2B5V%2BVMy3WqOHlzB67psp%2BrhWGlzRL61extJMr%2FtlTNMCCbVD2B2urxBosYr5M51KiYLuD7Ftce12bBHCMwy2NUNXU7K8ksY6Cujn834uPYyag%2BQD9QwyOPNzgY6pgFTq51amDME%2FXeULbzk8Lbj6PX%2BgCJD%2F6r%2BnTB1xSYVVMILAk65RDGiC6vWMp3J7RbfdaYdS4YMA138ct%2FL983YnAxCWPtk%2BccVScvH%2BgPiwqQSgxrlpdv10yj1Fq0RpKVTG0M91ymkr2WtkaPeY9qmB%2F5OtwbvhLL45R2mWzwFSBlspGAAsXjyFs3ibCRctuefDA4kOllalQC8WBt5L%2Ba1XViLPDq2&X-Amz-Signature=af92e9b6e00e799d84f4ced7c3ab95e39f0e14895b175f8862e7db028d2c9a4a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W2V4OLWN%2F20260406%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260406T090822Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJGMEQCIA2m%2Fy7AU%2F%2F86x8RDYAT2TfRCsDZKfBr3d8WeX%2Bjn58bAiAVafSEgwYXlKy8GH9PlkqzLU4hDEf18NxAjJAHr9GxYSqIBAjK%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMX6OBr%2B7ZnthcrBLaKtwD7wFMYBFqu3CUwi%2Fswe%2BgYa4D6C2kUUuW8uuGY5lSiQtW12EACFcKuuKTLvlJUExzh8ZM3QgDXuBgJrsqECQ5AKLFgJpZy1qqITYBWPLPoPyJNsm0z76M4ZYXqCwWct8isbprJSIhfL9RnJTbkB%2B5txoBpnQsRRsOVLWfX4QZ%2BtYJ9tgRRyfwK5jIqSu2h%2BLvxlWJwo1Tah%2BQlhIkn0QwCpg4C3bu0k%2FRy8EqnI%2BjY2gzdjwoGkZNqKleUg2nYMumFu3SIcnnpDf3%2F12WRQzzWmWWFvK1zq24w%2FArNU1C4f611qMtDjhMJAamDbfP%2FzeDbhfXOLB2O76rDXnWz6nlmgXMuszGLGbTDet2s8%2FM254H0qUNjlw0hYIAv90Vduq2ykYmT7SFmh2IMJivbF9Sg%2BtIIVHZmz43q%2BOjUNOPLwdfUj4I2iMkzYyIGq0wjYNlUznShiDurlsAgtZaHDvCyvKvZ3fNBfJ2I%2BX9JKV3EpPeuPIGouIPbkCDG3mps%2FYfUoAh8%2FUQm%2B5V%2BVMy3WqOHlzB67psp%2BrhWGlzRL61extJMr%2FtlTNMCCbVD2B2urxBosYr5M51KiYLuD7Ftce12bBHCMwy2NUNXU7K8ksY6Cujn834uPYyag%2BQD9QwyOPNzgY6pgFTq51amDME%2FXeULbzk8Lbj6PX%2BgCJD%2F6r%2BnTB1xSYVVMILAk65RDGiC6vWMp3J7RbfdaYdS4YMA138ct%2FL983YnAxCWPtk%2BccVScvH%2BgPiwqQSgxrlpdv10yj1Fq0RpKVTG0M91ymkr2WtkaPeY9qmB%2F5OtwbvhLL45R2mWzwFSBlspGAAsXjyFs3ibCRctuefDA4kOllalQC8WBt5L%2Ba1XViLPDq2&X-Amz-Signature=fa9e540fb01ac87df9b7a5c4d4274b3b2e6d0f2b39440d71de9ef8cd6a79f165&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VZX2XAIB%2F20260406%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260406T090823Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJIMEYCIQD0u4W1yH0zdFCa1B4vk%2B8SC5NsL9Ti0P%2B8pu0ror1mVgIhAJxqpju7u0EqN%2BHb94Taia5hFTqqwfvYOY%2FKqpG20HEcKogECMr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyE%2BgpE12rxL7scKpsq3AMqI55LmNeTYUjiaPUruKCFfjy351kAbWiE5vFESu1CEIiWOz5XwI35rPUUY2I2FmQu%2FpWgn8OoIDD%2B7rGsjSpAzutMgKabuA2J3h6G0BsiJ%2Fqykl5yj9g%2BMTJaQu9AZP8lEiG%2F7xFqbnHX0AWbHZYY3NHr0AyZBjNTWAxjZ%2BFCkSh7FZBoQSvEXk34eMxm5jNXvPxZpjuoSQG%2FpnjD3%2FTVPP07EzOAwK3oJRKT4elvI4MZh%2FyykwWDp50FlePZvVpBTMJM7xowJBJ%2BPn9t6uocfPOmWoQ8NaNm6TgIgA8T8jqHrTr8uiEGewLzKD5DKyfJJssLTQqLHA96bszPxt9wq5OYxsIylRJKOUNq9q4gPWNYUYZ3n7ExKNMIi3OpjcU9NmaPAaoixLuexBvlw8cHEt26Hs0MRmKBLzstVtfcNJBOOkGCzETZOVVlQfgRnjf1Wwi48JOnFtyyHyMd4T2NZWc2EO6z8%2Fv7obg6WTK3IIf5p224kzrMuw3op4yd1JTHIPThZn9Ph%2F%2B2FM4PDDzOiQgncM6%2BqortVPTjgIlr4DHOBdHFDdxhnQQiVSNJDQ1VY0ifydRv1KB7G%2FI44OMAwdKXLjDWcEMhDNeWMjZGkFLupYr0OA%2BeKSnn6TD54s3OBjqkAcUimlfwO3nvi4G2btmRUnZQdDifAmuGmBG2zj9B6qBsVTnzeJg%2FoGXJzYKyq1QOfg%2FIrUwfSAzQcDAQQEOU8JsFh0snvyAon%2FZRTj5tJpVDQtF9N6cgUZPpvDmO7oKqnYSqSnnJ6fCOeYivc%2Ff1AqoT4D%2BMeucrZiGSOcXWkNDhucWidQfM0%2F77pblSzOUyj5ZOe9DvYjp0qcntZwqrebtiiKzg&X-Amz-Signature=13b755da80c5236c9f131ef727f3946324641d7298b43f182b255cedb5e19346&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WCROJX66%2F20260406%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260406T090824Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJHMEUCIGjneH5HY6HDiPtt8mAsayinXyfgf%2FLjbb8UXz9wo1TkAiEAnYm4pZHLiS6%2FyHqORwYkPlyOX58fu3YHszaRCjqBtaUqiAQIyv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCRdiHZ0xsJ5nzfW4CrcA4JupEQTmhbHcywcWAU180FI%2FLLD3r3ug5GAnhSNnI2eIbc482I%2FWguaJQMxlYCHHTIb0h5NMXqM0CNqBgno6Kh0GD7JdJglJa4EUglCF0u2bEacpjVD0PRX%2BbOurYJSY1S2PUm8PG43dy4Ujutvoq3Xi4aDBZadMrTNXcHjSPebBIldOzP%2FT0h2yzIAmolVXnM94B3MEVy2k2pWjacUj%2FNkK0KjSSUbYk6apIJhjX36bn1aNiNCvPDMTf79vlFpo8%2FJwJ%2BJR0X9EDM9CH%2F7vG3QrRmdkGz0SPjrPHRMC7W3j6qGjWLUNDcESA5wl2mqKcXXBJfb1scaOeBP6VtXYz00qbOLPEYaejQyaEsGriBu2hll7m5Im8FshBDelXa6m7lN%2FGsA8SaMmkNPsfve9Ds0uLVSlXJgZBNSMKcOUkgcu3FO4eP21dDzW17jbBY7H0xWJTfwLtbyH8t04AJjUZc4MOPkY57chyTfQ%2B8qpbrZWp9r5a8LKKsaYyZWFd4tP5r6ffNAot745NS72BTqPjmo%2BKaAzeMTlZTuOnI54H%2BeKwiG3Do6iZw2JlaStycjp6seictcAUYLIYSYCfPr2X7lO06%2FOkFz5WOC3kUy5CR4T8gsbeocROdG16KRMM%2Fgzc4GOqUBTWzjpV6pC2ed7s6jgb%2FF7ZojtGq71AJ4l5NYV28gGWgX0KFwNvh6aFshWpe2N239szruiEBIOGt8EguqvJV6drBNKA4OmNm05ooGlCo0saR2LnuNB8SIXy1HfZj1wTA7%2FvwtZe3MEZbGINc1H1GgCOeeNS0xF%2FDgPnKAwmYLzF8%2FWHiwt5onecq1UbWXZ7DcWng%2BVtgfdr%2BVyz4zpAxgJS32237m&X-Amz-Signature=be4264341b298097184397617cde64e20f649b3b598ecf8e517f95e4a83ae72e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WCROJX66%2F20260406%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260406T090824Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAEaCXVzLXdlc3QtMiJHMEUCIGjneH5HY6HDiPtt8mAsayinXyfgf%2FLjbb8UXz9wo1TkAiEAnYm4pZHLiS6%2FyHqORwYkPlyOX58fu3YHszaRCjqBtaUqiAQIyv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCRdiHZ0xsJ5nzfW4CrcA4JupEQTmhbHcywcWAU180FI%2FLLD3r3ug5GAnhSNnI2eIbc482I%2FWguaJQMxlYCHHTIb0h5NMXqM0CNqBgno6Kh0GD7JdJglJa4EUglCF0u2bEacpjVD0PRX%2BbOurYJSY1S2PUm8PG43dy4Ujutvoq3Xi4aDBZadMrTNXcHjSPebBIldOzP%2FT0h2yzIAmolVXnM94B3MEVy2k2pWjacUj%2FNkK0KjSSUbYk6apIJhjX36bn1aNiNCvPDMTf79vlFpo8%2FJwJ%2BJR0X9EDM9CH%2F7vG3QrRmdkGz0SPjrPHRMC7W3j6qGjWLUNDcESA5wl2mqKcXXBJfb1scaOeBP6VtXYz00qbOLPEYaejQyaEsGriBu2hll7m5Im8FshBDelXa6m7lN%2FGsA8SaMmkNPsfve9Ds0uLVSlXJgZBNSMKcOUkgcu3FO4eP21dDzW17jbBY7H0xWJTfwLtbyH8t04AJjUZc4MOPkY57chyTfQ%2B8qpbrZWp9r5a8LKKsaYyZWFd4tP5r6ffNAot745NS72BTqPjmo%2BKaAzeMTlZTuOnI54H%2BeKwiG3Do6iZw2JlaStycjp6seictcAUYLIYSYCfPr2X7lO06%2FOkFz5WOC3kUy5CR4T8gsbeocROdG16KRMM%2Fgzc4GOqUBTWzjpV6pC2ed7s6jgb%2FF7ZojtGq71AJ4l5NYV28gGWgX0KFwNvh6aFshWpe2N239szruiEBIOGt8EguqvJV6drBNKA4OmNm05ooGlCo0saR2LnuNB8SIXy1HfZj1wTA7%2FvwtZe3MEZbGINc1H1GgCOeeNS0xF%2FDgPnKAwmYLzF8%2FWHiwt5onecq1UbWXZ7DcWng%2BVtgfdr%2BVyz4zpAxgJS32237m&X-Amz-Signature=9c9540b59fe6aa19a965248a3aee45553a0cb201c5ffe65ba05b9c6109c5b135&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
