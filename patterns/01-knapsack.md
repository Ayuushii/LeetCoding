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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667ZTO5F55%2F20260805%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260805T103244Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFoaCXVzLXdlc3QtMiJHMEUCIFpB172akwLvC2vnD3OWy3ibqXlhdEM22OJFH47r%2FaY%2FAiEA0xpRA1eOq1Z2tLAVcNcO5uSM9LZelQHpaM9QONSiI18q%2FwMIIxAAGgw2Mzc0MjMxODM4MDUiDLCDULrmK15%2BjmJtmyrcAxWRFAE1FZUczyqj88M4jeXZxliyaPL27J577xLxxD52KzhG7vhIranW6dHYfD3P2LdFE4mIoVw9CeVsjKaXoNwPI0O5XiGvyAfviPyCS%2FjxAPWHyFwkISahk9vTXGZxmZkmZJtFXxYCt56Dlzu6OeLIgU%2B%2FxW0zSChtcQMwIOt86a%2BOODg7PA0ik7LXs%2Fb0YtUPHoJgo3%2FGSUqr50uA2U6CZS1DM9WnimvjWKNTjp5%2BbsuiIlGfnoPCwYa%2FiStAMaBhgS03rSm0jXZHyOXrDndQXwRbqizIGkVwq4GSJQpKg4p33bU4WjV3AMPGuequjJg50s0B5qoTVn4ZYyQ1lM4nmy4ZdEuNbskPqXRZfr%2BL2HMDH9U%2Bq%2FeQKLg2EFi8MfU6SwMu8u2zFe73t7pnLSU0qjCV5n8dZzGbV1mj1XiXCCQnxFhI9m09g1dztrZtEg4BKg7%2F7w80WkxF8Wb7%2B9NNE14iM%2BOTF%2B3VDv1IxLyWzxzYmUDb64g%2BuKmKs4iCzY93Uc%2FzMIrZtOevPyIceKU0kkCO9jElR%2FXz7CjbeEeGeMuHHewL95U%2FP8tkyX%2BvpYD5Y8z9lAM3UCAFpS2zRpMwlHVGqi8G%2B6vYVg4zIqX8TYyQ8w3HPJLHsYE3MI%2BQzNMGOqUBb89K6R4l0L%2Behi8aCNzfBwKYyC%2F4ScSHKqLbnJkJFpX01dGSxIeiL%2BqeMpf3A8KUwYcQBpCjuxCgmkq8Lt3wUyRq6p%2FSJsuKa6LvM6zjqUQ1316nFKqR833pjsEqUTBfULKD%2FdmCAjsE3hK7kcGERTElOemex4ftJ1XjTPgZgkat5x7Kem0F6rZTVZ9b8qNjTDvjPAsQoNgZjeJUA6G6Df4rGJ%2Fp&X-Amz-Signature=b50129ef8d14e72ae8c8707adbfe12ebce7ef45b3abb651e6f6595b7e59ba4cc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667ZTO5F55%2F20260805%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260805T103244Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFoaCXVzLXdlc3QtMiJHMEUCIFpB172akwLvC2vnD3OWy3ibqXlhdEM22OJFH47r%2FaY%2FAiEA0xpRA1eOq1Z2tLAVcNcO5uSM9LZelQHpaM9QONSiI18q%2FwMIIxAAGgw2Mzc0MjMxODM4MDUiDLCDULrmK15%2BjmJtmyrcAxWRFAE1FZUczyqj88M4jeXZxliyaPL27J577xLxxD52KzhG7vhIranW6dHYfD3P2LdFE4mIoVw9CeVsjKaXoNwPI0O5XiGvyAfviPyCS%2FjxAPWHyFwkISahk9vTXGZxmZkmZJtFXxYCt56Dlzu6OeLIgU%2B%2FxW0zSChtcQMwIOt86a%2BOODg7PA0ik7LXs%2Fb0YtUPHoJgo3%2FGSUqr50uA2U6CZS1DM9WnimvjWKNTjp5%2BbsuiIlGfnoPCwYa%2FiStAMaBhgS03rSm0jXZHyOXrDndQXwRbqizIGkVwq4GSJQpKg4p33bU4WjV3AMPGuequjJg50s0B5qoTVn4ZYyQ1lM4nmy4ZdEuNbskPqXRZfr%2BL2HMDH9U%2Bq%2FeQKLg2EFi8MfU6SwMu8u2zFe73t7pnLSU0qjCV5n8dZzGbV1mj1XiXCCQnxFhI9m09g1dztrZtEg4BKg7%2F7w80WkxF8Wb7%2B9NNE14iM%2BOTF%2B3VDv1IxLyWzxzYmUDb64g%2BuKmKs4iCzY93Uc%2FzMIrZtOevPyIceKU0kkCO9jElR%2FXz7CjbeEeGeMuHHewL95U%2FP8tkyX%2BvpYD5Y8z9lAM3UCAFpS2zRpMwlHVGqi8G%2B6vYVg4zIqX8TYyQ8w3HPJLHsYE3MI%2BQzNMGOqUBb89K6R4l0L%2Behi8aCNzfBwKYyC%2F4ScSHKqLbnJkJFpX01dGSxIeiL%2BqeMpf3A8KUwYcQBpCjuxCgmkq8Lt3wUyRq6p%2FSJsuKa6LvM6zjqUQ1316nFKqR833pjsEqUTBfULKD%2FdmCAjsE3hK7kcGERTElOemex4ftJ1XjTPgZgkat5x7Kem0F6rZTVZ9b8qNjTDvjPAsQoNgZjeJUA6G6Df4rGJ%2Fp&X-Amz-Signature=e168399b0917c811b56e0f7b5dfd5d981cdc39a02d1cc76a0b73e869556e82eb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667ZTO5F55%2F20260805%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260805T103244Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFoaCXVzLXdlc3QtMiJHMEUCIFpB172akwLvC2vnD3OWy3ibqXlhdEM22OJFH47r%2FaY%2FAiEA0xpRA1eOq1Z2tLAVcNcO5uSM9LZelQHpaM9QONSiI18q%2FwMIIxAAGgw2Mzc0MjMxODM4MDUiDLCDULrmK15%2BjmJtmyrcAxWRFAE1FZUczyqj88M4jeXZxliyaPL27J577xLxxD52KzhG7vhIranW6dHYfD3P2LdFE4mIoVw9CeVsjKaXoNwPI0O5XiGvyAfviPyCS%2FjxAPWHyFwkISahk9vTXGZxmZkmZJtFXxYCt56Dlzu6OeLIgU%2B%2FxW0zSChtcQMwIOt86a%2BOODg7PA0ik7LXs%2Fb0YtUPHoJgo3%2FGSUqr50uA2U6CZS1DM9WnimvjWKNTjp5%2BbsuiIlGfnoPCwYa%2FiStAMaBhgS03rSm0jXZHyOXrDndQXwRbqizIGkVwq4GSJQpKg4p33bU4WjV3AMPGuequjJg50s0B5qoTVn4ZYyQ1lM4nmy4ZdEuNbskPqXRZfr%2BL2HMDH9U%2Bq%2FeQKLg2EFi8MfU6SwMu8u2zFe73t7pnLSU0qjCV5n8dZzGbV1mj1XiXCCQnxFhI9m09g1dztrZtEg4BKg7%2F7w80WkxF8Wb7%2B9NNE14iM%2BOTF%2B3VDv1IxLyWzxzYmUDb64g%2BuKmKs4iCzY93Uc%2FzMIrZtOevPyIceKU0kkCO9jElR%2FXz7CjbeEeGeMuHHewL95U%2FP8tkyX%2BvpYD5Y8z9lAM3UCAFpS2zRpMwlHVGqi8G%2B6vYVg4zIqX8TYyQ8w3HPJLHsYE3MI%2BQzNMGOqUBb89K6R4l0L%2Behi8aCNzfBwKYyC%2F4ScSHKqLbnJkJFpX01dGSxIeiL%2BqeMpf3A8KUwYcQBpCjuxCgmkq8Lt3wUyRq6p%2FSJsuKa6LvM6zjqUQ1316nFKqR833pjsEqUTBfULKD%2FdmCAjsE3hK7kcGERTElOemex4ftJ1XjTPgZgkat5x7Kem0F6rZTVZ9b8qNjTDvjPAsQoNgZjeJUA6G6Df4rGJ%2Fp&X-Amz-Signature=de1e9b729ec3834401218f7d16a5b36f76e84c010e1a5e2cb4c5d4d846923958&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XJO77PEE%2F20260805%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260805T103244Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFoaCXVzLXdlc3QtMiJIMEYCIQDnf68%2BUyFpIRHLtAPQafo12HMwPIrqus%2Bsr6DFpgTLJAIhANsWZOq7FutY%2FzcCDoqpFT3Xsr7ekpIiHphXIhbKziTwKv8DCCMQABoMNjM3NDIzMTgzODA1IgzaTojG1VXtwRjCCoMq3ANXzaB3FqpC4k%2FWggHszuZhZA75O%2BMsmyFTdnyQ1M2WAQvfqjdwDS2c7YcpG7FK4M6uengdE4IbcZBYuGiWbVyRelis%2FEu%2BI%2ByvhREfQQ9uYVneqDCxr6h%2FQviX029EhuL91Ef%2BUUiHduqPmwbrojLOE8OyYbRJHIP31o5ysrjVZVVMaikHW%2BiTAMD9Tg9W6muagrNXTfHuF0t%2BxTBGrEMyhmO7Q%2FwYr06SDSi2L6Y8%2BnLJbF08KBjWwldvGbA6Gsn7kPyaa1RqGN7SJfc7O44a%2FlC3G70%2FDTa1QsA3ap9FRoJZHi%2FXopFSS73MBgYKUqcRBQpOkhLqyD5el4cjWy0Xuxg%2B92kmgchmvloV7KTophexCPbMIRreVjJY85UKfzMZYfvmEiNDJeNLXWCYaJWejlzZtUWNSS%2FvTugEq6pL8dxVi4%2FkXLgmYDunlxRaIaYfPzOEFYZ6c3VNb%2BLOWEeC4epKauDePPmsl0RsIq359BNTESqi3DjS6kyrPB%2BzusMj0mjzs0lsu2nXXQ9d5PG6wvUsr4T9XLPKOuzhImOPMP6IAqlL%2BtTpO0VHVmKglrsnTIO3JUEwn4ayH8hmGaOIlYfVi%2FNLLi2yPXWoeRMXCxsUC%2BstFxZa7EJB4zDYjszTBjqkAdY%2B619Ma%2FpyCzoYVpOJdw3etWPI4rprcSUZwMTWOxNK1t4xrsQXfpO4gU5wI4S%2B%2BVYdQEt%2FxBcBRNs%2FdURgQqMQx7g%2B6GkGiYlet%2Bqr4W%2BsQk5szsNawL5yI2hEg7n6ZB667g%2FRLXMfcWdVyeWwoNcjRz2nKq1jjED0Mq07C%2BCjygJ2hL5BrfKqkV3vx%2BD62OklbLBmbuKJZy6mJnPv%2F7t2t3xF&X-Amz-Signature=447f5d7f3c70930e3e1fb1bb928c7c8ee42b49819273a5c16be9c2386525f975&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XJO77PEE%2F20260805%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260805T103244Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFoaCXVzLXdlc3QtMiJIMEYCIQDnf68%2BUyFpIRHLtAPQafo12HMwPIrqus%2Bsr6DFpgTLJAIhANsWZOq7FutY%2FzcCDoqpFT3Xsr7ekpIiHphXIhbKziTwKv8DCCMQABoMNjM3NDIzMTgzODA1IgzaTojG1VXtwRjCCoMq3ANXzaB3FqpC4k%2FWggHszuZhZA75O%2BMsmyFTdnyQ1M2WAQvfqjdwDS2c7YcpG7FK4M6uengdE4IbcZBYuGiWbVyRelis%2FEu%2BI%2ByvhREfQQ9uYVneqDCxr6h%2FQviX029EhuL91Ef%2BUUiHduqPmwbrojLOE8OyYbRJHIP31o5ysrjVZVVMaikHW%2BiTAMD9Tg9W6muagrNXTfHuF0t%2BxTBGrEMyhmO7Q%2FwYr06SDSi2L6Y8%2BnLJbF08KBjWwldvGbA6Gsn7kPyaa1RqGN7SJfc7O44a%2FlC3G70%2FDTa1QsA3ap9FRoJZHi%2FXopFSS73MBgYKUqcRBQpOkhLqyD5el4cjWy0Xuxg%2B92kmgchmvloV7KTophexCPbMIRreVjJY85UKfzMZYfvmEiNDJeNLXWCYaJWejlzZtUWNSS%2FvTugEq6pL8dxVi4%2FkXLgmYDunlxRaIaYfPzOEFYZ6c3VNb%2BLOWEeC4epKauDePPmsl0RsIq359BNTESqi3DjS6kyrPB%2BzusMj0mjzs0lsu2nXXQ9d5PG6wvUsr4T9XLPKOuzhImOPMP6IAqlL%2BtTpO0VHVmKglrsnTIO3JUEwn4ayH8hmGaOIlYfVi%2FNLLi2yPXWoeRMXCxsUC%2BstFxZa7EJB4zDYjszTBjqkAdY%2B619Ma%2FpyCzoYVpOJdw3etWPI4rprcSUZwMTWOxNK1t4xrsQXfpO4gU5wI4S%2B%2BVYdQEt%2FxBcBRNs%2FdURgQqMQx7g%2B6GkGiYlet%2Bqr4W%2BsQk5szsNawL5yI2hEg7n6ZB667g%2FRLXMfcWdVyeWwoNcjRz2nKq1jjED0Mq07C%2BCjygJ2hL5BrfKqkV3vx%2BD62OklbLBmbuKJZy6mJnPv%2F7t2t3xF&X-Amz-Signature=5331b082dbd618601f8864990ec2432906ccb5bfbcfcbb1870b498d7d845cf81&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XJO77PEE%2F20260805%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260805T103244Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFoaCXVzLXdlc3QtMiJIMEYCIQDnf68%2BUyFpIRHLtAPQafo12HMwPIrqus%2Bsr6DFpgTLJAIhANsWZOq7FutY%2FzcCDoqpFT3Xsr7ekpIiHphXIhbKziTwKv8DCCMQABoMNjM3NDIzMTgzODA1IgzaTojG1VXtwRjCCoMq3ANXzaB3FqpC4k%2FWggHszuZhZA75O%2BMsmyFTdnyQ1M2WAQvfqjdwDS2c7YcpG7FK4M6uengdE4IbcZBYuGiWbVyRelis%2FEu%2BI%2ByvhREfQQ9uYVneqDCxr6h%2FQviX029EhuL91Ef%2BUUiHduqPmwbrojLOE8OyYbRJHIP31o5ysrjVZVVMaikHW%2BiTAMD9Tg9W6muagrNXTfHuF0t%2BxTBGrEMyhmO7Q%2FwYr06SDSi2L6Y8%2BnLJbF08KBjWwldvGbA6Gsn7kPyaa1RqGN7SJfc7O44a%2FlC3G70%2FDTa1QsA3ap9FRoJZHi%2FXopFSS73MBgYKUqcRBQpOkhLqyD5el4cjWy0Xuxg%2B92kmgchmvloV7KTophexCPbMIRreVjJY85UKfzMZYfvmEiNDJeNLXWCYaJWejlzZtUWNSS%2FvTugEq6pL8dxVi4%2FkXLgmYDunlxRaIaYfPzOEFYZ6c3VNb%2BLOWEeC4epKauDePPmsl0RsIq359BNTESqi3DjS6kyrPB%2BzusMj0mjzs0lsu2nXXQ9d5PG6wvUsr4T9XLPKOuzhImOPMP6IAqlL%2BtTpO0VHVmKglrsnTIO3JUEwn4ayH8hmGaOIlYfVi%2FNLLi2yPXWoeRMXCxsUC%2BstFxZa7EJB4zDYjszTBjqkAdY%2B619Ma%2FpyCzoYVpOJdw3etWPI4rprcSUZwMTWOxNK1t4xrsQXfpO4gU5wI4S%2B%2BVYdQEt%2FxBcBRNs%2FdURgQqMQx7g%2B6GkGiYlet%2Bqr4W%2BsQk5szsNawL5yI2hEg7n6ZB667g%2FRLXMfcWdVyeWwoNcjRz2nKq1jjED0Mq07C%2BCjygJ2hL5BrfKqkV3vx%2BD62OklbLBmbuKJZy6mJnPv%2F7t2t3xF&X-Amz-Signature=1be88405f83abb10a0b755c76a9d73840042446a34c129817c293bf7c31b6858&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XJO77PEE%2F20260805%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260805T103244Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFoaCXVzLXdlc3QtMiJIMEYCIQDnf68%2BUyFpIRHLtAPQafo12HMwPIrqus%2Bsr6DFpgTLJAIhANsWZOq7FutY%2FzcCDoqpFT3Xsr7ekpIiHphXIhbKziTwKv8DCCMQABoMNjM3NDIzMTgzODA1IgzaTojG1VXtwRjCCoMq3ANXzaB3FqpC4k%2FWggHszuZhZA75O%2BMsmyFTdnyQ1M2WAQvfqjdwDS2c7YcpG7FK4M6uengdE4IbcZBYuGiWbVyRelis%2FEu%2BI%2ByvhREfQQ9uYVneqDCxr6h%2FQviX029EhuL91Ef%2BUUiHduqPmwbrojLOE8OyYbRJHIP31o5ysrjVZVVMaikHW%2BiTAMD9Tg9W6muagrNXTfHuF0t%2BxTBGrEMyhmO7Q%2FwYr06SDSi2L6Y8%2BnLJbF08KBjWwldvGbA6Gsn7kPyaa1RqGN7SJfc7O44a%2FlC3G70%2FDTa1QsA3ap9FRoJZHi%2FXopFSS73MBgYKUqcRBQpOkhLqyD5el4cjWy0Xuxg%2B92kmgchmvloV7KTophexCPbMIRreVjJY85UKfzMZYfvmEiNDJeNLXWCYaJWejlzZtUWNSS%2FvTugEq6pL8dxVi4%2FkXLgmYDunlxRaIaYfPzOEFYZ6c3VNb%2BLOWEeC4epKauDePPmsl0RsIq359BNTESqi3DjS6kyrPB%2BzusMj0mjzs0lsu2nXXQ9d5PG6wvUsr4T9XLPKOuzhImOPMP6IAqlL%2BtTpO0VHVmKglrsnTIO3JUEwn4ayH8hmGaOIlYfVi%2FNLLi2yPXWoeRMXCxsUC%2BstFxZa7EJB4zDYjszTBjqkAdY%2B619Ma%2FpyCzoYVpOJdw3etWPI4rprcSUZwMTWOxNK1t4xrsQXfpO4gU5wI4S%2B%2BVYdQEt%2FxBcBRNs%2FdURgQqMQx7g%2B6GkGiYlet%2Bqr4W%2BsQk5szsNawL5yI2hEg7n6ZB667g%2FRLXMfcWdVyeWwoNcjRz2nKq1jjED0Mq07C%2BCjygJ2hL5BrfKqkV3vx%2BD62OklbLBmbuKJZy6mJnPv%2F7t2t3xF&X-Amz-Signature=6c8dc4e22e73b58bf13b4b901480cbee38153463883b237864cf0adb1aca95f2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UHHHAVD7%2F20260805%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260805T103244Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFoaCXVzLXdlc3QtMiJHMEUCIQD52ySrXp%2FoFdS%2FVDW7jSuvLiLPQhG6CwPB3lC9vfrXtgIgQEFZsW1x%2F9kMLn0zdLMLYkICsUpYag1IgQXT%2FyyPArcq%2FwMIIxAAGgw2Mzc0MjMxODM4MDUiDB0B5%2BsfhFa5Czd8mircA9pLBMZY7KLtqbTm8yS%2B26gfoQvxXi%2BXW4buj2yLW5Wuxkh%2F4Qi0ulgBPq6slhi3tmwc22qeorga0VpTU%2BNvmlXX1Hs0GtzzWtpT5glqbseiCQEFjfqIYmkjWOrnX%2BCmu5nbu1GYg%2F%2Fh6RYPve0VfTBK0r1lcdQNJUKOr7rPcshTz%2BBsC7d72Um8tsw%2BsPiX4hAAD1qxdDsXQ24pvlm8eu%2BJUOHzFQL0wIJ%2BTXl2dwAAjSR8Gf8rUdrOuJtNk8tj88BkMx5Tajyi3fEBWs5hhWItt4%2FYOjTVtY%2B3hzSmzRFXBCpJuVCjH7PMfS9rJlCZpXWisY842NlsA9f%2BgKp1qEJ38PtshfH3YYMh6vIOtvl9FfJWBY%2FppMXSEbB31bU8JOuUPG2cAgnlNFy51gzlEifh8DwtHccDT4bKXVX0lYjvlEL5zCVP5L1vwQdsnr9%2BFL7XM8s2KZRYhmaoKBGWUaF%2BcaubGMBGayj%2BXktQpgiVX%2BLA%2Bu98kDDySgU0D7RkVEaK%2Fm1JFO858lN8k8b5tsseJ9CztZAaitZ7vJUGrb9jWArvyMZL%2FBQvKOfntXi%2BVlXhBwf2h%2FrW3GjtyuZOD2IqH3A%2BtMVip%2Fc1UyQBDbIKDWlg%2FRh3D1qXHaKDMIOPzNMGOqUBZ%2B4P1xWnq%2FXHeDjfIb8FYS6Vyn7EOW8LF81l4z0YfNymE%2FbMAmCX7j9K9KNCsLaA3w4XChXL3YXtRBsn4cUkTtU80RkwTaSZaNvyc6vbCVIWr%2FT4%2FHLO5zwIFdfcPT8%2BQwlF11u9bPj9vSR%2Fgn%2Bo8JFQPCFaERaX9kiq%2Bg%2BsYsseqMBLKrP2YnF4zD4a4F%2FeYcErSf53TyxDopGuHem%2BxeTeQC6v&X-Amz-Signature=ac696b4248eb9995114988d7057f1a0ee853be7b8f528927a30fc76bd9e305db&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666XEVVZYL%2F20260805%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260805T103245Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFoaCXVzLXdlc3QtMiJGMEQCIGdY0lqSBlQUa5q7Q%2BcsvtWlhmeW1WtL8oYub6YAplYtAiBJHLaJta7AbH%2Bps%2BPokMOwQviFzDBwRgLRZUJ5EHKVgir%2FAwgjEAAaDDYzNzQyMzE4MzgwNSIMzHhxMGS6xfRtxsxvKtwDhQF3b8%2B7oJq43aippZkn8wf6ifF9PqZfMCLvqrny5Xeybl%2BZ13DSIWj6N1Afqe3fj1W4dVpPzDZCKb5bLfXCChSUQXy41A9CRI0DJAIwHxmyff7bCH4i8wHW4ud2y02bhnP5jBoXWnTP7DSr62YRvEjbw%2FM5uM8BI3eeEGzQn5f0F6XiCjfkF0hP3ugkcAJSkSZhj5zUzG2aFBSOjfjFwtPxIAVu%2BInksiX5Iwi9JLUjV0Fp5D3tgz%2BHngIXIFd5EAb9ZO9U3Ny8K3LfuyoTIKfNRemVjpSX5kgyUpu5vbw8OS4REfj8gTeH33i%2BrhArQmYcdfrve%2Fsd0TLqXkbY%2B02v0bP%2FQ2XhK6IGho4D5VKPkp2oCtzTIJApwRb07DGWT5iyH3CovaUpF6Va1ywAXH%2FfoxkYRGHLqQylrLTzVWye5nfmxuGah25IdiHX1qnUkWgCk11pEFnNfoWRgSOqUZM7jmG4kocd5W8DkYYBxG73DycAxPWRUtNaATQZZoLAEdOHIM9wcVZ89tQ%2FudgUnwqtsGX0S8ldgjbuCBuFCqpvQSiA86SdFRfLlwecDTqD8mgogqHmyhH37HUh4yTctXBp4jz4gEEDCldbauzoDSUelyYanTBK3ZYyF%2BAw35DM0wY6pgESOCXrL6zj4hjukJpExgmDtx%2BlzmYCMzC%2B%2FtG%2FQx5BxBoAuxhKRBjR5QsoFePyqlFPtK7H7%2Bt3gOBUgehtTC5HGs5VdcpdcuqsitkEZK1lFI8ACsJF4FlfXlhMiDQOIobGSNJ3QbHXe1d5kLVGC4mHNDtOWdS0EGVRelF2yeWpxRxFOt5livBqQRnH8cebS0dB1XTivBKHRE50TbNyO1rjbwgXIm%2FW&X-Amz-Signature=cfdaefbd0e3ef7b9219ef32212f2dade88eefbde122516441614df6c325bc669&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666XEVVZYL%2F20260805%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260805T103245Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFoaCXVzLXdlc3QtMiJGMEQCIGdY0lqSBlQUa5q7Q%2BcsvtWlhmeW1WtL8oYub6YAplYtAiBJHLaJta7AbH%2Bps%2BPokMOwQviFzDBwRgLRZUJ5EHKVgir%2FAwgjEAAaDDYzNzQyMzE4MzgwNSIMzHhxMGS6xfRtxsxvKtwDhQF3b8%2B7oJq43aippZkn8wf6ifF9PqZfMCLvqrny5Xeybl%2BZ13DSIWj6N1Afqe3fj1W4dVpPzDZCKb5bLfXCChSUQXy41A9CRI0DJAIwHxmyff7bCH4i8wHW4ud2y02bhnP5jBoXWnTP7DSr62YRvEjbw%2FM5uM8BI3eeEGzQn5f0F6XiCjfkF0hP3ugkcAJSkSZhj5zUzG2aFBSOjfjFwtPxIAVu%2BInksiX5Iwi9JLUjV0Fp5D3tgz%2BHngIXIFd5EAb9ZO9U3Ny8K3LfuyoTIKfNRemVjpSX5kgyUpu5vbw8OS4REfj8gTeH33i%2BrhArQmYcdfrve%2Fsd0TLqXkbY%2B02v0bP%2FQ2XhK6IGho4D5VKPkp2oCtzTIJApwRb07DGWT5iyH3CovaUpF6Va1ywAXH%2FfoxkYRGHLqQylrLTzVWye5nfmxuGah25IdiHX1qnUkWgCk11pEFnNfoWRgSOqUZM7jmG4kocd5W8DkYYBxG73DycAxPWRUtNaATQZZoLAEdOHIM9wcVZ89tQ%2FudgUnwqtsGX0S8ldgjbuCBuFCqpvQSiA86SdFRfLlwecDTqD8mgogqHmyhH37HUh4yTctXBp4jz4gEEDCldbauzoDSUelyYanTBK3ZYyF%2BAw35DM0wY6pgESOCXrL6zj4hjukJpExgmDtx%2BlzmYCMzC%2B%2FtG%2FQx5BxBoAuxhKRBjR5QsoFePyqlFPtK7H7%2Bt3gOBUgehtTC5HGs5VdcpdcuqsitkEZK1lFI8ACsJF4FlfXlhMiDQOIobGSNJ3QbHXe1d5kLVGC4mHNDtOWdS0EGVRelF2yeWpxRxFOt5livBqQRnH8cebS0dB1XTivBKHRE50TbNyO1rjbwgXIm%2FW&X-Amz-Signature=bb6ae3b2a3ec01473712a728e69b369a107743c7b83475c53756cc1916059e19&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
