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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S75LI4L6%2F20260416%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260416T091852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDBvsj3JXTno5PWAZBOi56XYV32ncT%2Be0Clpn5A2CvdVgIhANUUPpS%2FIoo9V2fiZh7RASg6Dr69vlbzIACckopYrszJKogECLr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyMEElp2YlGOMK%2FRWwq3APq8ND%2Bbamf%2FvYczF5aTDWp7ks5TklxTkUxm1X9CpABsH4edPNEV0RJTE8HN7x8V0KdMp61ZGoDak8jqG1G%2B%2FVdoWuMC1TZqBrlK4U6hhwoObQ%2BkLPCY5Xoo%2BBzGPm5ma3r%2B%2FRKFkcqd0elALJpdpPH%2Fh12mNum4SnEIqdzQNUTS2dejS8pt9zAdxWoILWJMzTo8rUtLBfLb%2FFGhQfwLHt%2BUg1WD3jcR%2BzjzvOPv3fNKs5cbXDrJu4aAxpArWNq4X7ru21ZA5ho8GRoSiGbJd%2FBpsvVwoIA1cA01mOsc%2BmysE7KK%2FaKzAWio5pV9jOkI18GNbWcO%2FF2W40ZxtS9CgAL1OTJo0Ckl5HzGvGjRM1MX2CLPHdIy1Cz%2FvPjyADjpCDh%2BQgWOsK1f0W2dcFtZ6LcLwNlxjMNqTDEO2VKVpzdFAQOzAEhQzEMalyprqTjTwPCuf3itZwYYz0KQ4M0rK6zCGUapIXHv7CqXD0j6JCoxOyr8xV%2FG0pi4%2FxpA%2BuDTd8nTzt4oL1Oer%2FQTEYLi7v9vTFn37S8zcuteU1FohN0RMAToD4vI8feAQPjKhM3tGXYACkWuoe0WekiXIju7dn56m62cD4JrT3MaElyfaUNXdG6d3OMnzNJkxCQ4DDIvYLPBjqkAWB7LvIp5NDmml6LQK1hz1Ax4iJCGU9cn7w1BmkrqOaPDHg6cWzWMH8uth6q2oId4cwXJP9pT47TAvk2Ug48zl0v85JH43PETNmz6hFsApyUYGwge9rezTPuO2AdvGW4PfX9ACtVCDvj3psaFUysv%2FezBg3aBgimuqR82hJw%2BDBCIlWH%2F519Au0I3LjmxMoEXWDEPH%2FccGLb82sAaExl8IEAAYH6&X-Amz-Signature=6a14d50768abdc86c1530b8d32a296c0403bb6c501f5f8a49a06ac12a965dd72&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S75LI4L6%2F20260416%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260416T091852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDBvsj3JXTno5PWAZBOi56XYV32ncT%2Be0Clpn5A2CvdVgIhANUUPpS%2FIoo9V2fiZh7RASg6Dr69vlbzIACckopYrszJKogECLr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyMEElp2YlGOMK%2FRWwq3APq8ND%2Bbamf%2FvYczF5aTDWp7ks5TklxTkUxm1X9CpABsH4edPNEV0RJTE8HN7x8V0KdMp61ZGoDak8jqG1G%2B%2FVdoWuMC1TZqBrlK4U6hhwoObQ%2BkLPCY5Xoo%2BBzGPm5ma3r%2B%2FRKFkcqd0elALJpdpPH%2Fh12mNum4SnEIqdzQNUTS2dejS8pt9zAdxWoILWJMzTo8rUtLBfLb%2FFGhQfwLHt%2BUg1WD3jcR%2BzjzvOPv3fNKs5cbXDrJu4aAxpArWNq4X7ru21ZA5ho8GRoSiGbJd%2FBpsvVwoIA1cA01mOsc%2BmysE7KK%2FaKzAWio5pV9jOkI18GNbWcO%2FF2W40ZxtS9CgAL1OTJo0Ckl5HzGvGjRM1MX2CLPHdIy1Cz%2FvPjyADjpCDh%2BQgWOsK1f0W2dcFtZ6LcLwNlxjMNqTDEO2VKVpzdFAQOzAEhQzEMalyprqTjTwPCuf3itZwYYz0KQ4M0rK6zCGUapIXHv7CqXD0j6JCoxOyr8xV%2FG0pi4%2FxpA%2BuDTd8nTzt4oL1Oer%2FQTEYLi7v9vTFn37S8zcuteU1FohN0RMAToD4vI8feAQPjKhM3tGXYACkWuoe0WekiXIju7dn56m62cD4JrT3MaElyfaUNXdG6d3OMnzNJkxCQ4DDIvYLPBjqkAWB7LvIp5NDmml6LQK1hz1Ax4iJCGU9cn7w1BmkrqOaPDHg6cWzWMH8uth6q2oId4cwXJP9pT47TAvk2Ug48zl0v85JH43PETNmz6hFsApyUYGwge9rezTPuO2AdvGW4PfX9ACtVCDvj3psaFUysv%2FezBg3aBgimuqR82hJw%2BDBCIlWH%2F519Au0I3LjmxMoEXWDEPH%2FccGLb82sAaExl8IEAAYH6&X-Amz-Signature=36e68332c805d9fed0b7579db2a7d5cd04df000b032ec9615c212f96e94c81c6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S75LI4L6%2F20260416%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260416T091852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDBvsj3JXTno5PWAZBOi56XYV32ncT%2Be0Clpn5A2CvdVgIhANUUPpS%2FIoo9V2fiZh7RASg6Dr69vlbzIACckopYrszJKogECLr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyMEElp2YlGOMK%2FRWwq3APq8ND%2Bbamf%2FvYczF5aTDWp7ks5TklxTkUxm1X9CpABsH4edPNEV0RJTE8HN7x8V0KdMp61ZGoDak8jqG1G%2B%2FVdoWuMC1TZqBrlK4U6hhwoObQ%2BkLPCY5Xoo%2BBzGPm5ma3r%2B%2FRKFkcqd0elALJpdpPH%2Fh12mNum4SnEIqdzQNUTS2dejS8pt9zAdxWoILWJMzTo8rUtLBfLb%2FFGhQfwLHt%2BUg1WD3jcR%2BzjzvOPv3fNKs5cbXDrJu4aAxpArWNq4X7ru21ZA5ho8GRoSiGbJd%2FBpsvVwoIA1cA01mOsc%2BmysE7KK%2FaKzAWio5pV9jOkI18GNbWcO%2FF2W40ZxtS9CgAL1OTJo0Ckl5HzGvGjRM1MX2CLPHdIy1Cz%2FvPjyADjpCDh%2BQgWOsK1f0W2dcFtZ6LcLwNlxjMNqTDEO2VKVpzdFAQOzAEhQzEMalyprqTjTwPCuf3itZwYYz0KQ4M0rK6zCGUapIXHv7CqXD0j6JCoxOyr8xV%2FG0pi4%2FxpA%2BuDTd8nTzt4oL1Oer%2FQTEYLi7v9vTFn37S8zcuteU1FohN0RMAToD4vI8feAQPjKhM3tGXYACkWuoe0WekiXIju7dn56m62cD4JrT3MaElyfaUNXdG6d3OMnzNJkxCQ4DDIvYLPBjqkAWB7LvIp5NDmml6LQK1hz1Ax4iJCGU9cn7w1BmkrqOaPDHg6cWzWMH8uth6q2oId4cwXJP9pT47TAvk2Ug48zl0v85JH43PETNmz6hFsApyUYGwge9rezTPuO2AdvGW4PfX9ACtVCDvj3psaFUysv%2FezBg3aBgimuqR82hJw%2BDBCIlWH%2F519Au0I3LjmxMoEXWDEPH%2FccGLb82sAaExl8IEAAYH6&X-Amz-Signature=6050624b359005cdc73e63dcfed47ccf6150ee3d6ecad31002c3ad204f32cff8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SHVEMRDN%2F20260416%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260416T091852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIC0HijDSjBpGCzbRPIy0NdVrYhSwDMZZXJDlI0hxNrLsAiEAxhJ4zltMIVH6pcrv1dpI56gpja%2BS%2Fnoej%2BMIiYN4Hs4qiAQIuv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAPI1ECqww%2BCqLAHryrcA6yUz3Hu%2FBkXNoKXpdUr4FOnKv2VzlNELWMpruiuzaE7g38oBrgBE1X1%2BMZYEhzCPvRYxu4UQRV9UnHBwNQyw03A94Edt89BiUxQDsN%2Fpt4cvfBpe6IJfoyuXNYDjbrBfLAgZPtvgQmC7DbEmoShUH3H2uBhzg%2FFf0A48Tip8ZXbmoSZiyJEveqGvFnwb8fW2175l5VjLLhteEIbo%2BO6Zc8dxksIlCYCNMsY5OilvgSTFnPYZNEDe7No9xaTJHoco%2Fu%2BjBgVFvZbtNNYwi7jU%2BIOi3ZIfGOxZFXDm4rqZxoc4mLBfokkoCxK1DSORiheOOuxT6HhtoNxcWNiC5FoQNyno6mE6M%2BMOZ4DmIEFbWd36inS%2B9LYq2eESF9xXO44hG2jYF42DS%2BNZAuxJRTFD7s0woyZPIa8iIC4NARLBLETbH7j24kmmtQcfs19k2lXs44KEIU9STFx9eZ3GaDyfNjkWcNNo4SoxMMmxSU%2FEOTfEPD1UDoP6lOxuIpPRahwi4njY5KR2RAcfenu6wOxs8a4zfIbVqvsLkNHZrz8wSYyD0dcB73eGdBMN2i73vxTZIpa77%2FEmbTEZVA7NeNganGDg0WBte8B%2FQbe%2FTvQBvM45fqn%2BxM2iTwRUfOzMNm8gs8GOqUBw3KrU0C6VPDR4SWpAnDetv8m%2BAoxzVZlTtSa%2FknZMqgtpLVkSa%2BqKk05ybXSqb2XMz7pnyZLn84W27T93E8mCdJXNCEiGi8Wap3X0cItEiurrfc2LHWi5iyxC1BXlG5yu%2B2QcY1lX%2FOjQ%2FYNEOfIjVW41nKp0OefrFFkl%2FNa5v6ixkCh0sMonFQ3B9%2FTEzQ45%2Fu5Ww6gek7YZxa4KpZi75T8fK0W&X-Amz-Signature=ed9e7cafdf3be71c656ac2f1de2c1e67b909cfeeefc6bb5ec54dcdb54c5d1446&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SHVEMRDN%2F20260416%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260416T091852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIC0HijDSjBpGCzbRPIy0NdVrYhSwDMZZXJDlI0hxNrLsAiEAxhJ4zltMIVH6pcrv1dpI56gpja%2BS%2Fnoej%2BMIiYN4Hs4qiAQIuv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAPI1ECqww%2BCqLAHryrcA6yUz3Hu%2FBkXNoKXpdUr4FOnKv2VzlNELWMpruiuzaE7g38oBrgBE1X1%2BMZYEhzCPvRYxu4UQRV9UnHBwNQyw03A94Edt89BiUxQDsN%2Fpt4cvfBpe6IJfoyuXNYDjbrBfLAgZPtvgQmC7DbEmoShUH3H2uBhzg%2FFf0A48Tip8ZXbmoSZiyJEveqGvFnwb8fW2175l5VjLLhteEIbo%2BO6Zc8dxksIlCYCNMsY5OilvgSTFnPYZNEDe7No9xaTJHoco%2Fu%2BjBgVFvZbtNNYwi7jU%2BIOi3ZIfGOxZFXDm4rqZxoc4mLBfokkoCxK1DSORiheOOuxT6HhtoNxcWNiC5FoQNyno6mE6M%2BMOZ4DmIEFbWd36inS%2B9LYq2eESF9xXO44hG2jYF42DS%2BNZAuxJRTFD7s0woyZPIa8iIC4NARLBLETbH7j24kmmtQcfs19k2lXs44KEIU9STFx9eZ3GaDyfNjkWcNNo4SoxMMmxSU%2FEOTfEPD1UDoP6lOxuIpPRahwi4njY5KR2RAcfenu6wOxs8a4zfIbVqvsLkNHZrz8wSYyD0dcB73eGdBMN2i73vxTZIpa77%2FEmbTEZVA7NeNganGDg0WBte8B%2FQbe%2FTvQBvM45fqn%2BxM2iTwRUfOzMNm8gs8GOqUBw3KrU0C6VPDR4SWpAnDetv8m%2BAoxzVZlTtSa%2FknZMqgtpLVkSa%2BqKk05ybXSqb2XMz7pnyZLn84W27T93E8mCdJXNCEiGi8Wap3X0cItEiurrfc2LHWi5iyxC1BXlG5yu%2B2QcY1lX%2FOjQ%2FYNEOfIjVW41nKp0OefrFFkl%2FNa5v6ixkCh0sMonFQ3B9%2FTEzQ45%2Fu5Ww6gek7YZxa4KpZi75T8fK0W&X-Amz-Signature=59eed1dfde052808e291d36793f617308811723db95002ac906a8a78c37044e0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SHVEMRDN%2F20260416%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260416T091852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIC0HijDSjBpGCzbRPIy0NdVrYhSwDMZZXJDlI0hxNrLsAiEAxhJ4zltMIVH6pcrv1dpI56gpja%2BS%2Fnoej%2BMIiYN4Hs4qiAQIuv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAPI1ECqww%2BCqLAHryrcA6yUz3Hu%2FBkXNoKXpdUr4FOnKv2VzlNELWMpruiuzaE7g38oBrgBE1X1%2BMZYEhzCPvRYxu4UQRV9UnHBwNQyw03A94Edt89BiUxQDsN%2Fpt4cvfBpe6IJfoyuXNYDjbrBfLAgZPtvgQmC7DbEmoShUH3H2uBhzg%2FFf0A48Tip8ZXbmoSZiyJEveqGvFnwb8fW2175l5VjLLhteEIbo%2BO6Zc8dxksIlCYCNMsY5OilvgSTFnPYZNEDe7No9xaTJHoco%2Fu%2BjBgVFvZbtNNYwi7jU%2BIOi3ZIfGOxZFXDm4rqZxoc4mLBfokkoCxK1DSORiheOOuxT6HhtoNxcWNiC5FoQNyno6mE6M%2BMOZ4DmIEFbWd36inS%2B9LYq2eESF9xXO44hG2jYF42DS%2BNZAuxJRTFD7s0woyZPIa8iIC4NARLBLETbH7j24kmmtQcfs19k2lXs44KEIU9STFx9eZ3GaDyfNjkWcNNo4SoxMMmxSU%2FEOTfEPD1UDoP6lOxuIpPRahwi4njY5KR2RAcfenu6wOxs8a4zfIbVqvsLkNHZrz8wSYyD0dcB73eGdBMN2i73vxTZIpa77%2FEmbTEZVA7NeNganGDg0WBte8B%2FQbe%2FTvQBvM45fqn%2BxM2iTwRUfOzMNm8gs8GOqUBw3KrU0C6VPDR4SWpAnDetv8m%2BAoxzVZlTtSa%2FknZMqgtpLVkSa%2BqKk05ybXSqb2XMz7pnyZLn84W27T93E8mCdJXNCEiGi8Wap3X0cItEiurrfc2LHWi5iyxC1BXlG5yu%2B2QcY1lX%2FOjQ%2FYNEOfIjVW41nKp0OefrFFkl%2FNa5v6ixkCh0sMonFQ3B9%2FTEzQ45%2Fu5Ww6gek7YZxa4KpZi75T8fK0W&X-Amz-Signature=02b45262e8bed269b28b7609e998337ca94ee8ad7961507feee9e08f0349aa67&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SHVEMRDN%2F20260416%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260416T091852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIC0HijDSjBpGCzbRPIy0NdVrYhSwDMZZXJDlI0hxNrLsAiEAxhJ4zltMIVH6pcrv1dpI56gpja%2BS%2Fnoej%2BMIiYN4Hs4qiAQIuv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAPI1ECqww%2BCqLAHryrcA6yUz3Hu%2FBkXNoKXpdUr4FOnKv2VzlNELWMpruiuzaE7g38oBrgBE1X1%2BMZYEhzCPvRYxu4UQRV9UnHBwNQyw03A94Edt89BiUxQDsN%2Fpt4cvfBpe6IJfoyuXNYDjbrBfLAgZPtvgQmC7DbEmoShUH3H2uBhzg%2FFf0A48Tip8ZXbmoSZiyJEveqGvFnwb8fW2175l5VjLLhteEIbo%2BO6Zc8dxksIlCYCNMsY5OilvgSTFnPYZNEDe7No9xaTJHoco%2Fu%2BjBgVFvZbtNNYwi7jU%2BIOi3ZIfGOxZFXDm4rqZxoc4mLBfokkoCxK1DSORiheOOuxT6HhtoNxcWNiC5FoQNyno6mE6M%2BMOZ4DmIEFbWd36inS%2B9LYq2eESF9xXO44hG2jYF42DS%2BNZAuxJRTFD7s0woyZPIa8iIC4NARLBLETbH7j24kmmtQcfs19k2lXs44KEIU9STFx9eZ3GaDyfNjkWcNNo4SoxMMmxSU%2FEOTfEPD1UDoP6lOxuIpPRahwi4njY5KR2RAcfenu6wOxs8a4zfIbVqvsLkNHZrz8wSYyD0dcB73eGdBMN2i73vxTZIpa77%2FEmbTEZVA7NeNganGDg0WBte8B%2FQbe%2FTvQBvM45fqn%2BxM2iTwRUfOzMNm8gs8GOqUBw3KrU0C6VPDR4SWpAnDetv8m%2BAoxzVZlTtSa%2FknZMqgtpLVkSa%2BqKk05ybXSqb2XMz7pnyZLn84W27T93E8mCdJXNCEiGi8Wap3X0cItEiurrfc2LHWi5iyxC1BXlG5yu%2B2QcY1lX%2FOjQ%2FYNEOfIjVW41nKp0OefrFFkl%2FNa5v6ixkCh0sMonFQ3B9%2FTEzQ45%2Fu5Ww6gek7YZxa4KpZi75T8fK0W&X-Amz-Signature=a40c4b26513df0a1e4aabcb4379f5509812f0eef1516bdef1024125a260a0327&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664RTF6JR3%2F20260416%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260416T091852Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAmdqF1vL8vCckuQM8IVgowfBQUeRyGNckQaDiTCVGpOAiA8wnx26CHwdyQSZ4ycmSIF%2FctEFwxyMoBeKDnzSdjiKCqIBAi6%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMggpjEB0GE9WYo5ojKtwD8oVAXbxtHNaJkasSa5k74RDTbzeJKckHdQyF42xl0%2B9RzsIuH8tdTi2N%2FLNAkFa4CDzlPjt%2BwxsXRW8k%2Fei0o47n8%2FcYdY17rcrZ%2BDzBEH13P5fCmQfjOnNssvLgGMAhA41S85gzkMl6dwl1VeT8qaa70Gfy0TRSP1FSa%2FeuwgUWBReEoUbwNjtx05UvOuqCv9tzdWx8oCCrFxxcZFC2kfxv3v7PezwraaJz3y7cguwM6KtH0E5AKnFOTikUBqrgV8FQs4vKqxoAih1AEtIz8R56oCFOB7yWRYRRoTlACBAtQN4fm9N6gEn3D3L16KL58ABOvjfh1MSKgTOllBb9fNmLBCFGfAkn9meSpH7OvnsTxQkJQiRSs1jUy1%2BmRyQ0i7ECS%2FH%2FG6a0aTnWQvKu%2BGxF%2BogaymRlB2SlgZ0C%2F9chiBsL1nkx6lUI%2BmjhgwvTUYJkFcVytDua1RS%2FJqWMeEkFac2M%2FPnekuup%2FTyTC%2B%2F0VLUkMUM5O3DF2Ll8YgMDiDQ15vfJ8iliL5oezt86Nnd6iaxyo1MXPjz11bbeLo%2B9fbMzwFlUgwiq9ZN6bdgo%2BopR%2BqwM4R5dh6iz3vlaGhuFv6j7oU5bIn30UvdB7c03EuCEWo26tiyHVxQwub2CzwY6pgEQgnomvK7PtPyrX4O4E2xY2T1OgdsoV29NlaL7DdwW5U2eCot3lT7%2FTlGDLQYyuQGph92WovtMmHznByyJf%2BXlYK9PQcVRtFO%2Be4a4dZOIjkDKypZaQI05C2KOOIQPBLEVOeyvSLrvhOVFyOQp2jFpf6vooqGocOj5o3dxCPL3Hm0K2Y7D5O%2FnaKbaSIRPPZKhD2xcxX99itTFs9xFi2GFtZe%2F92z3&X-Amz-Signature=597d2133877c4b8ea6f15d8a305e62482c630f33f9bb7231dcff6d596f977b3d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QYK3QK5E%2F20260416%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260416T091853Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAuMy%2BB%2B6SSSbG3plIbzbBo%2F%2FOSZ%2FqWhKZFa2Sqih20EAiA8ooBJMJ%2BVL2rvkf4ytZLCY%2FOFxFyal3jBNpKbaUOnMiqIBAi6%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM63YmjDQr%2FyfNRtPTKtwD%2BKexgEj9%2BB1X%2BsrDZSCOkyvJMiPV7iFgMwsEd5QlXI7dl2QfGdn2HVgG6NS2SZatqVBHRRF5P1KKC%2FlhjViaRWuBSLveFdb4UKQn85rLClbBFsEKnq5zH3CJ8ixtoYOj%2Bk6NJZpjOK22cXYbSwuxUbE%2BVhHmUPDNoqS7CC5WZi70SBPAydEz83mO960eJK9u0zIcmH65kLzSfOR7w%2BNd7zfgHsAQ%2BFTGzQ%2FngtXvOXvaMEc4rjLUcujFQBDlK9yOwFxpyC8eETJsd8SLEnouyC%2FjSBzYfhKpnIHVQ6ES6aACy0VFSCjdGrnWFXR3REaDRbF9%2Fj62hkeSmKJkktPpHQJem7%2FsDOn0%2FoC%2FqicplUHT5QvYVZ9ephmm84wVR4H%2FSCWeEG%2BC1HNVhAK%2FWjr36xfz8XCdLk4EcOK3OsiIepoLDZIhL83M2BNd9eOK72CT%2BLhJLYuL%2F0ZPJYiBTP45dSZH%2FgG%2FpFvb2fDth6chEE3YkJskk1YiQs3JMfxfXEn%2FstUfS%2FM13lW3ghrzldeaf%2FR38OI2UiRjUajZPBboaXXBbuwx%2BSsDt1BYxgcD1XixxpmiiDSiClS%2FVzVPajJAmlOND7ks30xOw2zHmHch40wrH5IBpTJWIu%2Fja6gw6b2CzwY6pgEB%2BNw5rjxHYTXXy%2FaS%2FXp0elRem9SMdsyMhw9YLCHlVVtFdxH8K8nyNV6KBHdZlTPxpXjMzhq2s23%2Fnm1BC0R2P99bE5EsoSzPY9EsFAMJXGjuoGm1A8kv0dauy2KbAcxQB4tfHv8mw2pgbSfTmdKVpAzRvcSqv2eP6MTX0nm5Gji0wJjJdSBwf72PxV5%2FL9X3EipFxGwP2eUhuV8%2Bdf0cQWODPpU3&X-Amz-Signature=af01805503fdd5b88ee248056993e71de68ffa27ff19a994a62e984c809e45e0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QYK3QK5E%2F20260416%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260416T091853Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAuMy%2BB%2B6SSSbG3plIbzbBo%2F%2FOSZ%2FqWhKZFa2Sqih20EAiA8ooBJMJ%2BVL2rvkf4ytZLCY%2FOFxFyal3jBNpKbaUOnMiqIBAi6%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM63YmjDQr%2FyfNRtPTKtwD%2BKexgEj9%2BB1X%2BsrDZSCOkyvJMiPV7iFgMwsEd5QlXI7dl2QfGdn2HVgG6NS2SZatqVBHRRF5P1KKC%2FlhjViaRWuBSLveFdb4UKQn85rLClbBFsEKnq5zH3CJ8ixtoYOj%2Bk6NJZpjOK22cXYbSwuxUbE%2BVhHmUPDNoqS7CC5WZi70SBPAydEz83mO960eJK9u0zIcmH65kLzSfOR7w%2BNd7zfgHsAQ%2BFTGzQ%2FngtXvOXvaMEc4rjLUcujFQBDlK9yOwFxpyC8eETJsd8SLEnouyC%2FjSBzYfhKpnIHVQ6ES6aACy0VFSCjdGrnWFXR3REaDRbF9%2Fj62hkeSmKJkktPpHQJem7%2FsDOn0%2FoC%2FqicplUHT5QvYVZ9ephmm84wVR4H%2FSCWeEG%2BC1HNVhAK%2FWjr36xfz8XCdLk4EcOK3OsiIepoLDZIhL83M2BNd9eOK72CT%2BLhJLYuL%2F0ZPJYiBTP45dSZH%2FgG%2FpFvb2fDth6chEE3YkJskk1YiQs3JMfxfXEn%2FstUfS%2FM13lW3ghrzldeaf%2FR38OI2UiRjUajZPBboaXXBbuwx%2BSsDt1BYxgcD1XixxpmiiDSiClS%2FVzVPajJAmlOND7ks30xOw2zHmHch40wrH5IBpTJWIu%2Fja6gw6b2CzwY6pgEB%2BNw5rjxHYTXXy%2FaS%2FXp0elRem9SMdsyMhw9YLCHlVVtFdxH8K8nyNV6KBHdZlTPxpXjMzhq2s23%2Fnm1BC0R2P99bE5EsoSzPY9EsFAMJXGjuoGm1A8kv0dauy2KbAcxQB4tfHv8mw2pgbSfTmdKVpAzRvcSqv2eP6MTX0nm5Gji0wJjJdSBwf72PxV5%2FL9X3EipFxGwP2eUhuV8%2Bdf0cQWODPpU3&X-Amz-Signature=962757abb1e2134bee4f0f1c02767d6dcac7ceeef46ab2f8cd4da4fd01cafcee&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
