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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UDMN6GSL%2F20261031%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261031T141804Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHhyNn8JB%2B5m789mbQIrwxRyrmHKSW1bAgbFaWD9x2xuAiAXsNr0eeYX94Mt09E89g274tcZO7x324ASW394T4yPtSr%2FAwhOEAAaDDYzNzQyMzE4MzgwNSIMlZLa2Mb3LKCocmpsKtwDMNpvcMqBDuXTicBGMRSAMgucYxfgKE2yk7MVmiCEZrC3aGPlSREDg9VE1brVvXbL%2FSa62oq7jA7Xd2rAjrWyMR90wsT1qVWw6K6J%2BtVwkzIpyuBmqz52jZG8fKtd9608oXW6T2G3vb3xyoooxDEcKPXe65lEcxMY4xuEnkEssAkBlqVxsSF693zmBSxrUmbcKYyPw6qCrQ8CXKe3NnVAMUXUSoHw5fDqb53CR%2FUYztjs2PFS%2FjZ0Alpw%2FcZyka5OlrL77DqanULEV0RZSt0ZEhOY%2B3OBYIqDhvD3vcLiK%2Fr7Ghy0ZW4c2WnMlmZs9fziL8aeLe%2F24OcSeAcXjGQrOabOqAAlAIe0%2BaYCyz6UgFIKLoJ1joijdscFqd5Ej8Nb4xp4w3%2BVyTuP6lVAd3glLdA7gwsvBxIrit1Jss5cIb7eIrRtUivwVI6fA5L45wia41KModqVx2LGyYY9xVkbIfsOcJILCRULX41INwnNGW8KiYRhoFMiMm9ulDZJSbKWE7DOokM7VLJSQv2i2L2y8hKVhjOn4vRIJTOxGBx8c4Wq3vhMQTd55k%2Bm1m1QnpeYd2pcvxsXkhSEy7VPWKyr7UJXYJ4t6%2FB%2BoTYvxKHqsWOEAJG6Yyo78gFSbNcwvcOX1wY6pgHhs%2F46mUKkrfRvfNacFuGV3O5IQUaHnt3w4XB6Nm5JwFCt%2B1zezCOHFLqiloX6h%2BYwf1yNarKRBT3kwW9Hf5zkwqVcWt097h%2FpSW%2Bg3MUqtRqw7hf0moRdf8STFLzx4rR4yesPcBtntGzQ03eqwHrekY4ZD7xutyi%2BIav70CBxLL3zN4rVIimLd9PsoCmbwmPT9Q0hiohlh5EJMgRqv0eykQPYt%2Bn7&X-Amz-Signature=a6de366563f30e2c772bf69dfc8f3b055d347b44341a11d32455c332cc6fe3b1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UDMN6GSL%2F20261031%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261031T141804Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHhyNn8JB%2B5m789mbQIrwxRyrmHKSW1bAgbFaWD9x2xuAiAXsNr0eeYX94Mt09E89g274tcZO7x324ASW394T4yPtSr%2FAwhOEAAaDDYzNzQyMzE4MzgwNSIMlZLa2Mb3LKCocmpsKtwDMNpvcMqBDuXTicBGMRSAMgucYxfgKE2yk7MVmiCEZrC3aGPlSREDg9VE1brVvXbL%2FSa62oq7jA7Xd2rAjrWyMR90wsT1qVWw6K6J%2BtVwkzIpyuBmqz52jZG8fKtd9608oXW6T2G3vb3xyoooxDEcKPXe65lEcxMY4xuEnkEssAkBlqVxsSF693zmBSxrUmbcKYyPw6qCrQ8CXKe3NnVAMUXUSoHw5fDqb53CR%2FUYztjs2PFS%2FjZ0Alpw%2FcZyka5OlrL77DqanULEV0RZSt0ZEhOY%2B3OBYIqDhvD3vcLiK%2Fr7Ghy0ZW4c2WnMlmZs9fziL8aeLe%2F24OcSeAcXjGQrOabOqAAlAIe0%2BaYCyz6UgFIKLoJ1joijdscFqd5Ej8Nb4xp4w3%2BVyTuP6lVAd3glLdA7gwsvBxIrit1Jss5cIb7eIrRtUivwVI6fA5L45wia41KModqVx2LGyYY9xVkbIfsOcJILCRULX41INwnNGW8KiYRhoFMiMm9ulDZJSbKWE7DOokM7VLJSQv2i2L2y8hKVhjOn4vRIJTOxGBx8c4Wq3vhMQTd55k%2Bm1m1QnpeYd2pcvxsXkhSEy7VPWKyr7UJXYJ4t6%2FB%2BoTYvxKHqsWOEAJG6Yyo78gFSbNcwvcOX1wY6pgHhs%2F46mUKkrfRvfNacFuGV3O5IQUaHnt3w4XB6Nm5JwFCt%2B1zezCOHFLqiloX6h%2BYwf1yNarKRBT3kwW9Hf5zkwqVcWt097h%2FpSW%2Bg3MUqtRqw7hf0moRdf8STFLzx4rR4yesPcBtntGzQ03eqwHrekY4ZD7xutyi%2BIav70CBxLL3zN4rVIimLd9PsoCmbwmPT9Q0hiohlh5EJMgRqv0eykQPYt%2Bn7&X-Amz-Signature=86927bdedb1dbfd85b75f38397504fe492694a7b4aae62f95965caf7e882ad46&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UDMN6GSL%2F20261031%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261031T141804Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHhyNn8JB%2B5m789mbQIrwxRyrmHKSW1bAgbFaWD9x2xuAiAXsNr0eeYX94Mt09E89g274tcZO7x324ASW394T4yPtSr%2FAwhOEAAaDDYzNzQyMzE4MzgwNSIMlZLa2Mb3LKCocmpsKtwDMNpvcMqBDuXTicBGMRSAMgucYxfgKE2yk7MVmiCEZrC3aGPlSREDg9VE1brVvXbL%2FSa62oq7jA7Xd2rAjrWyMR90wsT1qVWw6K6J%2BtVwkzIpyuBmqz52jZG8fKtd9608oXW6T2G3vb3xyoooxDEcKPXe65lEcxMY4xuEnkEssAkBlqVxsSF693zmBSxrUmbcKYyPw6qCrQ8CXKe3NnVAMUXUSoHw5fDqb53CR%2FUYztjs2PFS%2FjZ0Alpw%2FcZyka5OlrL77DqanULEV0RZSt0ZEhOY%2B3OBYIqDhvD3vcLiK%2Fr7Ghy0ZW4c2WnMlmZs9fziL8aeLe%2F24OcSeAcXjGQrOabOqAAlAIe0%2BaYCyz6UgFIKLoJ1joijdscFqd5Ej8Nb4xp4w3%2BVyTuP6lVAd3glLdA7gwsvBxIrit1Jss5cIb7eIrRtUivwVI6fA5L45wia41KModqVx2LGyYY9xVkbIfsOcJILCRULX41INwnNGW8KiYRhoFMiMm9ulDZJSbKWE7DOokM7VLJSQv2i2L2y8hKVhjOn4vRIJTOxGBx8c4Wq3vhMQTd55k%2Bm1m1QnpeYd2pcvxsXkhSEy7VPWKyr7UJXYJ4t6%2FB%2BoTYvxKHqsWOEAJG6Yyo78gFSbNcwvcOX1wY6pgHhs%2F46mUKkrfRvfNacFuGV3O5IQUaHnt3w4XB6Nm5JwFCt%2B1zezCOHFLqiloX6h%2BYwf1yNarKRBT3kwW9Hf5zkwqVcWt097h%2FpSW%2Bg3MUqtRqw7hf0moRdf8STFLzx4rR4yesPcBtntGzQ03eqwHrekY4ZD7xutyi%2BIav70CBxLL3zN4rVIimLd9PsoCmbwmPT9Q0hiohlh5EJMgRqv0eykQPYt%2Bn7&X-Amz-Signature=2beb6c93a737f5ece4f5c9762e9db740a99ef508d58fffc7d4c19105f30a5935&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R7DCUXVW%2F20261031%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261031T141804Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFuuqgxQ92CGeW3VAJdoV3XJat6xuXq2jEAcOCWpsyOlAiEA4TktFHNU7MDifyuVjGl27alP7vYKkVCkEnBmWIHvUFgq%2FwMIThAAGgw2Mzc0MjMxODM4MDUiDGroeiwwp3Py2kOZ7yrcAyC1GnZ11Ii4Tb%2BXitmLAYNIqGe45%2BdxwLQXLjEJ12oGviH9mzwj8hAqfbVHUihW90XaSYOYlYXE3bmkwl83KttcAdXxLufVtqW%2FwgTKFmwlCbA6bfgGlXNvMStuZlcmd0Tx1apPr%2BqczXZAZFADdIIegXdgLtvvMSEXCL6xdRIX9PNnkPKlvn8BbadtC5v8Ea%2B4KC9aa0LUQ5lYKKuno15heLBAN%2Fd%2BE4afA9DqG91LyTjGAwvCRI71XZItrf49Ci4oKDDJnIphYmWf%2FsnQ0iQC6RtugGwDpty%2Ba4SJX2e6RU9B7IFhnCQxHq2oFM%2FkpeaCUoXZm%2B2ajapLulejh1pTkLAbrnOmS58mZkts0DqqPMeiRHSGrpCG9qIFeY2wP2gPWjVSFmL%2FgTiIEyLm4Vf63k%2B7%2FVHR8Wg6Hirqpe6FVnaRIXxHIkTQULAkxpgTG21RD5hQJNnuwOJEAsyE%2FSOyRSTN%2F1ebCImGLEf6v56ZJwGM9cpEe0uBFApYXZPKiEKpnv0E5SFYSzKLE1e5xiqf1m2tmDOwL0CBU4TQP5J%2BynwMCLugNVgwAjLgGblKZFXeXYhgAJsh9SxrIuhlEeEoIC9RrQXLPieR8NdzBNVcDoEmQYBzgEX3%2BvV5MOjEl9cGOqUBKKAszk78ogZV7FrcutDXRVjfiKpx4cqsXNcklXdBZmpCAJ62SECJ5OxHmvF48h%2BkmwJPrU0oEvCKJpBCpKRV3CBCvyvasT8Tzv11WE1p2TRGAaa0zz8FtXurp8%2B2cTfGDnhqo8i5DqliyUBwbdGzxlEk93Mbje3ksPYDdWSTvJU8OVibpwhCkdFccy5PCehJZYZ%2FEfj1HwW2eLy7NvQmyXDE7%2B71&X-Amz-Signature=5a05aca064ff0640ea4cd3bc5ab765cfb043df8a30985f01bad6eadbab1bb227&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R7DCUXVW%2F20261031%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261031T141804Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFuuqgxQ92CGeW3VAJdoV3XJat6xuXq2jEAcOCWpsyOlAiEA4TktFHNU7MDifyuVjGl27alP7vYKkVCkEnBmWIHvUFgq%2FwMIThAAGgw2Mzc0MjMxODM4MDUiDGroeiwwp3Py2kOZ7yrcAyC1GnZ11Ii4Tb%2BXitmLAYNIqGe45%2BdxwLQXLjEJ12oGviH9mzwj8hAqfbVHUihW90XaSYOYlYXE3bmkwl83KttcAdXxLufVtqW%2FwgTKFmwlCbA6bfgGlXNvMStuZlcmd0Tx1apPr%2BqczXZAZFADdIIegXdgLtvvMSEXCL6xdRIX9PNnkPKlvn8BbadtC5v8Ea%2B4KC9aa0LUQ5lYKKuno15heLBAN%2Fd%2BE4afA9DqG91LyTjGAwvCRI71XZItrf49Ci4oKDDJnIphYmWf%2FsnQ0iQC6RtugGwDpty%2Ba4SJX2e6RU9B7IFhnCQxHq2oFM%2FkpeaCUoXZm%2B2ajapLulejh1pTkLAbrnOmS58mZkts0DqqPMeiRHSGrpCG9qIFeY2wP2gPWjVSFmL%2FgTiIEyLm4Vf63k%2B7%2FVHR8Wg6Hirqpe6FVnaRIXxHIkTQULAkxpgTG21RD5hQJNnuwOJEAsyE%2FSOyRSTN%2F1ebCImGLEf6v56ZJwGM9cpEe0uBFApYXZPKiEKpnv0E5SFYSzKLE1e5xiqf1m2tmDOwL0CBU4TQP5J%2BynwMCLugNVgwAjLgGblKZFXeXYhgAJsh9SxrIuhlEeEoIC9RrQXLPieR8NdzBNVcDoEmQYBzgEX3%2BvV5MOjEl9cGOqUBKKAszk78ogZV7FrcutDXRVjfiKpx4cqsXNcklXdBZmpCAJ62SECJ5OxHmvF48h%2BkmwJPrU0oEvCKJpBCpKRV3CBCvyvasT8Tzv11WE1p2TRGAaa0zz8FtXurp8%2B2cTfGDnhqo8i5DqliyUBwbdGzxlEk93Mbje3ksPYDdWSTvJU8OVibpwhCkdFccy5PCehJZYZ%2FEfj1HwW2eLy7NvQmyXDE7%2B71&X-Amz-Signature=efa3cf5c12705635465589a1fcdc4648e7caac12f144c378fdaa126d3581c661&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R7DCUXVW%2F20261031%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261031T141804Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFuuqgxQ92CGeW3VAJdoV3XJat6xuXq2jEAcOCWpsyOlAiEA4TktFHNU7MDifyuVjGl27alP7vYKkVCkEnBmWIHvUFgq%2FwMIThAAGgw2Mzc0MjMxODM4MDUiDGroeiwwp3Py2kOZ7yrcAyC1GnZ11Ii4Tb%2BXitmLAYNIqGe45%2BdxwLQXLjEJ12oGviH9mzwj8hAqfbVHUihW90XaSYOYlYXE3bmkwl83KttcAdXxLufVtqW%2FwgTKFmwlCbA6bfgGlXNvMStuZlcmd0Tx1apPr%2BqczXZAZFADdIIegXdgLtvvMSEXCL6xdRIX9PNnkPKlvn8BbadtC5v8Ea%2B4KC9aa0LUQ5lYKKuno15heLBAN%2Fd%2BE4afA9DqG91LyTjGAwvCRI71XZItrf49Ci4oKDDJnIphYmWf%2FsnQ0iQC6RtugGwDpty%2Ba4SJX2e6RU9B7IFhnCQxHq2oFM%2FkpeaCUoXZm%2B2ajapLulejh1pTkLAbrnOmS58mZkts0DqqPMeiRHSGrpCG9qIFeY2wP2gPWjVSFmL%2FgTiIEyLm4Vf63k%2B7%2FVHR8Wg6Hirqpe6FVnaRIXxHIkTQULAkxpgTG21RD5hQJNnuwOJEAsyE%2FSOyRSTN%2F1ebCImGLEf6v56ZJwGM9cpEe0uBFApYXZPKiEKpnv0E5SFYSzKLE1e5xiqf1m2tmDOwL0CBU4TQP5J%2BynwMCLugNVgwAjLgGblKZFXeXYhgAJsh9SxrIuhlEeEoIC9RrQXLPieR8NdzBNVcDoEmQYBzgEX3%2BvV5MOjEl9cGOqUBKKAszk78ogZV7FrcutDXRVjfiKpx4cqsXNcklXdBZmpCAJ62SECJ5OxHmvF48h%2BkmwJPrU0oEvCKJpBCpKRV3CBCvyvasT8Tzv11WE1p2TRGAaa0zz8FtXurp8%2B2cTfGDnhqo8i5DqliyUBwbdGzxlEk93Mbje3ksPYDdWSTvJU8OVibpwhCkdFccy5PCehJZYZ%2FEfj1HwW2eLy7NvQmyXDE7%2B71&X-Amz-Signature=ab9546b4f7f3a59ac1ab338a188d80b570bd9ec0c83f6dd2f20b532d8cc5a710&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R7DCUXVW%2F20261031%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261031T141804Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFuuqgxQ92CGeW3VAJdoV3XJat6xuXq2jEAcOCWpsyOlAiEA4TktFHNU7MDifyuVjGl27alP7vYKkVCkEnBmWIHvUFgq%2FwMIThAAGgw2Mzc0MjMxODM4MDUiDGroeiwwp3Py2kOZ7yrcAyC1GnZ11Ii4Tb%2BXitmLAYNIqGe45%2BdxwLQXLjEJ12oGviH9mzwj8hAqfbVHUihW90XaSYOYlYXE3bmkwl83KttcAdXxLufVtqW%2FwgTKFmwlCbA6bfgGlXNvMStuZlcmd0Tx1apPr%2BqczXZAZFADdIIegXdgLtvvMSEXCL6xdRIX9PNnkPKlvn8BbadtC5v8Ea%2B4KC9aa0LUQ5lYKKuno15heLBAN%2Fd%2BE4afA9DqG91LyTjGAwvCRI71XZItrf49Ci4oKDDJnIphYmWf%2FsnQ0iQC6RtugGwDpty%2Ba4SJX2e6RU9B7IFhnCQxHq2oFM%2FkpeaCUoXZm%2B2ajapLulejh1pTkLAbrnOmS58mZkts0DqqPMeiRHSGrpCG9qIFeY2wP2gPWjVSFmL%2FgTiIEyLm4Vf63k%2B7%2FVHR8Wg6Hirqpe6FVnaRIXxHIkTQULAkxpgTG21RD5hQJNnuwOJEAsyE%2FSOyRSTN%2F1ebCImGLEf6v56ZJwGM9cpEe0uBFApYXZPKiEKpnv0E5SFYSzKLE1e5xiqf1m2tmDOwL0CBU4TQP5J%2BynwMCLugNVgwAjLgGblKZFXeXYhgAJsh9SxrIuhlEeEoIC9RrQXLPieR8NdzBNVcDoEmQYBzgEX3%2BvV5MOjEl9cGOqUBKKAszk78ogZV7FrcutDXRVjfiKpx4cqsXNcklXdBZmpCAJ62SECJ5OxHmvF48h%2BkmwJPrU0oEvCKJpBCpKRV3CBCvyvasT8Tzv11WE1p2TRGAaa0zz8FtXurp8%2B2cTfGDnhqo8i5DqliyUBwbdGzxlEk93Mbje3ksPYDdWSTvJU8OVibpwhCkdFccy5PCehJZYZ%2FEfj1HwW2eLy7NvQmyXDE7%2B71&X-Amz-Signature=e4122d3caa6d752dbbdaf8e62ae7ac459359857bdd1954911e3175e43fdd5add&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZKKEFO4A%2F20261031%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261031T141808Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFkn%2FiBgOl%2BCn%2FkiNv4SaXXoczUdYmFTkRBSwT1GnABaAiEAqxZ15pobxBtDN11A4H7sw18JHVjRxI8BfMlzO%2BNZprcq%2FwMITRAAGgw2Mzc0MjMxODM4MDUiDIMaCYl8gL6fDnk%2FDyrcA4RWtbCTr94Ng7zAIVGs2mPqI0vpdGFIlygJppE1618E%2F9metAqpvBYFEeQ7sBGjD0cnG0LGAEd9hKvSFKcoIuwrvj4v2yRqHs0Bscsky2POTACcbS2atlnJmSt2O3SICBhpd5guuG4vGtCbP6VjYpvixtzWcHFTfaJPmmk99XrIwu8rlReXV8zTYbtuHVo4ky9l%2BodqniyoD44C3a7cxsEmgbCfdcGVrzQe3DambmhXKOhmcz9RWtBkc1Q1u1IhTMN8C%2ByT%2BIfbR0JjSZXMEIr0cFg603z5ZSVbGJju2FHwWU5sFzPjAG1Q%2BCJw1nnO8fShBXB7Gc9evUBbCVV7rBjjDtVVqldeJ3PF9CNTfLV69UWWs6cAuUhF7EsRi3ZMLmg3pn50Ux%2BiCyCZykrRx4yhH6oEBIcafMWQQo4ikPEsOGCQu%2B6K0smP0A6GiT7BVMwIJNJDw9g%2BPJ%2FANlHcRZjKEf4qs8v4oId5hdx8TcSZ4fKcFvv24a91KuuepcCqz4vgun5sVqGuaQUz5DsOo3Welobvca4iAeSTH0h09iDuCuTgykMKezxBDapznSOVjO2lgAZCgp7LAETSQq%2FixysOKLgrA3YMY4t4EbSDOKq8Jg3QqNCyg04VSJuEMNvCl9cGOqUBv5dT2CBZtsxXJ1tU2yY0Wmb4gJdQIhGFTc2Qji%2FbJCl71Q%2FOj5NQlImcLbJkJ1jdZ5YYZAA9pCkV1BN6F6Chzp%2F6BZjgwX%2Fn1hotKRGRkUm6O428%2B65ETKt5l2Gy6NFfHJCBwuv1AoF%2B2ri7S8InrwNcpt8XWMdHQkwCRd1AKC5tZNOBQ9lM1zQJWCL%2FPJ4wR9pROwh1R%2BFgpZjWD%2BVcskIgcwcd&X-Amz-Signature=4c5c89c4cfa8d51326625e74771efb702af719b02e22f1ee488e80fa55627411&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WIWMWEEB%2F20261031%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261031T141808Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHuVeT2VPfeUALnK4lUe4QiW4T5nyrw56MJtFOBT6NchAiARL8iKg9VF9tfmLR8W90KlCHr2KS5oKEYDQO95IglAUSr%2FAwhNEAAaDDYzNzQyMzE4MzgwNSIM%2F893Md0bb%2FCcvjAJKtwDMwXUOgnl7eI1H20GDO5mQgfGZYaAj%2B95VSD%2BxuEe81oyskgMo5wMpiwQIr0quOXcDWpqhQ5oJ8f%2B0JkxOswBit1XWKpCB2DOKk5tak3XwDmiqnT6OGEENwwhHkWlszHkZKBC%2FYLmle9yXoMd5sKv2sdwR%2FTzebp6Vr5soypCHgYzYNRGocuUABXlWvBRV8M2L7jNCGkkWSbNeNvdg6WkkGTR58cwoMV243xdCJJpwz62Ffs1tl8m4Oa%2BTnyCH9VmLRDp2YFa0vEy3PheWjQGj2Is6%2FwOb62b0trU99HZ6l52J1gXrYGGtM%2FMPTJpSJ8wy8S7fT7%2Bp4FYeJI3dhKOR3LrpWoWkqIv6jZoGuf8dX1VMyL3j6yFJ8ncSo1nXC4BuV3Rn%2BILOBe%2F3tA1%2FRHR7ZIi2Dgwjj%2B%2ByHOMVrbTttljlga%2FfumH3o3eyb2U1lJab0WZFHicFscQ7rqXUxUK3MC%2FPGKOdWANWY8Vebb811UBCmrsSdyN1EQQ3t%2BJ7wKPyb2PH7zRtifDrz5mE3%2BGOUoMsTNfy0YHtcKD90s%2Fh3UDBK6qSjMQcaY81NJ9FzorMz%2FJg7jx3fflWMTQenmb51oM7ow7DyAtfSgXVUiu8msgClw%2Fp4zWv0KX1xMwv8SX1wY6pgEP6gLO%2FRCHr1r1VCTGiTtcXzW3%2FxqtCMRoU7TXrLwrw67xufYD7tpS3vANZwI3HHSgrQmAI9AqJCOd4wwKFN4HYJ3a5H%2BQzYt3tTjyeNkM8rvTIahk5adKP979XrmtPDuZwCwF5OoHCd8%2F%2BPjtzOFgi7CdXHqgIz1%2FWVxZGQ9ZLjikPwpjmLDhfUj2aWRTxgsUyAz7%2FEGyCIFa6nAL%2FsKA9mAjltAJ&X-Amz-Signature=b3f7230e2056f0b7d58d24dbbba90ecff3042ed16945023c733c9104036e0f9e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WIWMWEEB%2F20261031%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261031T141808Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEIX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHuVeT2VPfeUALnK4lUe4QiW4T5nyrw56MJtFOBT6NchAiARL8iKg9VF9tfmLR8W90KlCHr2KS5oKEYDQO95IglAUSr%2FAwhNEAAaDDYzNzQyMzE4MzgwNSIM%2F893Md0bb%2FCcvjAJKtwDMwXUOgnl7eI1H20GDO5mQgfGZYaAj%2B95VSD%2BxuEe81oyskgMo5wMpiwQIr0quOXcDWpqhQ5oJ8f%2B0JkxOswBit1XWKpCB2DOKk5tak3XwDmiqnT6OGEENwwhHkWlszHkZKBC%2FYLmle9yXoMd5sKv2sdwR%2FTzebp6Vr5soypCHgYzYNRGocuUABXlWvBRV8M2L7jNCGkkWSbNeNvdg6WkkGTR58cwoMV243xdCJJpwz62Ffs1tl8m4Oa%2BTnyCH9VmLRDp2YFa0vEy3PheWjQGj2Is6%2FwOb62b0trU99HZ6l52J1gXrYGGtM%2FMPTJpSJ8wy8S7fT7%2Bp4FYeJI3dhKOR3LrpWoWkqIv6jZoGuf8dX1VMyL3j6yFJ8ncSo1nXC4BuV3Rn%2BILOBe%2F3tA1%2FRHR7ZIi2Dgwjj%2B%2ByHOMVrbTttljlga%2FfumH3o3eyb2U1lJab0WZFHicFscQ7rqXUxUK3MC%2FPGKOdWANWY8Vebb811UBCmrsSdyN1EQQ3t%2BJ7wKPyb2PH7zRtifDrz5mE3%2BGOUoMsTNfy0YHtcKD90s%2Fh3UDBK6qSjMQcaY81NJ9FzorMz%2FJg7jx3fflWMTQenmb51oM7ow7DyAtfSgXVUiu8msgClw%2Fp4zWv0KX1xMwv8SX1wY6pgEP6gLO%2FRCHr1r1VCTGiTtcXzW3%2FxqtCMRoU7TXrLwrw67xufYD7tpS3vANZwI3HHSgrQmAI9AqJCOd4wwKFN4HYJ3a5H%2BQzYt3tTjyeNkM8rvTIahk5adKP979XrmtPDuZwCwF5OoHCd8%2F%2BPjtzOFgi7CdXHqgIz1%2FWVxZGQ9ZLjikPwpjmLDhfUj2aWRTxgsUyAz7%2FEGyCIFa6nAL%2FsKA9mAjltAJ&X-Amz-Signature=b5c82b4ab7c87d7791a6106bc878aa5c7e998ccc4a15280b0ace6070a74e98e2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
