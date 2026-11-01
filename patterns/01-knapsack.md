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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T5X2AAVR%2F20261101%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261101T144456Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFm0zKyXSy3TtOjusnfX6Yeoo54N0Nb8MrLUJlcrPes8AiEAwSxjqF1eDdNrKyDuNEB3EXYDdOwprbJMAxokHouMUf0q%2FwMIYhAAGgw2Mzc0MjMxODM4MDUiDO%2BraXU4wKJ773D6CircAxsmlmaHeN9vie2PLnymGCr8djqQwVuGJsYaciiUIEs0dEBbMJJYd3CxLKlDGb1R3jcFyHhaxK7qSGUhKkto%2F8ASvPMqSuydTOslg2eex7HTwSGmUWapO%2B6tcKzJmX8T%2BwW%2B0GZt2nM0Kw8S5Uq1DPFt0S8FcV9RIGCf0ceOEH%2FrB7GeFfsGWsDnkweOmu%2BADcMiDBCIr7P69zbGd7QVhh%2F1u2%2FFPzt69czjZQkFuLsuByqcCerOE%2Bh3vs3KC79K5dsmJEJrH0dycDo22CEiutLgNgPEO2akjlpwKgwlq1Y%2FA8dJfrFFqP9ZeVc5QsAVlxTtBIpl0e%2Bk8CcWSo8%2BNSYw%2Fwu9nP6H6zcFd%2BRpyZ5h9w1DUj4DbzzqjNw5xz0DBMcJUFgJxSYmh%2F7g3PIZp6nI3C29uxa9iHuzbVcefdv0VqeQvJIO7SoJoN6GZjiDvnk8Exgkvn%2FopxG9MzTCOveT47iiCG1iUegSsZsmxeVuih6%2FVR3aTaowEe5ZAknvoUEBHHTCWoswSjVgcIr9WQQD4mfuikNih26QCW4yVkzW3tG61C7z7TSEXpCkWnT0XYBYZRBTL21rsYIwaYJQ%2BU6%2FbhcaydEypZhIReEW4VWlfZgDlFwsRVYb0r03MJOUnNcGOqUBCXbogUBM84qXgZj94wr1qijRKnc%2Ftox%2Fv4Uu%2FOXyHL5h5oDUmunMKbprZnkW9Do53uWHz%2BBqK4pCzD7LbVEgocg7sbJTgwQYNtTk%2BMjHRQ7psAcHx3NmIR%2BpnB0I6cPkSrJLR63grfVzFIuHeHQ6ie2%2BSSIEgMY%2FoQXtwQohnhSxZzqzvVLssi7kaztCk4rWpfZK8xWcygoGPnaP2FeFHW5zsakc&X-Amz-Signature=a7538135342ba5c01adc41068705a7821d1c137e6c21ca896f07ec927ae39549&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T5X2AAVR%2F20261101%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261101T144456Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFm0zKyXSy3TtOjusnfX6Yeoo54N0Nb8MrLUJlcrPes8AiEAwSxjqF1eDdNrKyDuNEB3EXYDdOwprbJMAxokHouMUf0q%2FwMIYhAAGgw2Mzc0MjMxODM4MDUiDO%2BraXU4wKJ773D6CircAxsmlmaHeN9vie2PLnymGCr8djqQwVuGJsYaciiUIEs0dEBbMJJYd3CxLKlDGb1R3jcFyHhaxK7qSGUhKkto%2F8ASvPMqSuydTOslg2eex7HTwSGmUWapO%2B6tcKzJmX8T%2BwW%2B0GZt2nM0Kw8S5Uq1DPFt0S8FcV9RIGCf0ceOEH%2FrB7GeFfsGWsDnkweOmu%2BADcMiDBCIr7P69zbGd7QVhh%2F1u2%2FFPzt69czjZQkFuLsuByqcCerOE%2Bh3vs3KC79K5dsmJEJrH0dycDo22CEiutLgNgPEO2akjlpwKgwlq1Y%2FA8dJfrFFqP9ZeVc5QsAVlxTtBIpl0e%2Bk8CcWSo8%2BNSYw%2Fwu9nP6H6zcFd%2BRpyZ5h9w1DUj4DbzzqjNw5xz0DBMcJUFgJxSYmh%2F7g3PIZp6nI3C29uxa9iHuzbVcefdv0VqeQvJIO7SoJoN6GZjiDvnk8Exgkvn%2FopxG9MzTCOveT47iiCG1iUegSsZsmxeVuih6%2FVR3aTaowEe5ZAknvoUEBHHTCWoswSjVgcIr9WQQD4mfuikNih26QCW4yVkzW3tG61C7z7TSEXpCkWnT0XYBYZRBTL21rsYIwaYJQ%2BU6%2FbhcaydEypZhIReEW4VWlfZgDlFwsRVYb0r03MJOUnNcGOqUBCXbogUBM84qXgZj94wr1qijRKnc%2Ftox%2Fv4Uu%2FOXyHL5h5oDUmunMKbprZnkW9Do53uWHz%2BBqK4pCzD7LbVEgocg7sbJTgwQYNtTk%2BMjHRQ7psAcHx3NmIR%2BpnB0I6cPkSrJLR63grfVzFIuHeHQ6ie2%2BSSIEgMY%2FoQXtwQohnhSxZzqzvVLssi7kaztCk4rWpfZK8xWcygoGPnaP2FeFHW5zsakc&X-Amz-Signature=014f050cd25d487e40539cc868c025dbb2d94284a51f7ff69587dbb04968d07c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T5X2AAVR%2F20261101%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261101T144456Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFm0zKyXSy3TtOjusnfX6Yeoo54N0Nb8MrLUJlcrPes8AiEAwSxjqF1eDdNrKyDuNEB3EXYDdOwprbJMAxokHouMUf0q%2FwMIYhAAGgw2Mzc0MjMxODM4MDUiDO%2BraXU4wKJ773D6CircAxsmlmaHeN9vie2PLnymGCr8djqQwVuGJsYaciiUIEs0dEBbMJJYd3CxLKlDGb1R3jcFyHhaxK7qSGUhKkto%2F8ASvPMqSuydTOslg2eex7HTwSGmUWapO%2B6tcKzJmX8T%2BwW%2B0GZt2nM0Kw8S5Uq1DPFt0S8FcV9RIGCf0ceOEH%2FrB7GeFfsGWsDnkweOmu%2BADcMiDBCIr7P69zbGd7QVhh%2F1u2%2FFPzt69czjZQkFuLsuByqcCerOE%2Bh3vs3KC79K5dsmJEJrH0dycDo22CEiutLgNgPEO2akjlpwKgwlq1Y%2FA8dJfrFFqP9ZeVc5QsAVlxTtBIpl0e%2Bk8CcWSo8%2BNSYw%2Fwu9nP6H6zcFd%2BRpyZ5h9w1DUj4DbzzqjNw5xz0DBMcJUFgJxSYmh%2F7g3PIZp6nI3C29uxa9iHuzbVcefdv0VqeQvJIO7SoJoN6GZjiDvnk8Exgkvn%2FopxG9MzTCOveT47iiCG1iUegSsZsmxeVuih6%2FVR3aTaowEe5ZAknvoUEBHHTCWoswSjVgcIr9WQQD4mfuikNih26QCW4yVkzW3tG61C7z7TSEXpCkWnT0XYBYZRBTL21rsYIwaYJQ%2BU6%2FbhcaydEypZhIReEW4VWlfZgDlFwsRVYb0r03MJOUnNcGOqUBCXbogUBM84qXgZj94wr1qijRKnc%2Ftox%2Fv4Uu%2FOXyHL5h5oDUmunMKbprZnkW9Do53uWHz%2BBqK4pCzD7LbVEgocg7sbJTgwQYNtTk%2BMjHRQ7psAcHx3NmIR%2BpnB0I6cPkSrJLR63grfVzFIuHeHQ6ie2%2BSSIEgMY%2FoQXtwQohnhSxZzqzvVLssi7kaztCk4rWpfZK8xWcygoGPnaP2FeFHW5zsakc&X-Amz-Signature=d30c6b3b2c912b5cc83a1ca00fd662fae90e3c94faba99d94e07a3b3d4c44a3b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46655HE2CLF%2F20261101%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261101T144456Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBjFbyqG7Z42iQz59qPee3efgAjNY%2BlBAy5SrWjABSCdAiEAuQixtHwLqoVDXCj7brGrjF5svHg2aEhUokCCHah8u%2FMq%2FwMIYxAAGgw2Mzc0MjMxODM4MDUiDJsxmCf%2BRtZvGaljvircA%2BZe27TWhfbftNfXRfYxBxajLoo4sbeyR9KWbCK2RuUU7aOVMVu3X%2BtDCwRZMMGK6t2538CKwEmNAdLnGmYX%2BildYoXL0rGCgxnhnqq2SrMh3CtLe3ghhfoJT%2FxDoB6DL4i%2BQF7LdVhX7bgEUCbhICE8E%2B1UFJGobac3bqAwfN4ath1ReS2uKEGTNiHu28hrRCd2c71RiLmU%2B%2BKVhV%2FFM9wztZxgRgMfagc%2BmfhGhCGs5Q1dRSrO94N8dV9tL9L8ubSJGFdWRXGuKbcTx%2F7l5DogkeuHFFiRe4C27IXp%2FvwtreKTabDnx2zaMF8AhOtQkz2%2BTRREMJ3R%2BG0Gzj9J9cum8TBYSIyg0NrTl9HQUsMqtuhPWi4wOwpHXIzjJwaT8zTF2WyGIptguP30wfgdA6ucu7qSvHTlxjvR7IL3izqFx4rSQJjth2UM3ha%2BJ9mn8BMTDdf3ESZ2FXvJZQO%2FoQHbRqp2BBa0Nl80ageiu9gGli%2F0bR17M8nsoMt3uCQKPvMUnPwnzmv9B3CwIIEDwcgcfmNwDLtya3dbCwup71%2FpNVqzRWkE5PUHScwOZgzkBUEL1NClmvckV28SfXdufcR1AK45Sa3XJnSrLCFoZhRn9pkIxkP1eIjjtKJRMMySnNcGOqUB2cQBBPs0ZIC6dpcLQPyae67BAylaJGHfqkoHEVycQ92SY8hjL7cP%2F%2FrO8yXUh84FTUBonIOjpapiW1BJi2LueL7%2FM2wP04sX3ca6Z%2FRsjjPhT5nlYswW419aXpEv3m33vqiNUfEa6oX5hDP6hWyPJxF2IENNtkopIBTQLQJLnZRKTGdRo9UO6Rvj%2BcaG%2BEAhCD5aF7%2BxiLsdAzdgpsUgzns4kx5k&X-Amz-Signature=473502be01c2bcb9eeb43a8347f7b082553f66b44fc57a4d25c12ca24c358e5f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46655HE2CLF%2F20261101%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261101T144456Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBjFbyqG7Z42iQz59qPee3efgAjNY%2BlBAy5SrWjABSCdAiEAuQixtHwLqoVDXCj7brGrjF5svHg2aEhUokCCHah8u%2FMq%2FwMIYxAAGgw2Mzc0MjMxODM4MDUiDJsxmCf%2BRtZvGaljvircA%2BZe27TWhfbftNfXRfYxBxajLoo4sbeyR9KWbCK2RuUU7aOVMVu3X%2BtDCwRZMMGK6t2538CKwEmNAdLnGmYX%2BildYoXL0rGCgxnhnqq2SrMh3CtLe3ghhfoJT%2FxDoB6DL4i%2BQF7LdVhX7bgEUCbhICE8E%2B1UFJGobac3bqAwfN4ath1ReS2uKEGTNiHu28hrRCd2c71RiLmU%2B%2BKVhV%2FFM9wztZxgRgMfagc%2BmfhGhCGs5Q1dRSrO94N8dV9tL9L8ubSJGFdWRXGuKbcTx%2F7l5DogkeuHFFiRe4C27IXp%2FvwtreKTabDnx2zaMF8AhOtQkz2%2BTRREMJ3R%2BG0Gzj9J9cum8TBYSIyg0NrTl9HQUsMqtuhPWi4wOwpHXIzjJwaT8zTF2WyGIptguP30wfgdA6ucu7qSvHTlxjvR7IL3izqFx4rSQJjth2UM3ha%2BJ9mn8BMTDdf3ESZ2FXvJZQO%2FoQHbRqp2BBa0Nl80ageiu9gGli%2F0bR17M8nsoMt3uCQKPvMUnPwnzmv9B3CwIIEDwcgcfmNwDLtya3dbCwup71%2FpNVqzRWkE5PUHScwOZgzkBUEL1NClmvckV28SfXdufcR1AK45Sa3XJnSrLCFoZhRn9pkIxkP1eIjjtKJRMMySnNcGOqUB2cQBBPs0ZIC6dpcLQPyae67BAylaJGHfqkoHEVycQ92SY8hjL7cP%2F%2FrO8yXUh84FTUBonIOjpapiW1BJi2LueL7%2FM2wP04sX3ca6Z%2FRsjjPhT5nlYswW419aXpEv3m33vqiNUfEa6oX5hDP6hWyPJxF2IENNtkopIBTQLQJLnZRKTGdRo9UO6Rvj%2BcaG%2BEAhCD5aF7%2BxiLsdAzdgpsUgzns4kx5k&X-Amz-Signature=9c3d7019f0ed57316503c420932a259dbda953502e45e963bab115beb5c0462f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46655HE2CLF%2F20261101%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261101T144456Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBjFbyqG7Z42iQz59qPee3efgAjNY%2BlBAy5SrWjABSCdAiEAuQixtHwLqoVDXCj7brGrjF5svHg2aEhUokCCHah8u%2FMq%2FwMIYxAAGgw2Mzc0MjMxODM4MDUiDJsxmCf%2BRtZvGaljvircA%2BZe27TWhfbftNfXRfYxBxajLoo4sbeyR9KWbCK2RuUU7aOVMVu3X%2BtDCwRZMMGK6t2538CKwEmNAdLnGmYX%2BildYoXL0rGCgxnhnqq2SrMh3CtLe3ghhfoJT%2FxDoB6DL4i%2BQF7LdVhX7bgEUCbhICE8E%2B1UFJGobac3bqAwfN4ath1ReS2uKEGTNiHu28hrRCd2c71RiLmU%2B%2BKVhV%2FFM9wztZxgRgMfagc%2BmfhGhCGs5Q1dRSrO94N8dV9tL9L8ubSJGFdWRXGuKbcTx%2F7l5DogkeuHFFiRe4C27IXp%2FvwtreKTabDnx2zaMF8AhOtQkz2%2BTRREMJ3R%2BG0Gzj9J9cum8TBYSIyg0NrTl9HQUsMqtuhPWi4wOwpHXIzjJwaT8zTF2WyGIptguP30wfgdA6ucu7qSvHTlxjvR7IL3izqFx4rSQJjth2UM3ha%2BJ9mn8BMTDdf3ESZ2FXvJZQO%2FoQHbRqp2BBa0Nl80ageiu9gGli%2F0bR17M8nsoMt3uCQKPvMUnPwnzmv9B3CwIIEDwcgcfmNwDLtya3dbCwup71%2FpNVqzRWkE5PUHScwOZgzkBUEL1NClmvckV28SfXdufcR1AK45Sa3XJnSrLCFoZhRn9pkIxkP1eIjjtKJRMMySnNcGOqUB2cQBBPs0ZIC6dpcLQPyae67BAylaJGHfqkoHEVycQ92SY8hjL7cP%2F%2FrO8yXUh84FTUBonIOjpapiW1BJi2LueL7%2FM2wP04sX3ca6Z%2FRsjjPhT5nlYswW419aXpEv3m33vqiNUfEa6oX5hDP6hWyPJxF2IENNtkopIBTQLQJLnZRKTGdRo9UO6Rvj%2BcaG%2BEAhCD5aF7%2BxiLsdAzdgpsUgzns4kx5k&X-Amz-Signature=1a6bda66ed9df2a6d013511d10e6354c262f10c259eb2285599dd72434e08196&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46655HE2CLF%2F20261101%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261101T144456Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBjFbyqG7Z42iQz59qPee3efgAjNY%2BlBAy5SrWjABSCdAiEAuQixtHwLqoVDXCj7brGrjF5svHg2aEhUokCCHah8u%2FMq%2FwMIYxAAGgw2Mzc0MjMxODM4MDUiDJsxmCf%2BRtZvGaljvircA%2BZe27TWhfbftNfXRfYxBxajLoo4sbeyR9KWbCK2RuUU7aOVMVu3X%2BtDCwRZMMGK6t2538CKwEmNAdLnGmYX%2BildYoXL0rGCgxnhnqq2SrMh3CtLe3ghhfoJT%2FxDoB6DL4i%2BQF7LdVhX7bgEUCbhICE8E%2B1UFJGobac3bqAwfN4ath1ReS2uKEGTNiHu28hrRCd2c71RiLmU%2B%2BKVhV%2FFM9wztZxgRgMfagc%2BmfhGhCGs5Q1dRSrO94N8dV9tL9L8ubSJGFdWRXGuKbcTx%2F7l5DogkeuHFFiRe4C27IXp%2FvwtreKTabDnx2zaMF8AhOtQkz2%2BTRREMJ3R%2BG0Gzj9J9cum8TBYSIyg0NrTl9HQUsMqtuhPWi4wOwpHXIzjJwaT8zTF2WyGIptguP30wfgdA6ucu7qSvHTlxjvR7IL3izqFx4rSQJjth2UM3ha%2BJ9mn8BMTDdf3ESZ2FXvJZQO%2FoQHbRqp2BBa0Nl80ageiu9gGli%2F0bR17M8nsoMt3uCQKPvMUnPwnzmv9B3CwIIEDwcgcfmNwDLtya3dbCwup71%2FpNVqzRWkE5PUHScwOZgzkBUEL1NClmvckV28SfXdufcR1AK45Sa3XJnSrLCFoZhRn9pkIxkP1eIjjtKJRMMySnNcGOqUB2cQBBPs0ZIC6dpcLQPyae67BAylaJGHfqkoHEVycQ92SY8hjL7cP%2F%2FrO8yXUh84FTUBonIOjpapiW1BJi2LueL7%2FM2wP04sX3ca6Z%2FRsjjPhT5nlYswW419aXpEv3m33vqiNUfEa6oX5hDP6hWyPJxF2IENNtkopIBTQLQJLnZRKTGdRo9UO6Rvj%2BcaG%2BEAhCD5aF7%2BxiLsdAzdgpsUgzns4kx5k&X-Amz-Signature=4e9355815e31457f9bd6502521a8055f1869c45e2305bd5d07f771e9dc55894a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WPYGQKQV%2F20261101%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261101T144456Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBOlkH6Qu6Hzbw90CRGrcxocSUwpv3lDRHWBCsmTVRuQAiEAoSc4RjzqN7PMwlQMiy7JdPDmumcbscbg8mXpmFWz4X4q%2FwMIYxAAGgw2Mzc0MjMxODM4MDUiDLzmM3CjPGSP9YwF5CrcA2NBqcpKrm5JQQLFLDy5YErhcQIIqB6QKemsVeGtwhufIYRMEu9b30zYKGVqwBsT50e%2Feh0mzURypImXKNnZEL31%2FnNw0Kt09FjuszvRgEVqOeuT0Q2a3CIWGUouUmdU%2BsdCRPB%2FK4h%2B7xKEevmXZVT01Gt9BAc4KalIRyFhPxynv56AIX3Z83q1GfXAQAAiAuQWLUDFeBygTvoFi26Ymz7p9vHzU9frPqz%2FRg60rBqEeqF194K488sRg80Zvu4lycPYwexz2K0USvRmlObdqyZxuz1xV9RkLMf3JvRHQDzoKqvK2XGQ7tsjVlCpv%2FXL%2B1LIEhUwnAiB4zsK3hntlHNT8d5IH0LMjW4jXNVBcErriBEdTpaQJy4kBoByH3emrEOa60fWHlvp9Or1vqgNjhbDaS8EbRvil4sUQpVozxCkfic%2Ffvlk7nkp%2BEhzee5T2JkkErIwIKriW6LxLdnA7AWj9L4GzyD4EXud02K3jkUS2N%2F410AvfZ98rOvLwARXfDJ2I%2FT49cCQC%2BRHpGPtt16DOs238s8avH5v%2FjkTLrdHqk6MDCJidq5t1fQmK17fqJw7EHaNBcjbNcJgIPo5DnZmNRmMv04PZGOiQk1vNttSifJ79ZS7PGun0Ss8MLeTnNcGOqUB73lfL%2BAUz8bELelubnOBodWs3%2BUB4T4lgGhtCirvCb6OJxsc9u%2FH1uY%2FxKz2gHtzEvmNltWfvD7uFSXtnxTUqF6n6JZKcwpb7quiRzo%2FFcuAnQwEYTjSe9KPDySYsmC8eRPwh3z7FzRAJPJ7Ltjm5LIuy8f6wZO%2BZB%2B0ewcKt7JhMIAEVbJaNUnXDuv5PD64EHyQJhwXA%2BU5A4MxhS9pFIf2kJG%2F&X-Amz-Signature=ca26286c81d5fd335933217fd69ee59e61c8db14388ed31c3ed98a6e09efcca9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZL6CHKFK%2F20261101%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261101T144456Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBG5krRS%2BM7YML5rC9hkIB9AwSPD0PnBBkd64%2BMItV0gAiBj%2BHrqjbDEKL7z7q4FowogjnWYjEtWBUhshxUKMUjTsCr%2FAwhiEAAaDDYzNzQyMzE4MzgwNSIM1lb1YflL8TJ%2BHTUmKtwD8%2F9U7CY%2FPGlNfDciE%2BBZJUCul5m1vqpYzuEefZe92D2ngjyCkKHo%2B3PC4%2BS9qpwvBjsBs2sQ%2BAojZA7MdQZnsIfZTI6HCzvZdQWS3VyIHaENv6iRfSQg5eIQSRm3hck2R6nowGCOU2XXYFJQkvJx%2B0VeiOd%2BjOiQpry9qrWp4SAFjvavk2QyIPoKsoc%2BmIf9SNzzqMQN6KqN5lLyA7DQQrqqq4Mmso87zNxhhTUxWIOt4hAx6dESvoTh7MZFJ9NP3unVlWxmRviCmHM%2FwCwv%2BZ0DrySgXcdBE3XGk12ROcA4QoF69tXqm0Ik9Q0zAMtkXTfHIL81udJ77E%2Fogrt6x%2BhRmS2QTx8DwmSDrOl9G5mbXMUiasi5y7stWrD%2BAI1PsFcyIGIhAHPQSTtgiQkl4Vf%2FD7Vni3JVV8F0%2F9ZIJQSBMZL5006ZQVZj5xkE4PhXW6X7ein38VXMMHYHFn56xaJomq%2FYiR0G7%2FIFJbqJQ8nf8wHASMv%2Fs%2FSFnebrKDIF%2Bw4IFcTmcbbEvqmlQ09jpwLnejBIX9lplusoP%2Fsl6YCRZL7zt9ihIBerqixBKjycG7GqyUGbo8sY%2B4QHExLWWjKe%2B2bCs%2B1OZf0yvOV1oHoEVYxaBMvqEbTU%2F8sw6ZOc1wY6pgHuaxidGb5D2oB%2BCfyf1Vc7oCnetzPbrNSkoUJOFOPaaJIBM7nK%2B39BiWhK3UVZjPIkDnsUEcXy2MTXXZleFDuvkRWS0UVrYGPJU8hbTrHWopZiIY8Esw%2FoCfhK65rfsIrDCeRJsYUtTEFSCOkkO0zHHaLF3ZLN73gwdkQFH5pIawc26pXmwxPv4M0L6ABWTB9ayaDeA5TjpVR6IMUeLTI9HWl2J9l1&X-Amz-Signature=f91b0f09d2f25337dda645848d1be12e0f4fc4d479268e59fed72fa1492f1e8a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZL6CHKFK%2F20261101%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261101T144456Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBG5krRS%2BM7YML5rC9hkIB9AwSPD0PnBBkd64%2BMItV0gAiBj%2BHrqjbDEKL7z7q4FowogjnWYjEtWBUhshxUKMUjTsCr%2FAwhiEAAaDDYzNzQyMzE4MzgwNSIM1lb1YflL8TJ%2BHTUmKtwD8%2F9U7CY%2FPGlNfDciE%2BBZJUCul5m1vqpYzuEefZe92D2ngjyCkKHo%2B3PC4%2BS9qpwvBjsBs2sQ%2BAojZA7MdQZnsIfZTI6HCzvZdQWS3VyIHaENv6iRfSQg5eIQSRm3hck2R6nowGCOU2XXYFJQkvJx%2B0VeiOd%2BjOiQpry9qrWp4SAFjvavk2QyIPoKsoc%2BmIf9SNzzqMQN6KqN5lLyA7DQQrqqq4Mmso87zNxhhTUxWIOt4hAx6dESvoTh7MZFJ9NP3unVlWxmRviCmHM%2FwCwv%2BZ0DrySgXcdBE3XGk12ROcA4QoF69tXqm0Ik9Q0zAMtkXTfHIL81udJ77E%2Fogrt6x%2BhRmS2QTx8DwmSDrOl9G5mbXMUiasi5y7stWrD%2BAI1PsFcyIGIhAHPQSTtgiQkl4Vf%2FD7Vni3JVV8F0%2F9ZIJQSBMZL5006ZQVZj5xkE4PhXW6X7ein38VXMMHYHFn56xaJomq%2FYiR0G7%2FIFJbqJQ8nf8wHASMv%2Fs%2FSFnebrKDIF%2Bw4IFcTmcbbEvqmlQ09jpwLnejBIX9lplusoP%2Fsl6YCRZL7zt9ihIBerqixBKjycG7GqyUGbo8sY%2B4QHExLWWjKe%2B2bCs%2B1OZf0yvOV1oHoEVYxaBMvqEbTU%2F8sw6ZOc1wY6pgHuaxidGb5D2oB%2BCfyf1Vc7oCnetzPbrNSkoUJOFOPaaJIBM7nK%2B39BiWhK3UVZjPIkDnsUEcXy2MTXXZleFDuvkRWS0UVrYGPJU8hbTrHWopZiIY8Esw%2FoCfhK65rfsIrDCeRJsYUtTEFSCOkkO0zHHaLF3ZLN73gwdkQFH5pIawc26pXmwxPv4M0L6ABWTB9ayaDeA5TjpVR6IMUeLTI9HWl2J9l1&X-Amz-Signature=a240047e8ad82931fa4cc6e9fcefef5d054171d379e12b99bf52326e2aea9018&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
