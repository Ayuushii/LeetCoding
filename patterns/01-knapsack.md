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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S7VEWC7V%2F20260927%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260927T133210Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFUaCXVzLXdlc3QtMiJGMEQCIFINCusGn3F%2BhdpEIEFvwxxeFfjQnFeY%2BzYM2iY1u985AiA%2FLDVpw3PnDHqtEZKN7jZr1xAmLJI7HBFwjs69sU4fACr%2FAwgeEAAaDDYzNzQyMzE4MzgwNSIMuaTJYqnclCN4APSIKtwDz1cKkc77rx9ccO8wJnX5SjgrHNBQe%2B58xElRZMMIVYU3TecYxGqjyAdHsW%2FsUG8bsVVhmD%2FOqNTCtVudfRtVPOqTF3M2fgHuoOpYV4wP7xjBwb0HpRUihgqP7wHB9imn36oUWT6hx0LpZzR%2B2DzxO6YZ8TffqjA176b1iqPn6FV6SV5cRF9d5NP1i4hkOpJYn6Y%2BMPn0XcGwYi97cd2tij9GSOE6Z%2FCmYNciWjLYDPsGzwqr9OhXs9lxPUdNnfR6AHajZrQK41KPHKZes5JdogPa%2F2aVFa%2FVZVs9rJQ%2BOHm86WUaJvd%2FhgLdKODFmu5Kyluh9lnYoqzsmpt7s3zVF457IwhzAd7mCR8F2aOtMdTPJqXILQI%2F7MEgUBy7h%2BwaW56RB%2F0uDiWL7z3lOv%2BIk05OmJP9qb%2FSK7UDeCVYwHrPJeWimjm%2FbfwPDqbych%2FOIVJjKn6E%2BlnMURB1ns4vGx7CT%2BnUl5OF%2BOsEuaIWmGRCkQL7OELgabPYR39BaeQS3U1kot6Vzfw4agrZ%2BxXlbX86kGYIUTJ4Q7j%2FddZZ3b2eyGU%2BYiT0CZS%2FaP660un24ml%2F3qo9E0BTDTJnIAMaIMFDLphyHdnpjpCLIcRmI82de4xFMf1A0oO5RUMwqafk1QY6pgFGdE1wULcVEmkwX1g07ZS%2FKdC5wFVgpxRyeWAhtTFBZuSxyVwYFSWAtx4IwiUoI%2BfkE60LwiCEKqaTvEi6M532az7jRxn1CafVrtWCopskFDayIvUerTSBtiJgDI8dKWOzlBsk6F5zGaI5HG0dZMCAeGCbgzVHLXI%2BiyTO%2Fp4TNix3kmOWDeGTAgLto6qmYfnX8WUL9bNH7ysemyv5kGN3ZtESr4cO&X-Amz-Signature=5a1e72a0eabb8e221ed3654f4f0965026aab4ad99b315debd911be50da1f06b6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S7VEWC7V%2F20260927%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260927T133210Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFUaCXVzLXdlc3QtMiJGMEQCIFINCusGn3F%2BhdpEIEFvwxxeFfjQnFeY%2BzYM2iY1u985AiA%2FLDVpw3PnDHqtEZKN7jZr1xAmLJI7HBFwjs69sU4fACr%2FAwgeEAAaDDYzNzQyMzE4MzgwNSIMuaTJYqnclCN4APSIKtwDz1cKkc77rx9ccO8wJnX5SjgrHNBQe%2B58xElRZMMIVYU3TecYxGqjyAdHsW%2FsUG8bsVVhmD%2FOqNTCtVudfRtVPOqTF3M2fgHuoOpYV4wP7xjBwb0HpRUihgqP7wHB9imn36oUWT6hx0LpZzR%2B2DzxO6YZ8TffqjA176b1iqPn6FV6SV5cRF9d5NP1i4hkOpJYn6Y%2BMPn0XcGwYi97cd2tij9GSOE6Z%2FCmYNciWjLYDPsGzwqr9OhXs9lxPUdNnfR6AHajZrQK41KPHKZes5JdogPa%2F2aVFa%2FVZVs9rJQ%2BOHm86WUaJvd%2FhgLdKODFmu5Kyluh9lnYoqzsmpt7s3zVF457IwhzAd7mCR8F2aOtMdTPJqXILQI%2F7MEgUBy7h%2BwaW56RB%2F0uDiWL7z3lOv%2BIk05OmJP9qb%2FSK7UDeCVYwHrPJeWimjm%2FbfwPDqbych%2FOIVJjKn6E%2BlnMURB1ns4vGx7CT%2BnUl5OF%2BOsEuaIWmGRCkQL7OELgabPYR39BaeQS3U1kot6Vzfw4agrZ%2BxXlbX86kGYIUTJ4Q7j%2FddZZ3b2eyGU%2BYiT0CZS%2FaP660un24ml%2F3qo9E0BTDTJnIAMaIMFDLphyHdnpjpCLIcRmI82de4xFMf1A0oO5RUMwqafk1QY6pgFGdE1wULcVEmkwX1g07ZS%2FKdC5wFVgpxRyeWAhtTFBZuSxyVwYFSWAtx4IwiUoI%2BfkE60LwiCEKqaTvEi6M532az7jRxn1CafVrtWCopskFDayIvUerTSBtiJgDI8dKWOzlBsk6F5zGaI5HG0dZMCAeGCbgzVHLXI%2BiyTO%2Fp4TNix3kmOWDeGTAgLto6qmYfnX8WUL9bNH7ysemyv5kGN3ZtESr4cO&X-Amz-Signature=d80569f30bc1ef985d028da9ec6123a8fdb9e67eece561bf94b038e67619652a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S7VEWC7V%2F20260927%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260927T133210Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFUaCXVzLXdlc3QtMiJGMEQCIFINCusGn3F%2BhdpEIEFvwxxeFfjQnFeY%2BzYM2iY1u985AiA%2FLDVpw3PnDHqtEZKN7jZr1xAmLJI7HBFwjs69sU4fACr%2FAwgeEAAaDDYzNzQyMzE4MzgwNSIMuaTJYqnclCN4APSIKtwDz1cKkc77rx9ccO8wJnX5SjgrHNBQe%2B58xElRZMMIVYU3TecYxGqjyAdHsW%2FsUG8bsVVhmD%2FOqNTCtVudfRtVPOqTF3M2fgHuoOpYV4wP7xjBwb0HpRUihgqP7wHB9imn36oUWT6hx0LpZzR%2B2DzxO6YZ8TffqjA176b1iqPn6FV6SV5cRF9d5NP1i4hkOpJYn6Y%2BMPn0XcGwYi97cd2tij9GSOE6Z%2FCmYNciWjLYDPsGzwqr9OhXs9lxPUdNnfR6AHajZrQK41KPHKZes5JdogPa%2F2aVFa%2FVZVs9rJQ%2BOHm86WUaJvd%2FhgLdKODFmu5Kyluh9lnYoqzsmpt7s3zVF457IwhzAd7mCR8F2aOtMdTPJqXILQI%2F7MEgUBy7h%2BwaW56RB%2F0uDiWL7z3lOv%2BIk05OmJP9qb%2FSK7UDeCVYwHrPJeWimjm%2FbfwPDqbych%2FOIVJjKn6E%2BlnMURB1ns4vGx7CT%2BnUl5OF%2BOsEuaIWmGRCkQL7OELgabPYR39BaeQS3U1kot6Vzfw4agrZ%2BxXlbX86kGYIUTJ4Q7j%2FddZZ3b2eyGU%2BYiT0CZS%2FaP660un24ml%2F3qo9E0BTDTJnIAMaIMFDLphyHdnpjpCLIcRmI82de4xFMf1A0oO5RUMwqafk1QY6pgFGdE1wULcVEmkwX1g07ZS%2FKdC5wFVgpxRyeWAhtTFBZuSxyVwYFSWAtx4IwiUoI%2BfkE60LwiCEKqaTvEi6M532az7jRxn1CafVrtWCopskFDayIvUerTSBtiJgDI8dKWOzlBsk6F5zGaI5HG0dZMCAeGCbgzVHLXI%2BiyTO%2Fp4TNix3kmOWDeGTAgLto6qmYfnX8WUL9bNH7ysemyv5kGN3ZtESr4cO&X-Amz-Signature=098fc6adf9ecf9d10089dd00f9166378ab32fb3a7a2ce8c4715e0be018e0427f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YELIFXXG%2F20260927%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260927T133210Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFUaCXVzLXdlc3QtMiJIMEYCIQCwvADh%2FoPPm3NxWvoFh%2FUKQFk3oHIhCcU7q1s4DWdLkwIhAOOk0VotpoWLB9lYasB3y%2B%2B8fuxrPq4OyFHykQUOZVsfKv8DCB4QABoMNjM3NDIzMTgzODA1Igzn3kkfBNwnOIPR0Zoq3AMNf%2BzvYELuhOGMEX5VmwAfxowbncs6H66n%2FNqKzXnNtd6uVmWa9JX%2BKz2b4LKv6W5qtJQgtCUe0hz4cfQxXg1gml%2FdlTpDGSt3lBD471HcK9LynTY4SrPYWMZhLtHtg12dtcmajCdLdvfwLCfhuEzbsP4hcoL49eC%2BioE6tzr2wDcW6BpG%2FJq4okZdBt49gZG0oKo8aCWQKCrZVXKCH%2B9WKejJsW%2F07VK4KKT%2BOETHfsJW3eKz4ild25jewcuQgsApszPyQsN8LZeyZwWLWYaBbGYS02idZBdezw%2BDk8iRTA8ytvNrwMiC5T4ADUxvKELFs0k2byV1M5SjpktPWAxsRNj1iUqZ2HJiHH5aRnvrZLTiB9luMeEuccFOSwyePeFfb8JCr%2FPUoAwN3hpLFEYRiE5N0b8yQ%2B%2F6b5vWQEdOsrAxAgB00EGBmX1ASQc7u5At1Fo2c18wW6x8KB5xJGmShySV%2F0gBJobckEAqqZ%2BZAvYhoAVhbgcmf8s%2BSdw8BI8l18nfg2%2F1whlk4YCf7aZWhmhQySO8Dkw0owbCabIMFkv9TAmheE83MS3bnvxGpMaDJsQaDbmYApjOdQ46bL2IDj8Tb6vHMGI6RPTPTMbKKaSYbTbiLySfhXATzzDkpuTVBjqkAXVDJ9urH1cKp6QV11Q3%2FkOFJu2qE2c%2BIAyiUmCA%2B4oizq%2F9kXAecPJvZQ0I4ofR9XltBOXmQVs5%2BNTNPO3sXBsHdSKZ%2BqOvw8k4aAUSVCfhNRNsZ0mGkgtHwOWreAcyuZzX%2FydrnsGhszp9cXHxBx8ckcHu9aWoYX22M8h6pO2XhCNOGkbe%2FE3KrYiLCeu1K0weCgWG376LUrFw8meqKFnZFGeJ&X-Amz-Signature=ee925b3af6a4056d7486b47f0313288042f2193031fec3425e4db6eb7cb90dae&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YELIFXXG%2F20260927%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260927T133210Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFUaCXVzLXdlc3QtMiJIMEYCIQCwvADh%2FoPPm3NxWvoFh%2FUKQFk3oHIhCcU7q1s4DWdLkwIhAOOk0VotpoWLB9lYasB3y%2B%2B8fuxrPq4OyFHykQUOZVsfKv8DCB4QABoMNjM3NDIzMTgzODA1Igzn3kkfBNwnOIPR0Zoq3AMNf%2BzvYELuhOGMEX5VmwAfxowbncs6H66n%2FNqKzXnNtd6uVmWa9JX%2BKz2b4LKv6W5qtJQgtCUe0hz4cfQxXg1gml%2FdlTpDGSt3lBD471HcK9LynTY4SrPYWMZhLtHtg12dtcmajCdLdvfwLCfhuEzbsP4hcoL49eC%2BioE6tzr2wDcW6BpG%2FJq4okZdBt49gZG0oKo8aCWQKCrZVXKCH%2B9WKejJsW%2F07VK4KKT%2BOETHfsJW3eKz4ild25jewcuQgsApszPyQsN8LZeyZwWLWYaBbGYS02idZBdezw%2BDk8iRTA8ytvNrwMiC5T4ADUxvKELFs0k2byV1M5SjpktPWAxsRNj1iUqZ2HJiHH5aRnvrZLTiB9luMeEuccFOSwyePeFfb8JCr%2FPUoAwN3hpLFEYRiE5N0b8yQ%2B%2F6b5vWQEdOsrAxAgB00EGBmX1ASQc7u5At1Fo2c18wW6x8KB5xJGmShySV%2F0gBJobckEAqqZ%2BZAvYhoAVhbgcmf8s%2BSdw8BI8l18nfg2%2F1whlk4YCf7aZWhmhQySO8Dkw0owbCabIMFkv9TAmheE83MS3bnvxGpMaDJsQaDbmYApjOdQ46bL2IDj8Tb6vHMGI6RPTPTMbKKaSYbTbiLySfhXATzzDkpuTVBjqkAXVDJ9urH1cKp6QV11Q3%2FkOFJu2qE2c%2BIAyiUmCA%2B4oizq%2F9kXAecPJvZQ0I4ofR9XltBOXmQVs5%2BNTNPO3sXBsHdSKZ%2BqOvw8k4aAUSVCfhNRNsZ0mGkgtHwOWreAcyuZzX%2FydrnsGhszp9cXHxBx8ckcHu9aWoYX22M8h6pO2XhCNOGkbe%2FE3KrYiLCeu1K0weCgWG376LUrFw8meqKFnZFGeJ&X-Amz-Signature=d375d7bb88ec299a6172dd0de6abc730713c5d2a87b512a7812442c2e1ada73b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YELIFXXG%2F20260927%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260927T133210Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFUaCXVzLXdlc3QtMiJIMEYCIQCwvADh%2FoPPm3NxWvoFh%2FUKQFk3oHIhCcU7q1s4DWdLkwIhAOOk0VotpoWLB9lYasB3y%2B%2B8fuxrPq4OyFHykQUOZVsfKv8DCB4QABoMNjM3NDIzMTgzODA1Igzn3kkfBNwnOIPR0Zoq3AMNf%2BzvYELuhOGMEX5VmwAfxowbncs6H66n%2FNqKzXnNtd6uVmWa9JX%2BKz2b4LKv6W5qtJQgtCUe0hz4cfQxXg1gml%2FdlTpDGSt3lBD471HcK9LynTY4SrPYWMZhLtHtg12dtcmajCdLdvfwLCfhuEzbsP4hcoL49eC%2BioE6tzr2wDcW6BpG%2FJq4okZdBt49gZG0oKo8aCWQKCrZVXKCH%2B9WKejJsW%2F07VK4KKT%2BOETHfsJW3eKz4ild25jewcuQgsApszPyQsN8LZeyZwWLWYaBbGYS02idZBdezw%2BDk8iRTA8ytvNrwMiC5T4ADUxvKELFs0k2byV1M5SjpktPWAxsRNj1iUqZ2HJiHH5aRnvrZLTiB9luMeEuccFOSwyePeFfb8JCr%2FPUoAwN3hpLFEYRiE5N0b8yQ%2B%2F6b5vWQEdOsrAxAgB00EGBmX1ASQc7u5At1Fo2c18wW6x8KB5xJGmShySV%2F0gBJobckEAqqZ%2BZAvYhoAVhbgcmf8s%2BSdw8BI8l18nfg2%2F1whlk4YCf7aZWhmhQySO8Dkw0owbCabIMFkv9TAmheE83MS3bnvxGpMaDJsQaDbmYApjOdQ46bL2IDj8Tb6vHMGI6RPTPTMbKKaSYbTbiLySfhXATzzDkpuTVBjqkAXVDJ9urH1cKp6QV11Q3%2FkOFJu2qE2c%2BIAyiUmCA%2B4oizq%2F9kXAecPJvZQ0I4ofR9XltBOXmQVs5%2BNTNPO3sXBsHdSKZ%2BqOvw8k4aAUSVCfhNRNsZ0mGkgtHwOWreAcyuZzX%2FydrnsGhszp9cXHxBx8ckcHu9aWoYX22M8h6pO2XhCNOGkbe%2FE3KrYiLCeu1K0weCgWG376LUrFw8meqKFnZFGeJ&X-Amz-Signature=12af6b7aff639f617a9b7acef6564e476f959c2764532e3e19fb0025601e39b9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YELIFXXG%2F20260927%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260927T133210Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFUaCXVzLXdlc3QtMiJIMEYCIQCwvADh%2FoPPm3NxWvoFh%2FUKQFk3oHIhCcU7q1s4DWdLkwIhAOOk0VotpoWLB9lYasB3y%2B%2B8fuxrPq4OyFHykQUOZVsfKv8DCB4QABoMNjM3NDIzMTgzODA1Igzn3kkfBNwnOIPR0Zoq3AMNf%2BzvYELuhOGMEX5VmwAfxowbncs6H66n%2FNqKzXnNtd6uVmWa9JX%2BKz2b4LKv6W5qtJQgtCUe0hz4cfQxXg1gml%2FdlTpDGSt3lBD471HcK9LynTY4SrPYWMZhLtHtg12dtcmajCdLdvfwLCfhuEzbsP4hcoL49eC%2BioE6tzr2wDcW6BpG%2FJq4okZdBt49gZG0oKo8aCWQKCrZVXKCH%2B9WKejJsW%2F07VK4KKT%2BOETHfsJW3eKz4ild25jewcuQgsApszPyQsN8LZeyZwWLWYaBbGYS02idZBdezw%2BDk8iRTA8ytvNrwMiC5T4ADUxvKELFs0k2byV1M5SjpktPWAxsRNj1iUqZ2HJiHH5aRnvrZLTiB9luMeEuccFOSwyePeFfb8JCr%2FPUoAwN3hpLFEYRiE5N0b8yQ%2B%2F6b5vWQEdOsrAxAgB00EGBmX1ASQc7u5At1Fo2c18wW6x8KB5xJGmShySV%2F0gBJobckEAqqZ%2BZAvYhoAVhbgcmf8s%2BSdw8BI8l18nfg2%2F1whlk4YCf7aZWhmhQySO8Dkw0owbCabIMFkv9TAmheE83MS3bnvxGpMaDJsQaDbmYApjOdQ46bL2IDj8Tb6vHMGI6RPTPTMbKKaSYbTbiLySfhXATzzDkpuTVBjqkAXVDJ9urH1cKp6QV11Q3%2FkOFJu2qE2c%2BIAyiUmCA%2B4oizq%2F9kXAecPJvZQ0I4ofR9XltBOXmQVs5%2BNTNPO3sXBsHdSKZ%2BqOvw8k4aAUSVCfhNRNsZ0mGkgtHwOWreAcyuZzX%2FydrnsGhszp9cXHxBx8ckcHu9aWoYX22M8h6pO2XhCNOGkbe%2FE3KrYiLCeu1K0weCgWG376LUrFw8meqKFnZFGeJ&X-Amz-Signature=0264658393360398abe1602dc4d21c7d08ebca7b008d26968c1a34deef1d6e08&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664GHKKDEH%2F20260927%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260927T133211Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFUaCXVzLXdlc3QtMiJGMEQCIERqFvKEBN4UicGTrXoog9vYowraPUVe1HkwKnAyOaBfAiA5xiHPSe097%2ByN0Ibu%2BKlAOCIGSz%2B1%2BJaKssBGhWI5eyr%2FAwgeEAAaDDYzNzQyMzE4MzgwNSIMMJ9lUB9acP0WRi2sKtwD%2F%2B%2FXKWAxz88uqJQyUvaCEZ2hZVQaPE8C5kFNsdBAkttj%2BXoUZ3czzOkFAIraZ%2Fxu7mI73ygzp3kLM5D%2FuBf%2BhCg34JOK9e7sJuLs7BRgILMPWEMjpvH1IA2%2FYySoBEuvy2EvrajjKZEwOCzbrRw%2B9CsfpM023QNEGvf1Bf7Ddk0TcM5BLKGVJ3Rj%2BX4V1S1LrxFIq2eGHEAMerWJV6%2BvXyydEbz%2Bh81FY2a4azQ4pJ0m3gNtKQtVESdXkWGZkVX64cBEZ2qnBfXR8sEoOBnv8Q7iLklNgRpcb5QCsTRz7r3tCL6FIfWdDKQEAKKxQ95BSJD1bYvvcsmyyC9EIcvHLHOAoy0LiLLACIVBImzZdhSg6H3X%2F7WenmaInIR549P9DCHqbTePiEQ77wG9VpFNau0ZevQ1snVmd7dSb92u6UgNLTx%2BSkQ%2BXfsO77AYh1zvPy5cuwG%2FbPCvjHXXI98J6sFbBDrVOyeQCpaFK0CF1CN2OWs0WFWnUxDnS%2B2zWWwZ55uZotbLaj3IKb9QR0ibliMuk6gyQaMgvydxIBVGwiL2BDUWeE6ly3VW%2BccJJ1%2B1W1meOgax6sJZk28FJT8lysb3d65clzTjAx1u%2F4BBbe1Xvmk4opuk70L6RgMwgafk1QY6pgEGRj69hn%2Bna5dMt%2BgO%2B6%2F44nWusqZrZE%2BK37AUIj15EVaflnG4nf39AvRmPkSVah%2F6R4Vi4Gh7SOlZkAEpf0PMUnrQcmf7n3kHIKFtgh25sP%2FR8PUg9Z5yCSdb4lnDO3zHctQgF2F4%2F00GaxfnBamv6fQkhMvoNisWXrBRfgePe4gilyFPjhfHJ1o%2BLFqWQ4h5olvfQu2WrtJ3ASpheZPi6a2fTuK1&X-Amz-Signature=45e157f8c0eaf4ec446f2b330491bf8349028e40debd1926c445b9315e5cf5b3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665XGSL6U5%2F20260927%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260927T133211Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFUaCXVzLXdlc3QtMiJIMEYCIQDyDn2NAsflDNjiP2Oq0p12frtYNF0Dn0IqkRjyaGIv1gIhAK01jUW4s3fsW3gCzXxOm31TUcUaIH0I4yftxIiGkNjLKv8DCB4QABoMNjM3NDIzMTgzODA1Igy%2F8fVUr73ao6c%2BnHkq3APQuZBlFze9NeqV%2FD3tKpTSApf2PXiz4WtHnVvaujKAYGfLH0g04G64N5PHwdcPMIi3Jud7d2YoOtrowrHvjbw1pC9MQk3bkrfwGwd1R9cvwefIYP%2BLq5QX4%2FveKp0DUtZ46kmPE6gj%2BR07bjTs0%2FIR3FidHXv%2BbzC5aB50tZuhQQa1QlBc7RsivQfEtKzUhLZmN%2FOK4uH7ghZXWRmGlaAKg62QJTs66ZeeD6zyyTlbgCD4%2Fa8gdu8kroxDK1yXOUwpHXQKiSJu6Gm7PX0jvMDCrC17IDSBQjlQjfhhCqW3JjE6Rw5R1AQfY%2FahY%2FWOzjbiAocV0bJCww0euiAbexUzvlI8c15At9phQw61lm1urcOF41g2bJk5meXPa55W1e%2FBFKG70sVrFWLXwwMQJnm9bzQxAApVcJ8D0F45dFeMGbX68laXnsSh3KMIL%2BLZ5Wb6LJx0UEJ8IQKoct71dKC9TmSJE2ZBqR%2FcwPvA7JwpvpZRi7Oa0dLrxhZXP%2FpfqPAUBqzpgOHYfTz1iJioBCwBdPOGfCOeNMgoIlEljPpI0eScFfX9H7rY5TPCLaPAsoJS4vdWpHRmuNCJt62Ah%2FY3pOnztZpvk5TwdA%2BTD4gHwZig4f2G6%2FPmXSUptjCeqeTVBjqkAVPXAv2OtBxX51snTRTgk8QA8g4MtJZP1HgX%2FlvwwbOoT%2BtgGXIgER5AmxwloNFsMNw2CmwxIcwgcFdwfbA4NjTgbcx3dOWsp7mg4zKZQaacFYTQbbfG2Fls1eOO1MLFOpYqVQOsEoPlHanFTDlQlEbXA%2BvWxnl%2BP%2FDQGKd0WlTJcN%2F%2B5G7%2Boyx%2Bpr3ek9UXZ%2BGK1UkVJ3EhQdozb8a%2FjqY0DATf&X-Amz-Signature=bf30ad70a317f16f9770f7444842e13f68338b36c7eb2d9e4bea7b9e20dd7632&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665XGSL6U5%2F20260927%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260927T133211Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFUaCXVzLXdlc3QtMiJIMEYCIQDyDn2NAsflDNjiP2Oq0p12frtYNF0Dn0IqkRjyaGIv1gIhAK01jUW4s3fsW3gCzXxOm31TUcUaIH0I4yftxIiGkNjLKv8DCB4QABoMNjM3NDIzMTgzODA1Igy%2F8fVUr73ao6c%2BnHkq3APQuZBlFze9NeqV%2FD3tKpTSApf2PXiz4WtHnVvaujKAYGfLH0g04G64N5PHwdcPMIi3Jud7d2YoOtrowrHvjbw1pC9MQk3bkrfwGwd1R9cvwefIYP%2BLq5QX4%2FveKp0DUtZ46kmPE6gj%2BR07bjTs0%2FIR3FidHXv%2BbzC5aB50tZuhQQa1QlBc7RsivQfEtKzUhLZmN%2FOK4uH7ghZXWRmGlaAKg62QJTs66ZeeD6zyyTlbgCD4%2Fa8gdu8kroxDK1yXOUwpHXQKiSJu6Gm7PX0jvMDCrC17IDSBQjlQjfhhCqW3JjE6Rw5R1AQfY%2FahY%2FWOzjbiAocV0bJCww0euiAbexUzvlI8c15At9phQw61lm1urcOF41g2bJk5meXPa55W1e%2FBFKG70sVrFWLXwwMQJnm9bzQxAApVcJ8D0F45dFeMGbX68laXnsSh3KMIL%2BLZ5Wb6LJx0UEJ8IQKoct71dKC9TmSJE2ZBqR%2FcwPvA7JwpvpZRi7Oa0dLrxhZXP%2FpfqPAUBqzpgOHYfTz1iJioBCwBdPOGfCOeNMgoIlEljPpI0eScFfX9H7rY5TPCLaPAsoJS4vdWpHRmuNCJt62Ah%2FY3pOnztZpvk5TwdA%2BTD4gHwZig4f2G6%2FPmXSUptjCeqeTVBjqkAVPXAv2OtBxX51snTRTgk8QA8g4MtJZP1HgX%2FlvwwbOoT%2BtgGXIgER5AmxwloNFsMNw2CmwxIcwgcFdwfbA4NjTgbcx3dOWsp7mg4zKZQaacFYTQbbfG2Fls1eOO1MLFOpYqVQOsEoPlHanFTDlQlEbXA%2BvWxnl%2BP%2FDQGKd0WlTJcN%2F%2B5G7%2Boyx%2Bpr3ek9UXZ%2BGK1UkVJ3EhQdozb8a%2FjqY0DATf&X-Amz-Signature=bad46c86e8375ebf69261fa30d3762822a6375ae134cd81096802ccf95c75de7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
