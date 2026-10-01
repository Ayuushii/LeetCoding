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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RTYV7N42%2F20261001%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261001T150623Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCY1rPLsJz5S7YjUE6HksONspF2ypZPHq0Po9GLqeOrjgIhAK5RRh60sOcXvc15SW%2BFeJPesPIjyqcwfu8JXhEoURtlKv8DCH4QABoMNjM3NDIzMTgzODA1IgwyH8r%2FXSIrvkU0FqAq3AOqES7wK8UrCmJE0QfGU1T88iAHujEi3Fmt30%2FeY61xERCGniJUWtyeLNnonAAlkWMI%2BGwVqq2m5Hrj8utOE%2BnnS5MvjQ8az07Uq3jOt6JPmSLWCCiXixl4WwM%2FSE1nhVs0wfLEU9H09uC%2B%2FOxm9FO268h5kQSBUvhtvewBejjLxbOxdiqnqcm%2F%2FH%2BYDy8ZZz80r5TF63rk709QR3Mbc2kTMwXvS77gLzTlMpqV5oJOTjJDcBQ5c7y8%2BjEPT6y3AJ4Mz7J8OJ8shBBCeL0jPvJnTeGoUwRk5ZO2NyU9e4R2K6ziz4O%2BrXR%2BXoXQIK859w7MjLtkMG39WEC2bHWuIiAMJrr6eHwPdRj0weM5MSPcIfeo6Xj5CT3nLCi8m56ccKge6ri%2FJw4RfbhIDC%2FhGS2dQ1m8XJcMyVEHW2sDT1%2B0Mo%2BgYKElsRrtOdBcya2Osh3G0V8%2FXh1CvlhN98g6sDWmVNsJ%2FmaTCqJyZeRxeUR4V9428GJPSIinSxNZ8qAEGDGLpAWbjnatwpEJa1MPQwlio%2F2ZIksI%2Be%2BGI6U3IBt%2BwYB7k74jKQcxHSvTy%2BaI80bf6I5cZ%2FEI%2Ba8SNWfckhH%2BebBNqSkFYrDZvKik8lTjdjxXJMykXWoXtolGrTDUtfnVBjqkAXDb%2B5nqPfzYyLEy8Rfjs6wXMS2xxa8ugdPbEIFen9anQ5gS3kF6V%2FXNley9BVOyC8MCcjcIjYG3Bqxy9BlnwonnVVqZ4%2B3wQdccH8QSxj%2FTMD0wNZAyHHXcFAt4V1jfBprg350Io5N%2BTWEO5iIkJw2NV93YHAFh2aJj477BKSwi9i7JTAdd3tdrH7ZJnkG5BqtTQHrLC%2FR0eluUJ44YpQ3I80RX&X-Amz-Signature=e70db0b0ec61a4b4d2c7378447474b3479ef863785b0dc8a7cc3823179621cb6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RTYV7N42%2F20261001%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261001T150623Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCY1rPLsJz5S7YjUE6HksONspF2ypZPHq0Po9GLqeOrjgIhAK5RRh60sOcXvc15SW%2BFeJPesPIjyqcwfu8JXhEoURtlKv8DCH4QABoMNjM3NDIzMTgzODA1IgwyH8r%2FXSIrvkU0FqAq3AOqES7wK8UrCmJE0QfGU1T88iAHujEi3Fmt30%2FeY61xERCGniJUWtyeLNnonAAlkWMI%2BGwVqq2m5Hrj8utOE%2BnnS5MvjQ8az07Uq3jOt6JPmSLWCCiXixl4WwM%2FSE1nhVs0wfLEU9H09uC%2B%2FOxm9FO268h5kQSBUvhtvewBejjLxbOxdiqnqcm%2F%2FH%2BYDy8ZZz80r5TF63rk709QR3Mbc2kTMwXvS77gLzTlMpqV5oJOTjJDcBQ5c7y8%2BjEPT6y3AJ4Mz7J8OJ8shBBCeL0jPvJnTeGoUwRk5ZO2NyU9e4R2K6ziz4O%2BrXR%2BXoXQIK859w7MjLtkMG39WEC2bHWuIiAMJrr6eHwPdRj0weM5MSPcIfeo6Xj5CT3nLCi8m56ccKge6ri%2FJw4RfbhIDC%2FhGS2dQ1m8XJcMyVEHW2sDT1%2B0Mo%2BgYKElsRrtOdBcya2Osh3G0V8%2FXh1CvlhN98g6sDWmVNsJ%2FmaTCqJyZeRxeUR4V9428GJPSIinSxNZ8qAEGDGLpAWbjnatwpEJa1MPQwlio%2F2ZIksI%2Be%2BGI6U3IBt%2BwYB7k74jKQcxHSvTy%2BaI80bf6I5cZ%2FEI%2Ba8SNWfckhH%2BebBNqSkFYrDZvKik8lTjdjxXJMykXWoXtolGrTDUtfnVBjqkAXDb%2B5nqPfzYyLEy8Rfjs6wXMS2xxa8ugdPbEIFen9anQ5gS3kF6V%2FXNley9BVOyC8MCcjcIjYG3Bqxy9BlnwonnVVqZ4%2B3wQdccH8QSxj%2FTMD0wNZAyHHXcFAt4V1jfBprg350Io5N%2BTWEO5iIkJw2NV93YHAFh2aJj477BKSwi9i7JTAdd3tdrH7ZJnkG5BqtTQHrLC%2FR0eluUJ44YpQ3I80RX&X-Amz-Signature=1d1cf496a9915e1098c0c4189c58195d5f56fb72603e572d740ce84759474803&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RTYV7N42%2F20261001%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261001T150623Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCY1rPLsJz5S7YjUE6HksONspF2ypZPHq0Po9GLqeOrjgIhAK5RRh60sOcXvc15SW%2BFeJPesPIjyqcwfu8JXhEoURtlKv8DCH4QABoMNjM3NDIzMTgzODA1IgwyH8r%2FXSIrvkU0FqAq3AOqES7wK8UrCmJE0QfGU1T88iAHujEi3Fmt30%2FeY61xERCGniJUWtyeLNnonAAlkWMI%2BGwVqq2m5Hrj8utOE%2BnnS5MvjQ8az07Uq3jOt6JPmSLWCCiXixl4WwM%2FSE1nhVs0wfLEU9H09uC%2B%2FOxm9FO268h5kQSBUvhtvewBejjLxbOxdiqnqcm%2F%2FH%2BYDy8ZZz80r5TF63rk709QR3Mbc2kTMwXvS77gLzTlMpqV5oJOTjJDcBQ5c7y8%2BjEPT6y3AJ4Mz7J8OJ8shBBCeL0jPvJnTeGoUwRk5ZO2NyU9e4R2K6ziz4O%2BrXR%2BXoXQIK859w7MjLtkMG39WEC2bHWuIiAMJrr6eHwPdRj0weM5MSPcIfeo6Xj5CT3nLCi8m56ccKge6ri%2FJw4RfbhIDC%2FhGS2dQ1m8XJcMyVEHW2sDT1%2B0Mo%2BgYKElsRrtOdBcya2Osh3G0V8%2FXh1CvlhN98g6sDWmVNsJ%2FmaTCqJyZeRxeUR4V9428GJPSIinSxNZ8qAEGDGLpAWbjnatwpEJa1MPQwlio%2F2ZIksI%2Be%2BGI6U3IBt%2BwYB7k74jKQcxHSvTy%2BaI80bf6I5cZ%2FEI%2Ba8SNWfckhH%2BebBNqSkFYrDZvKik8lTjdjxXJMykXWoXtolGrTDUtfnVBjqkAXDb%2B5nqPfzYyLEy8Rfjs6wXMS2xxa8ugdPbEIFen9anQ5gS3kF6V%2FXNley9BVOyC8MCcjcIjYG3Bqxy9BlnwonnVVqZ4%2B3wQdccH8QSxj%2FTMD0wNZAyHHXcFAt4V1jfBprg350Io5N%2BTWEO5iIkJw2NV93YHAFh2aJj477BKSwi9i7JTAdd3tdrH7ZJnkG5BqtTQHrLC%2FR0eluUJ44YpQ3I80RX&X-Amz-Signature=1263b7368881a02732f1576307833ccde9d43a38cd6a570969978a1313694462&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46656CEYTWE%2F20261001%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261001T150623Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHRHi8eLx0w5ZFGT3K6Hrw8iJnMA2wf5fGIFH14KqabfAiEA%2FaEh2du2Z0AdsTU76fhAm1zOzBP1JGRi%2F4R4%2F1yo6Icq%2FwMIfhAAGgw2Mzc0MjMxODM4MDUiDH4YhokE1Vc7IpQzcCrcA79ziyOBx%2BX0nCJkDtgn%2FJWSW7aTaxfIs6O%2F5h61%2FvL68p1wod8cHixZUoY3NmUE38hXMUrV67xq1h%2FAUcDX2cz0oCI58lN8N778x7Oj4sLT8sfLT48W%2BfP5XszXejno5Nos%2Fm4m3N9iQg4gwXMOwDrcsyne%2BW%2Fz07Nn%2FCB4HXsOiy0Yezkwz%2BKqEAgvI6KSpmMgfeKQy4XV7EAgFEBBIq9Ynxyh1zUPRCLibPt%2FA%2FvcOIHdmAIsgCYxmtO51mq8UYXEgEse04QEIwo5%2FsMiBnb6NGnPSHM7h2k2kFWSXEOKtrhJtNa2faqVN%2Ffiez8UhqIisw%2BdJzupMSzCpDfsSnvWzvDGpHi5SJ%2BuCJDYpwxCtMGunbYcN2D%2FiZ8aPsKRTAv9uu48HePducNRwZ1wi2od5JxjvsbNZdPO8Qa%2FqDGkfjFCQx60fvVZYTLkDMo5NZLMoknl3RYlidmuCy%2Buos%2F4fX4GnTxuHJMzTFVLynBjcVnj6VxSn5n67jm9QwqKMrUIFEySK41iSCTbw5%2Fm7HlrTt1u4eqjxdzI7X5CmO%2BeN9BpJSfIE5WZjXxAYA2bXKE0Ajj0%2Fse4kx%2BsX%2B%2FlGIPwkLoMvPHMUgW4XMbRwmWBnM4C6qXjRZ4048NGMM%2B1%2BdUGOqUBo%2F0WHF4cxQsvg7ka5trpIRmWyDpgyEURugfa84EeG5mEnLh5HU%2BqfD8MXgjf7LAi%2FhdhMlKx4Fzhdbw0vH33yCdwzWfys78i3Nd3mTmNk%2BT6ZXSXg9sYthr841YTdSYiTa%2BS90Nr789tKZWYmb9VSd1O%2BmJD1SD9YHIpoNGgrdpcEhhRGxIKfYPk%2FFAxB5uSjEe5LeOq3NUA1IjoPZ0XTuEewK46&X-Amz-Signature=d6cb2104353ee8dc34235f36604e21acebc16d151cc1e29c34c443a1f286f4bf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46656CEYTWE%2F20261001%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261001T150623Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHRHi8eLx0w5ZFGT3K6Hrw8iJnMA2wf5fGIFH14KqabfAiEA%2FaEh2du2Z0AdsTU76fhAm1zOzBP1JGRi%2F4R4%2F1yo6Icq%2FwMIfhAAGgw2Mzc0MjMxODM4MDUiDH4YhokE1Vc7IpQzcCrcA79ziyOBx%2BX0nCJkDtgn%2FJWSW7aTaxfIs6O%2F5h61%2FvL68p1wod8cHixZUoY3NmUE38hXMUrV67xq1h%2FAUcDX2cz0oCI58lN8N778x7Oj4sLT8sfLT48W%2BfP5XszXejno5Nos%2Fm4m3N9iQg4gwXMOwDrcsyne%2BW%2Fz07Nn%2FCB4HXsOiy0Yezkwz%2BKqEAgvI6KSpmMgfeKQy4XV7EAgFEBBIq9Ynxyh1zUPRCLibPt%2FA%2FvcOIHdmAIsgCYxmtO51mq8UYXEgEse04QEIwo5%2FsMiBnb6NGnPSHM7h2k2kFWSXEOKtrhJtNa2faqVN%2Ffiez8UhqIisw%2BdJzupMSzCpDfsSnvWzvDGpHi5SJ%2BuCJDYpwxCtMGunbYcN2D%2FiZ8aPsKRTAv9uu48HePducNRwZ1wi2od5JxjvsbNZdPO8Qa%2FqDGkfjFCQx60fvVZYTLkDMo5NZLMoknl3RYlidmuCy%2Buos%2F4fX4GnTxuHJMzTFVLynBjcVnj6VxSn5n67jm9QwqKMrUIFEySK41iSCTbw5%2Fm7HlrTt1u4eqjxdzI7X5CmO%2BeN9BpJSfIE5WZjXxAYA2bXKE0Ajj0%2Fse4kx%2BsX%2B%2FlGIPwkLoMvPHMUgW4XMbRwmWBnM4C6qXjRZ4048NGMM%2B1%2BdUGOqUBo%2F0WHF4cxQsvg7ka5trpIRmWyDpgyEURugfa84EeG5mEnLh5HU%2BqfD8MXgjf7LAi%2FhdhMlKx4Fzhdbw0vH33yCdwzWfys78i3Nd3mTmNk%2BT6ZXSXg9sYthr841YTdSYiTa%2BS90Nr789tKZWYmb9VSd1O%2BmJD1SD9YHIpoNGgrdpcEhhRGxIKfYPk%2FFAxB5uSjEe5LeOq3NUA1IjoPZ0XTuEewK46&X-Amz-Signature=508bf9465090cfa7b522932436eeb2ba667f8f51624e595f838a14bbdbcfc6b4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46656CEYTWE%2F20261001%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261001T150623Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHRHi8eLx0w5ZFGT3K6Hrw8iJnMA2wf5fGIFH14KqabfAiEA%2FaEh2du2Z0AdsTU76fhAm1zOzBP1JGRi%2F4R4%2F1yo6Icq%2FwMIfhAAGgw2Mzc0MjMxODM4MDUiDH4YhokE1Vc7IpQzcCrcA79ziyOBx%2BX0nCJkDtgn%2FJWSW7aTaxfIs6O%2F5h61%2FvL68p1wod8cHixZUoY3NmUE38hXMUrV67xq1h%2FAUcDX2cz0oCI58lN8N778x7Oj4sLT8sfLT48W%2BfP5XszXejno5Nos%2Fm4m3N9iQg4gwXMOwDrcsyne%2BW%2Fz07Nn%2FCB4HXsOiy0Yezkwz%2BKqEAgvI6KSpmMgfeKQy4XV7EAgFEBBIq9Ynxyh1zUPRCLibPt%2FA%2FvcOIHdmAIsgCYxmtO51mq8UYXEgEse04QEIwo5%2FsMiBnb6NGnPSHM7h2k2kFWSXEOKtrhJtNa2faqVN%2Ffiez8UhqIisw%2BdJzupMSzCpDfsSnvWzvDGpHi5SJ%2BuCJDYpwxCtMGunbYcN2D%2FiZ8aPsKRTAv9uu48HePducNRwZ1wi2od5JxjvsbNZdPO8Qa%2FqDGkfjFCQx60fvVZYTLkDMo5NZLMoknl3RYlidmuCy%2Buos%2F4fX4GnTxuHJMzTFVLynBjcVnj6VxSn5n67jm9QwqKMrUIFEySK41iSCTbw5%2Fm7HlrTt1u4eqjxdzI7X5CmO%2BeN9BpJSfIE5WZjXxAYA2bXKE0Ajj0%2Fse4kx%2BsX%2B%2FlGIPwkLoMvPHMUgW4XMbRwmWBnM4C6qXjRZ4048NGMM%2B1%2BdUGOqUBo%2F0WHF4cxQsvg7ka5trpIRmWyDpgyEURugfa84EeG5mEnLh5HU%2BqfD8MXgjf7LAi%2FhdhMlKx4Fzhdbw0vH33yCdwzWfys78i3Nd3mTmNk%2BT6ZXSXg9sYthr841YTdSYiTa%2BS90Nr789tKZWYmb9VSd1O%2BmJD1SD9YHIpoNGgrdpcEhhRGxIKfYPk%2FFAxB5uSjEe5LeOq3NUA1IjoPZ0XTuEewK46&X-Amz-Signature=8044239b8f8b3986d9074fda8cb3ef714f8ec5d92769f9fed57ecc272aef181e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46656CEYTWE%2F20261001%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261001T150623Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHRHi8eLx0w5ZFGT3K6Hrw8iJnMA2wf5fGIFH14KqabfAiEA%2FaEh2du2Z0AdsTU76fhAm1zOzBP1JGRi%2F4R4%2F1yo6Icq%2FwMIfhAAGgw2Mzc0MjMxODM4MDUiDH4YhokE1Vc7IpQzcCrcA79ziyOBx%2BX0nCJkDtgn%2FJWSW7aTaxfIs6O%2F5h61%2FvL68p1wod8cHixZUoY3NmUE38hXMUrV67xq1h%2FAUcDX2cz0oCI58lN8N778x7Oj4sLT8sfLT48W%2BfP5XszXejno5Nos%2Fm4m3N9iQg4gwXMOwDrcsyne%2BW%2Fz07Nn%2FCB4HXsOiy0Yezkwz%2BKqEAgvI6KSpmMgfeKQy4XV7EAgFEBBIq9Ynxyh1zUPRCLibPt%2FA%2FvcOIHdmAIsgCYxmtO51mq8UYXEgEse04QEIwo5%2FsMiBnb6NGnPSHM7h2k2kFWSXEOKtrhJtNa2faqVN%2Ffiez8UhqIisw%2BdJzupMSzCpDfsSnvWzvDGpHi5SJ%2BuCJDYpwxCtMGunbYcN2D%2FiZ8aPsKRTAv9uu48HePducNRwZ1wi2od5JxjvsbNZdPO8Qa%2FqDGkfjFCQx60fvVZYTLkDMo5NZLMoknl3RYlidmuCy%2Buos%2F4fX4GnTxuHJMzTFVLynBjcVnj6VxSn5n67jm9QwqKMrUIFEySK41iSCTbw5%2Fm7HlrTt1u4eqjxdzI7X5CmO%2BeN9BpJSfIE5WZjXxAYA2bXKE0Ajj0%2Fse4kx%2BsX%2B%2FlGIPwkLoMvPHMUgW4XMbRwmWBnM4C6qXjRZ4048NGMM%2B1%2BdUGOqUBo%2F0WHF4cxQsvg7ka5trpIRmWyDpgyEURugfa84EeG5mEnLh5HU%2BqfD8MXgjf7LAi%2FhdhMlKx4Fzhdbw0vH33yCdwzWfys78i3Nd3mTmNk%2BT6ZXSXg9sYthr841YTdSYiTa%2BS90Nr789tKZWYmb9VSd1O%2BmJD1SD9YHIpoNGgrdpcEhhRGxIKfYPk%2FFAxB5uSjEe5LeOq3NUA1IjoPZ0XTuEewK46&X-Amz-Signature=03f43a11fd8c2ecc94c3cd1a6bee08be879c06e84c296529da45bdca0e98db2e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664DPWPK2F%2F20261001%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261001T150624Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDrgjCPPbh5LUpKngqp1%2Fl2M%2FxjRnQA0fra3xtCEN%2BhWAIhALZUM0ac%2FXvzsI7c8Q6EGGpDxxrFVNtGO78SuTKX9h5XKv8DCHsQABoMNjM3NDIzMTgzODA1IgzPPN8sE1m%2BAGJHbw0q3AMqA3Z1N1hqGEdnpyVeAm1TdtKO%2Bf6nxUDPJ8VTE8QAPPTDZ9sm8DxX1xjOPYGh9%2BH%2BZ1997QMM%2FUYoPCQNhq9%2FBwWP%2FjsQQB%2Fbr5wtYCT0FS9rJ7P%2By2%2FT9bD8vo76SC39XbdWK8mOG3SZlovMNYPMGHAZExF0eHzduHEC1ii4ZX%2BFTkOQbifvbw1JsruTf1fNpIR8atk5UDRwhhArcevJtiNfzSW%2BgUNIEID53WkO97mT%2FNmtiU83SVK9aeo8MyQCcl2dcBg3fkxrirVLSEn9nrT2%2FXuAoRlBVkRXnNIVkEmer8asEpeq5ouCe4aS0tZbcGYvwFlGlSC7GAe55lh3T9fgvp2VdGBWAy2uXaxGcNvpmEqSInwhrdS9RnUgCCCrAUCUx6x%2FyChUJBPLx3%2FokhhTXfY25%2Bt6w67JqJbTB4VDKZ%2FRhQ2uj17nB%2BnTF2CU4W%2FVVycCj3%2BskABYcuyp1EzNzRhavtgkr%2BOvsShjDAIuj3%2Bw6OmsuT7DtqWQZ2gIQ52UonvEhXYZOmSl6Q6ot6b8MWEGQvQP24lybPrpYue5thJ1L%2Bz3UX2Aqi8VSsjqcpTtIioO%2BDbXINVu9%2F%2BXwEAA20PP%2F4o3GWaKQFXkyAU758GaiowRAql76TCz6PjVBjqkAdafZ9iUrxrel%2Fd%2BsFRdJrkBPT9P0MynG6C0ZP74izsq9%2BhYbaxdrPh%2B3r2S5LgcCkCVLpbIySM7uWUD5wSuL1mTZtbiJVUI5swDFr2m2TJA89wsWo8GpcIFxt7Z0gsxZm8heBwq3x7UogL2kHxRtyG6pdIBwrHq8lrk%2BJGoY3WUik6sahcOu%2Fr5pHSbKtGm2wPULfvv4YA5YXktesbeOeUROGN1&X-Amz-Signature=98d248d305c011ee45fbfa21b5ae1c70a18c422d46f6d820e9d833e8970231b2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TFSK4B53%2F20261001%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261001T150624Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCNFt5vVicnFBnjjT2Wm4t2OnPDsP3QdxseTB9JnWCx6wIge6DItdKbpSBtBAhDnpz6l6o%2FIVzliB1Nko0Btxez1kMq%2FwMIexAAGgw2Mzc0MjMxODM4MDUiDI60qZVVdM2KAeWPZircA71SJNC2g%2Bzre8pqHRXn1hFNCnQf5UUgJxW0c25ofPXFcNjEtxFk7g7jVXClqobwq7ObBtQtqp9v%2F2uLCuOG6HuB5OKHVFpUCHplG3tZOtphBmODgQSMh5m%2BaSoF7gKq5celcPZXUZzdFCayazCVg4mJCgHRho5zBPjUAPHa7p2BHJr87lAAVtynf12YIZ5rGCkHCj1Yw2cgUxhbXuX%2Bf5LEdEc6oE42Lf7E36rAZNfW4mfmNia8VjcB9YuKoAWlgQNW9%2FR%2FMgHCHUnXL5M%2FOhwYDxxb02RidETzFMcf8MOMa9YNiEsNZvrJkXf9OB8Qnmy7SKlUW9PtA%2FILjUo2Xl50RvWSiOM1FhY5kdVCh0Ijehg5Rm9CueRg3AX4ptsx%2FhHc9nIEzoqUaCMKc6gg7kbhc%2Bn1sMenw2t2aRisdky2%2FET2JWqFLy0Brk5%2FZpONFBJAf6bgi9TrNxvP8qW5RCubl2p0x%2B10NGiLD%2FE4b%2BgamBkhiJdNUtyLmmxi2e%2BcTXtMmfDczQ%2F5563WwcojcYTEgrd4YQYo2ntwPxdeUuluwMMdSsTJzHXi09CUAjxdubsPBBnTLo7nMcNsH%2FO5C3TuG7Het8CSlT9GeITYNi56KgkXmL%2F0glOQ2dwvMLzo%2BNUGOqUBQWVRb26N1XPL%2Bs7DLDTaeiWmkI8gD3MNx1dSsqT5kNgcLgMYxIJHeVDDtIZmuL11F9S1NrFJ%2FWV%2BTupg6SIxHUKe6rMtAv%2Bsi0f%2Fp8DJW1dljVPaPZFU8Pc3COWYivN%2BJ4nmX6KSlLMPX1LGyatNt%2B8iD0XWfUKh16c8XtQutrz0SRB3Tdb3sCYAMCcXYSsb4lh7OIULnN%2Biz1XEjNeOlCRADB9m&X-Amz-Signature=2590f4c8250585ff1be2a2affcc3516f9bb69098c6ddd1e9f5de6b253842d166&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TFSK4B53%2F20261001%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261001T150624Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCNFt5vVicnFBnjjT2Wm4t2OnPDsP3QdxseTB9JnWCx6wIge6DItdKbpSBtBAhDnpz6l6o%2FIVzliB1Nko0Btxez1kMq%2FwMIexAAGgw2Mzc0MjMxODM4MDUiDI60qZVVdM2KAeWPZircA71SJNC2g%2Bzre8pqHRXn1hFNCnQf5UUgJxW0c25ofPXFcNjEtxFk7g7jVXClqobwq7ObBtQtqp9v%2F2uLCuOG6HuB5OKHVFpUCHplG3tZOtphBmODgQSMh5m%2BaSoF7gKq5celcPZXUZzdFCayazCVg4mJCgHRho5zBPjUAPHa7p2BHJr87lAAVtynf12YIZ5rGCkHCj1Yw2cgUxhbXuX%2Bf5LEdEc6oE42Lf7E36rAZNfW4mfmNia8VjcB9YuKoAWlgQNW9%2FR%2FMgHCHUnXL5M%2FOhwYDxxb02RidETzFMcf8MOMa9YNiEsNZvrJkXf9OB8Qnmy7SKlUW9PtA%2FILjUo2Xl50RvWSiOM1FhY5kdVCh0Ijehg5Rm9CueRg3AX4ptsx%2FhHc9nIEzoqUaCMKc6gg7kbhc%2Bn1sMenw2t2aRisdky2%2FET2JWqFLy0Brk5%2FZpONFBJAf6bgi9TrNxvP8qW5RCubl2p0x%2B10NGiLD%2FE4b%2BgamBkhiJdNUtyLmmxi2e%2BcTXtMmfDczQ%2F5563WwcojcYTEgrd4YQYo2ntwPxdeUuluwMMdSsTJzHXi09CUAjxdubsPBBnTLo7nMcNsH%2FO5C3TuG7Het8CSlT9GeITYNi56KgkXmL%2F0glOQ2dwvMLzo%2BNUGOqUBQWVRb26N1XPL%2Bs7DLDTaeiWmkI8gD3MNx1dSsqT5kNgcLgMYxIJHeVDDtIZmuL11F9S1NrFJ%2FWV%2BTupg6SIxHUKe6rMtAv%2Bsi0f%2Fp8DJW1dljVPaPZFU8Pc3COWYivN%2BJ4nmX6KSlLMPX1LGyatNt%2B8iD0XWfUKh16c8XtQutrz0SRB3Tdb3sCYAMCcXYSsb4lh7OIULnN%2Biz1XEjNeOlCRADB9m&X-Amz-Signature=98c30fbe0512c665a185ea8f72361b6a65775443caecba7bfaf8af7a9b38f040&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
