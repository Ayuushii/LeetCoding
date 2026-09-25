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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SDNBJSWX%2F20260925%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260925T131535Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECMaCXVzLXdlc3QtMiJGMEQCIBUau4STTD9AHgLmIdHdeDjPo68l5y0v%2BZvQOb93vqeuAiA0qiCB7f8BZFxDBb6bBaNnRA4abMqr617o3jMVUQwVUCqIBAjs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM1z0mOknVLh8oIPb5KtwDoVOFAZtbkuXVGtown3ZlBc31PxZWWhtFRSZc%2Br%2FCXYdjE4b7eZliunD38B%2FBFuq1ocmY8pdPO60r38HDFtdAuy33kdaYtgqvDKro88e6fEp2XgkmN7sXnDHLCalpD4OqclBGVlMh9h5O82iLbhstbCnUdJ25%2FrVKg2KKwC3EFFjv7xbEorjLp0kxIYCEjYqpI24JDrvGBat21xbcov05MzeEP4%2BJPu%2FqWDZSYURN3ZDyznONZ3lIXW8n7XM6gVVz0ZGVyMKtpQV8y%2BLIswLscbdudd6oeol7D5XJRD5P2tpl2qnbHo0OMI0nCbwVgQa7IuPXuWD75Nl1c9q3WUTUATE6ulXf5WIvI%2BWfeMBhuI6tljWGRv9JqQ4mYw3AE2Z%2BuWIOxkTMwViEznX4ZevBGcrfpxYq356DaWa2cHTsO54JPuu9cG59pxqBg5%2Fb%2BZgFk0%2FZ42bRqug7dVuKI2K1zweU6S%2Fm9sV1%2F1ab0nIDH5JE%2FeNHnFavEB0cRpk0e4C40Mc1VOqb2XqCvXEU9oLiNIbhUqSddROL%2BZ6mMpENKH%2BBOR9%2BeenNrg%2BofcAajn6LeSMtFuebHsiGKGLa1as9Ktd68VBkMIrrHjUAXjZ2BadRArEzS2k4FBbimoMw06jZ1QY6pgGPg%2FzXLP1su8ulQCeQp2div9UodiEn%2F2hGbI4qEWSSC8cGeIhsblJeLOEV1LoQ%2Frmemja%2FQHvRrtOvogcYsMT1U%2BWt0eyiCYydue%2Frepk%2FE%2FjOgfz0NTDEXVl6N3YQvWl7H3RT5DlkXxKZnvtbRH6j9m2idk8jgIoi7wA%2BPMPuTOj%2FV1x1b2Y0prbtijwBkx4jaW6EfGpzuhNpnZPXpZWClaIsV7TP&X-Amz-Signature=22ead6125cc3e836985bf285047f23f92382ce062de3169b72399717387183a0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SDNBJSWX%2F20260925%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260925T131535Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECMaCXVzLXdlc3QtMiJGMEQCIBUau4STTD9AHgLmIdHdeDjPo68l5y0v%2BZvQOb93vqeuAiA0qiCB7f8BZFxDBb6bBaNnRA4abMqr617o3jMVUQwVUCqIBAjs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM1z0mOknVLh8oIPb5KtwDoVOFAZtbkuXVGtown3ZlBc31PxZWWhtFRSZc%2Br%2FCXYdjE4b7eZliunD38B%2FBFuq1ocmY8pdPO60r38HDFtdAuy33kdaYtgqvDKro88e6fEp2XgkmN7sXnDHLCalpD4OqclBGVlMh9h5O82iLbhstbCnUdJ25%2FrVKg2KKwC3EFFjv7xbEorjLp0kxIYCEjYqpI24JDrvGBat21xbcov05MzeEP4%2BJPu%2FqWDZSYURN3ZDyznONZ3lIXW8n7XM6gVVz0ZGVyMKtpQV8y%2BLIswLscbdudd6oeol7D5XJRD5P2tpl2qnbHo0OMI0nCbwVgQa7IuPXuWD75Nl1c9q3WUTUATE6ulXf5WIvI%2BWfeMBhuI6tljWGRv9JqQ4mYw3AE2Z%2BuWIOxkTMwViEznX4ZevBGcrfpxYq356DaWa2cHTsO54JPuu9cG59pxqBg5%2Fb%2BZgFk0%2FZ42bRqug7dVuKI2K1zweU6S%2Fm9sV1%2F1ab0nIDH5JE%2FeNHnFavEB0cRpk0e4C40Mc1VOqb2XqCvXEU9oLiNIbhUqSddROL%2BZ6mMpENKH%2BBOR9%2BeenNrg%2BofcAajn6LeSMtFuebHsiGKGLa1as9Ktd68VBkMIrrHjUAXjZ2BadRArEzS2k4FBbimoMw06jZ1QY6pgGPg%2FzXLP1su8ulQCeQp2div9UodiEn%2F2hGbI4qEWSSC8cGeIhsblJeLOEV1LoQ%2Frmemja%2FQHvRrtOvogcYsMT1U%2BWt0eyiCYydue%2Frepk%2FE%2FjOgfz0NTDEXVl6N3YQvWl7H3RT5DlkXxKZnvtbRH6j9m2idk8jgIoi7wA%2BPMPuTOj%2FV1x1b2Y0prbtijwBkx4jaW6EfGpzuhNpnZPXpZWClaIsV7TP&X-Amz-Signature=843d105e01227b63bf010f9a2a90fd0eded583e86c262e6caa9a923706dd2c5b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SDNBJSWX%2F20260925%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260925T131535Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECMaCXVzLXdlc3QtMiJGMEQCIBUau4STTD9AHgLmIdHdeDjPo68l5y0v%2BZvQOb93vqeuAiA0qiCB7f8BZFxDBb6bBaNnRA4abMqr617o3jMVUQwVUCqIBAjs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM1z0mOknVLh8oIPb5KtwDoVOFAZtbkuXVGtown3ZlBc31PxZWWhtFRSZc%2Br%2FCXYdjE4b7eZliunD38B%2FBFuq1ocmY8pdPO60r38HDFtdAuy33kdaYtgqvDKro88e6fEp2XgkmN7sXnDHLCalpD4OqclBGVlMh9h5O82iLbhstbCnUdJ25%2FrVKg2KKwC3EFFjv7xbEorjLp0kxIYCEjYqpI24JDrvGBat21xbcov05MzeEP4%2BJPu%2FqWDZSYURN3ZDyznONZ3lIXW8n7XM6gVVz0ZGVyMKtpQV8y%2BLIswLscbdudd6oeol7D5XJRD5P2tpl2qnbHo0OMI0nCbwVgQa7IuPXuWD75Nl1c9q3WUTUATE6ulXf5WIvI%2BWfeMBhuI6tljWGRv9JqQ4mYw3AE2Z%2BuWIOxkTMwViEznX4ZevBGcrfpxYq356DaWa2cHTsO54JPuu9cG59pxqBg5%2Fb%2BZgFk0%2FZ42bRqug7dVuKI2K1zweU6S%2Fm9sV1%2F1ab0nIDH5JE%2FeNHnFavEB0cRpk0e4C40Mc1VOqb2XqCvXEU9oLiNIbhUqSddROL%2BZ6mMpENKH%2BBOR9%2BeenNrg%2BofcAajn6LeSMtFuebHsiGKGLa1as9Ktd68VBkMIrrHjUAXjZ2BadRArEzS2k4FBbimoMw06jZ1QY6pgGPg%2FzXLP1su8ulQCeQp2div9UodiEn%2F2hGbI4qEWSSC8cGeIhsblJeLOEV1LoQ%2Frmemja%2FQHvRrtOvogcYsMT1U%2BWt0eyiCYydue%2Frepk%2FE%2FjOgfz0NTDEXVl6N3YQvWl7H3RT5DlkXxKZnvtbRH6j9m2idk8jgIoi7wA%2BPMPuTOj%2FV1x1b2Y0prbtijwBkx4jaW6EfGpzuhNpnZPXpZWClaIsV7TP&X-Amz-Signature=c973bd7579e37babed549c5c05bebc67ed4eb0c1094fb09bc548a09945654c7f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T2VXJ3GE%2F20260925%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260925T131535Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECMaCXVzLXdlc3QtMiJHMEUCIQDQg5rj80Lwb2J9pueKil0BAh4VFs2J%2Btu8uenNZFvjwQIgbl4UaiPH3M37B7DW20s8oK%2Bl2UAnHM88u%2Bb5mhiHHYIqiAQI7P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDKBpSE%2BmDwDJlXVNXSrcA%2FIG8H5RLceZ7Zq7U3v4iWn5HC1PzkmJaQe8OFn%2FxqOzlVRmypiefw%2BtI2VPRRQ06JdygJF1nEJHWOP0%2FCYuImHagKE%2FylXaMn09eOodakqstnpBW%2FZTqv8JNVPbfi6HHbxYJV8%2FAJOQhTQ4HecdxHetyvGpZFSgmRV5jc8D%2F7szYZEv4uv95N0hd1xeE36Pph2fFGVOc%2FdXfMknTdsjHvH20VM8M9aXujo6%2BNzlmOqTFFI01DQ5r5i6xgeRZyLk4C7mcArG14oKv5HZlK4onGhx1shumaZBeM0AbkUaZDev%2FUwzhGr09D7GByEoyOQCcmCCKj%2BR1X1q%2BiFm9fBGM7BDMCMOSWYSKZK51ycWVan%2BH7rRaHvadfxxA7%2Fqc0AVbWFMZkL%2FsZvzMOahKa5Qu7N6qFdhNoWMjJijsvYN5v8zU2Af3VObQB%2FGoobWM34PaXeOeTsrn4hFFA9Qj52cvq%2FdiLulze3rXn7MCyKvQ3tedAA%2BO012wcXll%2Fcv85y5p%2FCMEqbcAIdo6wNzgIJx1KaQRTMlJzJCBaj8iURf3qGKM%2B6%2Bmkxg9tUOx%2Fgb%2FSnJ33dB0s8DVHZErheKR%2FUXIEeds9K8L6ALEbxgWIn4nwjthK4SZq36z9xCxfKRMKin2dUGOqUBW%2Fk8srJ2eTN25ecAQDgtwiQtUEVJVtN44%2Fd%2BGnxq3L6tMhRBbN%2BsOG2%2BLPzxV6IUQJ1y3dGJqt7%2FXye57V9cU8BZJsIQq6o7xpyUrLHy1ETqJtj5BSsKBZGP5FqP8BOpvrG8O1hKkXx41VylOciqybuWKdlC5%2BDK5JwNt%2Fcpw%2FjgO7Zk%2BOQes%2BLyOSGeDZSNBZR%2FQY3YG2QSntaUpDOQ7w%2Fn6huD&X-Amz-Signature=f900a5c1158c0a36043771ec927841b077760ee4a4f7256490fac08395e47c28&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T2VXJ3GE%2F20260925%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260925T131535Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECMaCXVzLXdlc3QtMiJHMEUCIQDQg5rj80Lwb2J9pueKil0BAh4VFs2J%2Btu8uenNZFvjwQIgbl4UaiPH3M37B7DW20s8oK%2Bl2UAnHM88u%2Bb5mhiHHYIqiAQI7P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDKBpSE%2BmDwDJlXVNXSrcA%2FIG8H5RLceZ7Zq7U3v4iWn5HC1PzkmJaQe8OFn%2FxqOzlVRmypiefw%2BtI2VPRRQ06JdygJF1nEJHWOP0%2FCYuImHagKE%2FylXaMn09eOodakqstnpBW%2FZTqv8JNVPbfi6HHbxYJV8%2FAJOQhTQ4HecdxHetyvGpZFSgmRV5jc8D%2F7szYZEv4uv95N0hd1xeE36Pph2fFGVOc%2FdXfMknTdsjHvH20VM8M9aXujo6%2BNzlmOqTFFI01DQ5r5i6xgeRZyLk4C7mcArG14oKv5HZlK4onGhx1shumaZBeM0AbkUaZDev%2FUwzhGr09D7GByEoyOQCcmCCKj%2BR1X1q%2BiFm9fBGM7BDMCMOSWYSKZK51ycWVan%2BH7rRaHvadfxxA7%2Fqc0AVbWFMZkL%2FsZvzMOahKa5Qu7N6qFdhNoWMjJijsvYN5v8zU2Af3VObQB%2FGoobWM34PaXeOeTsrn4hFFA9Qj52cvq%2FdiLulze3rXn7MCyKvQ3tedAA%2BO012wcXll%2Fcv85y5p%2FCMEqbcAIdo6wNzgIJx1KaQRTMlJzJCBaj8iURf3qGKM%2B6%2Bmkxg9tUOx%2Fgb%2FSnJ33dB0s8DVHZErheKR%2FUXIEeds9K8L6ALEbxgWIn4nwjthK4SZq36z9xCxfKRMKin2dUGOqUBW%2Fk8srJ2eTN25ecAQDgtwiQtUEVJVtN44%2Fd%2BGnxq3L6tMhRBbN%2BsOG2%2BLPzxV6IUQJ1y3dGJqt7%2FXye57V9cU8BZJsIQq6o7xpyUrLHy1ETqJtj5BSsKBZGP5FqP8BOpvrG8O1hKkXx41VylOciqybuWKdlC5%2BDK5JwNt%2Fcpw%2FjgO7Zk%2BOQes%2BLyOSGeDZSNBZR%2FQY3YG2QSntaUpDOQ7w%2Fn6huD&X-Amz-Signature=86602d9a16546c048d7776ef6430840350da7edd1296e5fd158ae10d9a372d18&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T2VXJ3GE%2F20260925%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260925T131535Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECMaCXVzLXdlc3QtMiJHMEUCIQDQg5rj80Lwb2J9pueKil0BAh4VFs2J%2Btu8uenNZFvjwQIgbl4UaiPH3M37B7DW20s8oK%2Bl2UAnHM88u%2Bb5mhiHHYIqiAQI7P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDKBpSE%2BmDwDJlXVNXSrcA%2FIG8H5RLceZ7Zq7U3v4iWn5HC1PzkmJaQe8OFn%2FxqOzlVRmypiefw%2BtI2VPRRQ06JdygJF1nEJHWOP0%2FCYuImHagKE%2FylXaMn09eOodakqstnpBW%2FZTqv8JNVPbfi6HHbxYJV8%2FAJOQhTQ4HecdxHetyvGpZFSgmRV5jc8D%2F7szYZEv4uv95N0hd1xeE36Pph2fFGVOc%2FdXfMknTdsjHvH20VM8M9aXujo6%2BNzlmOqTFFI01DQ5r5i6xgeRZyLk4C7mcArG14oKv5HZlK4onGhx1shumaZBeM0AbkUaZDev%2FUwzhGr09D7GByEoyOQCcmCCKj%2BR1X1q%2BiFm9fBGM7BDMCMOSWYSKZK51ycWVan%2BH7rRaHvadfxxA7%2Fqc0AVbWFMZkL%2FsZvzMOahKa5Qu7N6qFdhNoWMjJijsvYN5v8zU2Af3VObQB%2FGoobWM34PaXeOeTsrn4hFFA9Qj52cvq%2FdiLulze3rXn7MCyKvQ3tedAA%2BO012wcXll%2Fcv85y5p%2FCMEqbcAIdo6wNzgIJx1KaQRTMlJzJCBaj8iURf3qGKM%2B6%2Bmkxg9tUOx%2Fgb%2FSnJ33dB0s8DVHZErheKR%2FUXIEeds9K8L6ALEbxgWIn4nwjthK4SZq36z9xCxfKRMKin2dUGOqUBW%2Fk8srJ2eTN25ecAQDgtwiQtUEVJVtN44%2Fd%2BGnxq3L6tMhRBbN%2BsOG2%2BLPzxV6IUQJ1y3dGJqt7%2FXye57V9cU8BZJsIQq6o7xpyUrLHy1ETqJtj5BSsKBZGP5FqP8BOpvrG8O1hKkXx41VylOciqybuWKdlC5%2BDK5JwNt%2Fcpw%2FjgO7Zk%2BOQes%2BLyOSGeDZSNBZR%2FQY3YG2QSntaUpDOQ7w%2Fn6huD&X-Amz-Signature=d6e8b73f8f73af023f78bd3417d36f71d918ca82a213b7b01257726bc83c318d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T2VXJ3GE%2F20260925%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260925T131535Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECMaCXVzLXdlc3QtMiJHMEUCIQDQg5rj80Lwb2J9pueKil0BAh4VFs2J%2Btu8uenNZFvjwQIgbl4UaiPH3M37B7DW20s8oK%2Bl2UAnHM88u%2Bb5mhiHHYIqiAQI7P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDKBpSE%2BmDwDJlXVNXSrcA%2FIG8H5RLceZ7Zq7U3v4iWn5HC1PzkmJaQe8OFn%2FxqOzlVRmypiefw%2BtI2VPRRQ06JdygJF1nEJHWOP0%2FCYuImHagKE%2FylXaMn09eOodakqstnpBW%2FZTqv8JNVPbfi6HHbxYJV8%2FAJOQhTQ4HecdxHetyvGpZFSgmRV5jc8D%2F7szYZEv4uv95N0hd1xeE36Pph2fFGVOc%2FdXfMknTdsjHvH20VM8M9aXujo6%2BNzlmOqTFFI01DQ5r5i6xgeRZyLk4C7mcArG14oKv5HZlK4onGhx1shumaZBeM0AbkUaZDev%2FUwzhGr09D7GByEoyOQCcmCCKj%2BR1X1q%2BiFm9fBGM7BDMCMOSWYSKZK51ycWVan%2BH7rRaHvadfxxA7%2Fqc0AVbWFMZkL%2FsZvzMOahKa5Qu7N6qFdhNoWMjJijsvYN5v8zU2Af3VObQB%2FGoobWM34PaXeOeTsrn4hFFA9Qj52cvq%2FdiLulze3rXn7MCyKvQ3tedAA%2BO012wcXll%2Fcv85y5p%2FCMEqbcAIdo6wNzgIJx1KaQRTMlJzJCBaj8iURf3qGKM%2B6%2Bmkxg9tUOx%2Fgb%2FSnJ33dB0s8DVHZErheKR%2FUXIEeds9K8L6ALEbxgWIn4nwjthK4SZq36z9xCxfKRMKin2dUGOqUBW%2Fk8srJ2eTN25ecAQDgtwiQtUEVJVtN44%2Fd%2BGnxq3L6tMhRBbN%2BsOG2%2BLPzxV6IUQJ1y3dGJqt7%2FXye57V9cU8BZJsIQq6o7xpyUrLHy1ETqJtj5BSsKBZGP5FqP8BOpvrG8O1hKkXx41VylOciqybuWKdlC5%2BDK5JwNt%2Fcpw%2FjgO7Zk%2BOQes%2BLyOSGeDZSNBZR%2FQY3YG2QSntaUpDOQ7w%2Fn6huD&X-Amz-Signature=549318201ee2a3d0e606bbd5e48ed41a5f53fc1d844a3044c049273752172ee2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RSOB62VL%2F20260925%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260925T131535Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECMaCXVzLXdlc3QtMiJGMEQCIDBsvt5K1ZozMeE5rkYhoHm0PTLU5qwIudaM0q6Cbz3GAiA2JJuiW4g4ogpGTSJnukjVH%2FC7EjyUbs8JIiYe%2FkyZGyqIBAjs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMpLdUOLaemsiY%2FKugKtwDPkcwjwvoR0MCPaP0CrV6VOSrYQ76VXG0oyaRixND0PtS%2BWSSbWpbGFxnwZ9Np7eZAk16znOkFcEkzFIqGQfffxYV1g%2B3GlV4c6KJ%2Bs6Q51a4WBSpNFAfiZTIP4FFhucaCa3ESx5k2gxiTNcW%2Boxi2%2FwaekDQmho03LEFdowg7brX3pxg6RUSIPBKLtyOM0%2BWm2Iqmh5Pk7tAHk5vo7f8wDX3MhBMY3wynh531mFyt9dw97Cs%2Fplq6egj2cIAbophoaY97Pb1LlU9A2AZjdVyrXK1i97lAQhqMg7G2CfLfdUOB2hP3Rru3fCRoB7WxhxZjvOrh01%2FQjmUqxj5PNR9m9cJd5G3RfZ1dA1Kv3d4%2FZNY65AixChPtp%2BHYDPhvm0fxN9DXJ%2B2K1ultbJ8nWpCQvCUj9AKUMCnyZUYkaRCM4GA3fKZIZwNuqEuXexjmz%2B0ND2qHBlem3LhRrGQhtKG%2Fq1Iot%2BeNnkXs19r69zEMY68iiqF69bHnEgr1kwTZz8AgibchyHcHnN5qUq7FB4W8S7%2FNhGPV52GiILDyFL%2FLMDaBdQhCXxGweygGoXU9tDCfSjPIf0kRTkbYLrqSsaFZ0tJA%2FIz%2BSZDrFPmFpgWVEMqDvyKDGy5ZUjNx64w0qnZ1QY6pgEobLCEumbHTVxGkAJQurYpEAcqab48e6TMBbuQkbDglN7Oi%2FxcYY9OsBsr1sBqOQBP88XEZ%2FbitaAjYkFBx29fRJJGeDoDwKCuBru1vzGqUbidRt7jRJw6ThoUi8xONYcqwMVYw8MR7%2FgShtm2ZGbOFKPmZyYS9AVRtYfX%2FzlKNyj8ylnbbgJO0rzViFRqsEe3%2FMMykLD1uOothvA1657zJV7DOmEJ&X-Amz-Signature=4a09847abd2d1ff3077c753c439b39c343ed9410fe8c5c7415286b3e87532a37&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XHGL3SQ7%2F20260925%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260925T131537Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECMaCXVzLXdlc3QtMiJGMEQCIFPnxFJBBxM74STyDZc6BO5v6w3UNSRMtG3kSdefEbVCAiBjyYIbK3Jmq0xConWYkKrNEYKxFi1HhlLIgmsBj2HL2yqIBAjs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMn9ZTLM29Ep9LYXCzKtwDRBEhQa%2FPepVo4%2Bxak3dgl8scFrHZYUbGZQ%2B2fTrlNyp3XWRfYTQ7BFVn0OvagSXGCF6L56Lu5ZH3ydiy0ESX2%2B1i0NrD565JPMsSbPKwGprmOzKaJGqhVU%2BeFPWlSaSI2P8f6%2Bsyw2MeO3zORGJkaCFm9Hi%2BjSs0BGIv7r4uqvYXVsKYpQCr9%2BdKKTHGGxgtE1L3gR3SL8RK%2F%2BEct%2F5BmDTdeulWTVna%2FXW8Xfd05LLo2NbMS7GwkpyhdkcxfikhYli2ZhCVnExVSLaznR61%2BEFpEDbBfX%2Bxa4xmaWplBOAAktV3hv95BOIp%2FoWw2JIvXG2VPLhfNs2qXHxTSVqNlJF%2FSPH4Uohne1nwlg4fnbYgJPg93Hym9CW8EcJooLBwgR2hMmjTPpoPFFeuxCaI96ACJmff1AYLfWK0S%2F5aSFhe%2BdtljmiumPgHlYEK1qbiHqtqTNw8uzqa1%2FoUE3kCGw73SxTaJGhx4LodM4ZZZ8ffbNVeuyoX9iUO%2F%2FBcsXdCrMqUN8a7IoCd%2BmP1pkolD7yk8Oabm%2FB%2BNkvWBgThIHMGp%2FZDQtXXFGYPg2o0McHq8CW9iH3YQa%2FaloFGZrSn8aK4UmB2at0uQWQV9h2uRzKuxYGploocNZcarAowmKnZ1QY6pgFVDgWM51XCRCa3UYUA3Dm6etAEW%2Fd4CcviTdj6Pj%2BwTqfUjHvVogxHjUzhZ77WS7z%2FjKnLlAhsP7kwnPhiQRrXFdw3Vp4fpNnae9eU4dKGi3XPajn7IycZwUVWIkWi8GP1nKmi6whD1Yu2qnCTuJgvt0BNXq0RAw2v8gsqCo4FcVQiTTZz%2BEvL%2BMUQVu91FmFClLaVK1ABGUSzQYtVRuOgR4zm27pN&X-Amz-Signature=8ee85e8e85d7044f01dbe972469e8272db7202218fc1615a1d2912cbc8a40872&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XHGL3SQ7%2F20260925%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260925T131537Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECMaCXVzLXdlc3QtMiJGMEQCIFPnxFJBBxM74STyDZc6BO5v6w3UNSRMtG3kSdefEbVCAiBjyYIbK3Jmq0xConWYkKrNEYKxFi1HhlLIgmsBj2HL2yqIBAjs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMn9ZTLM29Ep9LYXCzKtwDRBEhQa%2FPepVo4%2Bxak3dgl8scFrHZYUbGZQ%2B2fTrlNyp3XWRfYTQ7BFVn0OvagSXGCF6L56Lu5ZH3ydiy0ESX2%2B1i0NrD565JPMsSbPKwGprmOzKaJGqhVU%2BeFPWlSaSI2P8f6%2Bsyw2MeO3zORGJkaCFm9Hi%2BjSs0BGIv7r4uqvYXVsKYpQCr9%2BdKKTHGGxgtE1L3gR3SL8RK%2F%2BEct%2F5BmDTdeulWTVna%2FXW8Xfd05LLo2NbMS7GwkpyhdkcxfikhYli2ZhCVnExVSLaznR61%2BEFpEDbBfX%2Bxa4xmaWplBOAAktV3hv95BOIp%2FoWw2JIvXG2VPLhfNs2qXHxTSVqNlJF%2FSPH4Uohne1nwlg4fnbYgJPg93Hym9CW8EcJooLBwgR2hMmjTPpoPFFeuxCaI96ACJmff1AYLfWK0S%2F5aSFhe%2BdtljmiumPgHlYEK1qbiHqtqTNw8uzqa1%2FoUE3kCGw73SxTaJGhx4LodM4ZZZ8ffbNVeuyoX9iUO%2F%2FBcsXdCrMqUN8a7IoCd%2BmP1pkolD7yk8Oabm%2FB%2BNkvWBgThIHMGp%2FZDQtXXFGYPg2o0McHq8CW9iH3YQa%2FaloFGZrSn8aK4UmB2at0uQWQV9h2uRzKuxYGploocNZcarAowmKnZ1QY6pgFVDgWM51XCRCa3UYUA3Dm6etAEW%2Fd4CcviTdj6Pj%2BwTqfUjHvVogxHjUzhZ77WS7z%2FjKnLlAhsP7kwnPhiQRrXFdw3Vp4fpNnae9eU4dKGi3XPajn7IycZwUVWIkWi8GP1nKmi6whD1Yu2qnCTuJgvt0BNXq0RAw2v8gsqCo4FcVQiTTZz%2BEvL%2BMUQVu91FmFClLaVK1ABGUSzQYtVRuOgR4zm27pN&X-Amz-Signature=83419c4d41ccd0b393d96fb3accdc8b1999ebf984e76a8211136e18f05841942&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
