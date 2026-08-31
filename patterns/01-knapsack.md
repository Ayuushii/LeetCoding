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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663XYSJJTZ%2F20260831%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260831T155118Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEM%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEQs3t8iIKKygsFFUt1kvtbTslKNKDEsDmqdpiJmqcjvAiAPurkqd0A1Lp0UQLTUwnGnflEk5vq9%2Fb%2BMRX7G7oszKSqIBAiY%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM3s6UAsejWUaYlCcOKtwDaJd2ZNomJgaxr0HBYUffR7BvivU6dEKeJI%2FbcSLCkr0WK1rxHz%2FXyIDDIThb07%2BWL6lhOIT5rTCHR5Kw7NgHlLkPaLb%2FlJnT1nsvnEZ25NrR2CPIhXYfHargbNtnVlfx43rmC%2BsF8wfNsad3XLZIs5Lgiighr3EuqH30DhvGIz1dfHVTtCmWsvYZi0ejLcesui5vsuvu8eoNgGCNYTow7VxeWNpCz7nRmpr8z4hlK087cH7tawBkcC5jfbJ%2BG3bKgffkpp4WL0rsqj3G3xK%2Fi8cREIyFYCaGqjc2%2Bb45u5aUtjJ7FP6JMtP8lyicgTL4GCsXYFX1UHGxlXYO8YnqRNdSbAMDbhOWvg%2FlQ0mz9qFO4Rwe14T7qilHAB3fbj8cj8AtoixxHudKnD7DjSGpOaOaqDvb99UTSfEL81W8Z8ufct62%2BAJ1BUUT7JPxgR0XqW4oKaIGAl92OlxR%2BhoWEiAqr4czkjfusTp0SEwVZqDB%2FAPLRr%2FTXxxq34%2BJYFeyblenVLZuuZoEwRAG0il%2BKA%2FJ0dSxvDvxCDUzOa4EUPTiNftFRhyc3dDx3e2bBH9j3Y6CuwM3dq8SDnd05hsimIcLnHdkjyi5IWJTaTBQaz5Mr3dEcrt3gE44DFMwiavW1AY6pgEaudl6Fbvnu4c6Qokg0m9mHJkORPMh9F7CQPH0YYF1VzBkbETA%2B%2FTLqE8KsdctSFfyOtwa9pnb42X5asAaQ1MDF4i%2BvJDAS2es5C3fb6GD5aag1C%2BBa1I7sNAqA31tM1h74HdiBMEJsxVkq6Ptm5PvZpY%2Fw1Q0zip2HGw6G%2FiUYZzst3yfzpJfPb8Yahzh7kGc0usSEv69qiACxfu8dqEUPM%2Bq8A1P&X-Amz-Signature=16d830f4230d06c18eef8a44d2192f53bf8061b82705a839ab6189131715d6e3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663XYSJJTZ%2F20260831%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260831T155118Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEM%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEQs3t8iIKKygsFFUt1kvtbTslKNKDEsDmqdpiJmqcjvAiAPurkqd0A1Lp0UQLTUwnGnflEk5vq9%2Fb%2BMRX7G7oszKSqIBAiY%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM3s6UAsejWUaYlCcOKtwDaJd2ZNomJgaxr0HBYUffR7BvivU6dEKeJI%2FbcSLCkr0WK1rxHz%2FXyIDDIThb07%2BWL6lhOIT5rTCHR5Kw7NgHlLkPaLb%2FlJnT1nsvnEZ25NrR2CPIhXYfHargbNtnVlfx43rmC%2BsF8wfNsad3XLZIs5Lgiighr3EuqH30DhvGIz1dfHVTtCmWsvYZi0ejLcesui5vsuvu8eoNgGCNYTow7VxeWNpCz7nRmpr8z4hlK087cH7tawBkcC5jfbJ%2BG3bKgffkpp4WL0rsqj3G3xK%2Fi8cREIyFYCaGqjc2%2Bb45u5aUtjJ7FP6JMtP8lyicgTL4GCsXYFX1UHGxlXYO8YnqRNdSbAMDbhOWvg%2FlQ0mz9qFO4Rwe14T7qilHAB3fbj8cj8AtoixxHudKnD7DjSGpOaOaqDvb99UTSfEL81W8Z8ufct62%2BAJ1BUUT7JPxgR0XqW4oKaIGAl92OlxR%2BhoWEiAqr4czkjfusTp0SEwVZqDB%2FAPLRr%2FTXxxq34%2BJYFeyblenVLZuuZoEwRAG0il%2BKA%2FJ0dSxvDvxCDUzOa4EUPTiNftFRhyc3dDx3e2bBH9j3Y6CuwM3dq8SDnd05hsimIcLnHdkjyi5IWJTaTBQaz5Mr3dEcrt3gE44DFMwiavW1AY6pgEaudl6Fbvnu4c6Qokg0m9mHJkORPMh9F7CQPH0YYF1VzBkbETA%2B%2FTLqE8KsdctSFfyOtwa9pnb42X5asAaQ1MDF4i%2BvJDAS2es5C3fb6GD5aag1C%2BBa1I7sNAqA31tM1h74HdiBMEJsxVkq6Ptm5PvZpY%2Fw1Q0zip2HGw6G%2FiUYZzst3yfzpJfPb8Yahzh7kGc0usSEv69qiACxfu8dqEUPM%2Bq8A1P&X-Amz-Signature=f3624e1f39b5e8a326f487cf6f094d67ce8102aa8d4d0ee8bb42f5a5cab8a924&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663XYSJJTZ%2F20260831%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260831T155118Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEM%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEQs3t8iIKKygsFFUt1kvtbTslKNKDEsDmqdpiJmqcjvAiAPurkqd0A1Lp0UQLTUwnGnflEk5vq9%2Fb%2BMRX7G7oszKSqIBAiY%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM3s6UAsejWUaYlCcOKtwDaJd2ZNomJgaxr0HBYUffR7BvivU6dEKeJI%2FbcSLCkr0WK1rxHz%2FXyIDDIThb07%2BWL6lhOIT5rTCHR5Kw7NgHlLkPaLb%2FlJnT1nsvnEZ25NrR2CPIhXYfHargbNtnVlfx43rmC%2BsF8wfNsad3XLZIs5Lgiighr3EuqH30DhvGIz1dfHVTtCmWsvYZi0ejLcesui5vsuvu8eoNgGCNYTow7VxeWNpCz7nRmpr8z4hlK087cH7tawBkcC5jfbJ%2BG3bKgffkpp4WL0rsqj3G3xK%2Fi8cREIyFYCaGqjc2%2Bb45u5aUtjJ7FP6JMtP8lyicgTL4GCsXYFX1UHGxlXYO8YnqRNdSbAMDbhOWvg%2FlQ0mz9qFO4Rwe14T7qilHAB3fbj8cj8AtoixxHudKnD7DjSGpOaOaqDvb99UTSfEL81W8Z8ufct62%2BAJ1BUUT7JPxgR0XqW4oKaIGAl92OlxR%2BhoWEiAqr4czkjfusTp0SEwVZqDB%2FAPLRr%2FTXxxq34%2BJYFeyblenVLZuuZoEwRAG0il%2BKA%2FJ0dSxvDvxCDUzOa4EUPTiNftFRhyc3dDx3e2bBH9j3Y6CuwM3dq8SDnd05hsimIcLnHdkjyi5IWJTaTBQaz5Mr3dEcrt3gE44DFMwiavW1AY6pgEaudl6Fbvnu4c6Qokg0m9mHJkORPMh9F7CQPH0YYF1VzBkbETA%2B%2FTLqE8KsdctSFfyOtwa9pnb42X5asAaQ1MDF4i%2BvJDAS2es5C3fb6GD5aag1C%2BBa1I7sNAqA31tM1h74HdiBMEJsxVkq6Ptm5PvZpY%2Fw1Q0zip2HGw6G%2FiUYZzst3yfzpJfPb8Yahzh7kGc0usSEv69qiACxfu8dqEUPM%2Bq8A1P&X-Amz-Signature=0b8f23a3227721a2067ba80deb51e2dc7c6e608d52094b119e4198db399f5df6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666G7FTQ2V%2F20260831%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260831T155118Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEM%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCutWqJdi2qV9yvYUAbudit6FBs9TqGUo1QpCgn4wKjIQIgVxVBCQZl7dk8lVUY57eDyrQ%2FhHq3VOu5iiQmY%2BztJBYqiAQImP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOZzvn%2BFcAY0Iz8hIyrcA7RD9GPlveVU%2BkuNDOFHpBA8DYofnWmGCdPKlp%2BPxZ1A7stkguIGLt2LpfvjHfxcBmytXxdujKqADv%2FdCYV4Ma0%2FbYF7VKbuj52fpSDS90QD1%2BEhGkyoHTeEvVNjmcnk7H3xNua2B2LYDYgN06f2GqFGrBISO9Ah82xz70HaqBAWm484yDRZYVHEmsncRpzf4k%2FN%2FrLj902B%2Fb0gTtdx%2BnH3W09nSNPAQ0JoABRZP0GSJAoAq9FczxFHSGmpoq4jBXtz707J810OVD8MUCkSoBnXYu7cH2AykPr40G6cKrP7UFxMj7M7a5bp%2FKzjKTZwiFeBzpq%2FaXzuzGn8VsxlW%2By1tNkw85K9iBpLTr6Rs3GS7y4L%2BjZF6aNvoCXo1SFRkw0makhgHKYlccQW8stja%2F%2BplllX2sRwbcR58tP5mAMdAR%2B%2FwJaY%2BB3eLWRgM1yOQpdW7iweWpjtenxhpVKpcyEWSgvePDKItxFHg8hGjNhQDZfwvzghyRXFw6zwqMo%2F2ZWoBdCIjDUCndMyuFyiAtgFsxoAdT50bdgL1Npyrc5ymIMLDf9ffrXz4L88H42yJhX9I2%2FYSBv%2FVUPN%2B3noXb5NDvDN2OZnq4bO4%2Blx8HSOZHoreeqxlPU2b62VMMGr1tQGOqUBJJMzs3ZSWT8i%2FYk%2B%2BgRKgZMFW8BVp9tACmXBpP%2BCQzbBk%2F3m9OMzgQlFPikfG4HwWErMEXSwEgC37yDojmUOuaaMInyedW6t976FpFbp5bmjp648AInzoTigjexNYGpVfRQKpapexIAAeFusIt%2BCyCQCfsA5hs8rd5bimhuzMi9Q7PNO1Tf3uLXhgBfrXzQxIs37LsW2NE8bhhprARsOnE%2Behk0m&X-Amz-Signature=b74057fb28897af750d2a5788ab8fbac3b1a57f9dd4964aae6ae2f4af42e2d60&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666G7FTQ2V%2F20260831%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260831T155118Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEM%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCutWqJdi2qV9yvYUAbudit6FBs9TqGUo1QpCgn4wKjIQIgVxVBCQZl7dk8lVUY57eDyrQ%2FhHq3VOu5iiQmY%2BztJBYqiAQImP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOZzvn%2BFcAY0Iz8hIyrcA7RD9GPlveVU%2BkuNDOFHpBA8DYofnWmGCdPKlp%2BPxZ1A7stkguIGLt2LpfvjHfxcBmytXxdujKqADv%2FdCYV4Ma0%2FbYF7VKbuj52fpSDS90QD1%2BEhGkyoHTeEvVNjmcnk7H3xNua2B2LYDYgN06f2GqFGrBISO9Ah82xz70HaqBAWm484yDRZYVHEmsncRpzf4k%2FN%2FrLj902B%2Fb0gTtdx%2BnH3W09nSNPAQ0JoABRZP0GSJAoAq9FczxFHSGmpoq4jBXtz707J810OVD8MUCkSoBnXYu7cH2AykPr40G6cKrP7UFxMj7M7a5bp%2FKzjKTZwiFeBzpq%2FaXzuzGn8VsxlW%2By1tNkw85K9iBpLTr6Rs3GS7y4L%2BjZF6aNvoCXo1SFRkw0makhgHKYlccQW8stja%2F%2BplllX2sRwbcR58tP5mAMdAR%2B%2FwJaY%2BB3eLWRgM1yOQpdW7iweWpjtenxhpVKpcyEWSgvePDKItxFHg8hGjNhQDZfwvzghyRXFw6zwqMo%2F2ZWoBdCIjDUCndMyuFyiAtgFsxoAdT50bdgL1Npyrc5ymIMLDf9ffrXz4L88H42yJhX9I2%2FYSBv%2FVUPN%2B3noXb5NDvDN2OZnq4bO4%2Blx8HSOZHoreeqxlPU2b62VMMGr1tQGOqUBJJMzs3ZSWT8i%2FYk%2B%2BgRKgZMFW8BVp9tACmXBpP%2BCQzbBk%2F3m9OMzgQlFPikfG4HwWErMEXSwEgC37yDojmUOuaaMInyedW6t976FpFbp5bmjp648AInzoTigjexNYGpVfRQKpapexIAAeFusIt%2BCyCQCfsA5hs8rd5bimhuzMi9Q7PNO1Tf3uLXhgBfrXzQxIs37LsW2NE8bhhprARsOnE%2Behk0m&X-Amz-Signature=ea66251bf473e3dffb19be4119466c1157b17fea38df6c7b82ac3f42ed475b2d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666G7FTQ2V%2F20260831%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260831T155118Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEM%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCutWqJdi2qV9yvYUAbudit6FBs9TqGUo1QpCgn4wKjIQIgVxVBCQZl7dk8lVUY57eDyrQ%2FhHq3VOu5iiQmY%2BztJBYqiAQImP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOZzvn%2BFcAY0Iz8hIyrcA7RD9GPlveVU%2BkuNDOFHpBA8DYofnWmGCdPKlp%2BPxZ1A7stkguIGLt2LpfvjHfxcBmytXxdujKqADv%2FdCYV4Ma0%2FbYF7VKbuj52fpSDS90QD1%2BEhGkyoHTeEvVNjmcnk7H3xNua2B2LYDYgN06f2GqFGrBISO9Ah82xz70HaqBAWm484yDRZYVHEmsncRpzf4k%2FN%2FrLj902B%2Fb0gTtdx%2BnH3W09nSNPAQ0JoABRZP0GSJAoAq9FczxFHSGmpoq4jBXtz707J810OVD8MUCkSoBnXYu7cH2AykPr40G6cKrP7UFxMj7M7a5bp%2FKzjKTZwiFeBzpq%2FaXzuzGn8VsxlW%2By1tNkw85K9iBpLTr6Rs3GS7y4L%2BjZF6aNvoCXo1SFRkw0makhgHKYlccQW8stja%2F%2BplllX2sRwbcR58tP5mAMdAR%2B%2FwJaY%2BB3eLWRgM1yOQpdW7iweWpjtenxhpVKpcyEWSgvePDKItxFHg8hGjNhQDZfwvzghyRXFw6zwqMo%2F2ZWoBdCIjDUCndMyuFyiAtgFsxoAdT50bdgL1Npyrc5ymIMLDf9ffrXz4L88H42yJhX9I2%2FYSBv%2FVUPN%2B3noXb5NDvDN2OZnq4bO4%2Blx8HSOZHoreeqxlPU2b62VMMGr1tQGOqUBJJMzs3ZSWT8i%2FYk%2B%2BgRKgZMFW8BVp9tACmXBpP%2BCQzbBk%2F3m9OMzgQlFPikfG4HwWErMEXSwEgC37yDojmUOuaaMInyedW6t976FpFbp5bmjp648AInzoTigjexNYGpVfRQKpapexIAAeFusIt%2BCyCQCfsA5hs8rd5bimhuzMi9Q7PNO1Tf3uLXhgBfrXzQxIs37LsW2NE8bhhprARsOnE%2Behk0m&X-Amz-Signature=e4f83e712f4e79deb456f5ee1aa38f8c04e0757f9150b4c3edadec1330a4eb5f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666G7FTQ2V%2F20260831%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260831T155118Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEM%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCutWqJdi2qV9yvYUAbudit6FBs9TqGUo1QpCgn4wKjIQIgVxVBCQZl7dk8lVUY57eDyrQ%2FhHq3VOu5iiQmY%2BztJBYqiAQImP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOZzvn%2BFcAY0Iz8hIyrcA7RD9GPlveVU%2BkuNDOFHpBA8DYofnWmGCdPKlp%2BPxZ1A7stkguIGLt2LpfvjHfxcBmytXxdujKqADv%2FdCYV4Ma0%2FbYF7VKbuj52fpSDS90QD1%2BEhGkyoHTeEvVNjmcnk7H3xNua2B2LYDYgN06f2GqFGrBISO9Ah82xz70HaqBAWm484yDRZYVHEmsncRpzf4k%2FN%2FrLj902B%2Fb0gTtdx%2BnH3W09nSNPAQ0JoABRZP0GSJAoAq9FczxFHSGmpoq4jBXtz707J810OVD8MUCkSoBnXYu7cH2AykPr40G6cKrP7UFxMj7M7a5bp%2FKzjKTZwiFeBzpq%2FaXzuzGn8VsxlW%2By1tNkw85K9iBpLTr6Rs3GS7y4L%2BjZF6aNvoCXo1SFRkw0makhgHKYlccQW8stja%2F%2BplllX2sRwbcR58tP5mAMdAR%2B%2FwJaY%2BB3eLWRgM1yOQpdW7iweWpjtenxhpVKpcyEWSgvePDKItxFHg8hGjNhQDZfwvzghyRXFw6zwqMo%2F2ZWoBdCIjDUCndMyuFyiAtgFsxoAdT50bdgL1Npyrc5ymIMLDf9ffrXz4L88H42yJhX9I2%2FYSBv%2FVUPN%2B3noXb5NDvDN2OZnq4bO4%2Blx8HSOZHoreeqxlPU2b62VMMGr1tQGOqUBJJMzs3ZSWT8i%2FYk%2B%2BgRKgZMFW8BVp9tACmXBpP%2BCQzbBk%2F3m9OMzgQlFPikfG4HwWErMEXSwEgC37yDojmUOuaaMInyedW6t976FpFbp5bmjp648AInzoTigjexNYGpVfRQKpapexIAAeFusIt%2BCyCQCfsA5hs8rd5bimhuzMi9Q7PNO1Tf3uLXhgBfrXzQxIs37LsW2NE8bhhprARsOnE%2Behk0m&X-Amz-Signature=ee05cc8d32bd8e8f87574256b216f7dd75fdf23d9c223cbc1ccbe3b3a6ae130e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TVF4IHUF%2F20260831%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260831T155119Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEM%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICSql7QTwGVF%2BbmWTZskUKUI6NGjDkGBQMr16%2Bq3G8jpAiAlfFiMNPB22wt9z4jlS10%2F1B%2BhmSebp09I72jmz0gIiyqIBAiY%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMvthRpMzpGhv4c1PtKtwDptt4Jt966fDCjrhI9MKzUs9NrcAQDBRbN%2BOz8Vdvlvuj62SLU%2FdCI6Ix2tY4e%2BbgkDTZ%2FgmbtJt5XApvPb1kcxpkSnJxqJvi9J5gkbhoMVHg5iQWzQuF8ZGTsJU2pat7gYJM%2FnALtmh%2Bgwtu4swy%2ByTNuTEa3k1sn%2FQMQzxae%2FhIL32ocgzkML5Z%2BuzmBQjqs0ane0ZYgY8f2OFpvWMxyBpfarlUq6gpNIWR3PqHDDeafi1qppfKXJaUxFAwS9gbFcHHr0pmkTfDb0kSdBIas3cZwTvYBet0niG%2BSLU%2BMuhJqB6Y9UeyjLEM2o0%2BL7FxMrcdw0YBpP3w3SOT%2FZgDvTfyAIP8sMsLQdWyFzp9HO%2FmS%2BGhtn1kwg%2FM2VQUcKf2xQg%2FXtG1J%2FRpZskNFiIq7lTJM26Ofa%2BMUEw0idU1pKuo0B8%2F%2F1OKyY%2BIb8REoukJaihR%2BzBP0pHFtYwH8H1hZis2H9Y4lAc3kd%2FyoQS5XLNZK5b7hIuYDLMWAJjAH4quCUu2fx31GQl8kNBzX3lBCukiUIZulVj33d6Hgs4e%2Fk%2FJhWSWQwkmZ8HG20cG%2FsF9RPb9uYNUhJaurCI654y%2B8ZlRUQoE6vsHRiCVVxscX4Dfb9aylJeEWgpGSDMw66zW1AY6pgGhjXXQrSqzmh9BNq9KSlD1NsSq31%2BUG%2F32nS1s632twMAt5WgmEc5B5E6WuO7MUklZ5jdoo03QMZ4CTbePc2NKZfLQUxNtQrDr91d2BIlu4z5wxrLp8aPPWU4KBtfM19%2Fsf0wqNc%2Bz%2BtPkj7BM%2FyzFJj0TpuG3%2F3Up6%2Fy%2BfYaEejNImonAobrLCW8IZYO8O9hC0%2F2gIAzoa4JZ0SUFkIAEXAKeeyFe&X-Amz-Signature=d3f04ec273c88aaf5e6b9f4de9d21e807efa639e19b784be7cb66301c102743f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YXTYGPXB%2F20260831%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260831T155119Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEM%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIH9pPmMI0aPI0G7ggn6nC96H4nnAivYQ2wD%2FcuBDmXl6AiA4QCTMbPh2CPt3P9hxxiTHJdrukwpV9gSkCoZBFFSKoiqIBAiY%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMYujJUWhzuuwjNFpgKtwDKe%2BdhMmJl5T3Nx0jOD36iEcHXRQ2AyBOMN8CXENsDKssgjOsba4bv6hnosIgsjphcwG5Bkm%2BEw2%2FhJL8h6fO%2Fv069ToyWIiFkxYUHizs07hnD3HYIm%2FYL9mHIGVvHSo8JRg3SR1w8pw%2FZVsJvoBSRhCreX5edT0pNyzW4CsnSQurz7eM6FwMcc6xVNmWZB%2FJMEIHm1Rsw9tF82Vbt1s5MsIp%2F5IgB%2BSSVfVnnv%2BffdK%2BVqalHPGNtlK8u9KzZLcO9ZWpZfl6LYDD9dPJ88mSdMQiXZ%2FNKlig2idvKyGNbkGktutmkE6zFtICRH0SK%2FJG%2FyIs2oz570edYALVTYjWPQrAlx3gELxDBqt91SdDgKDyyAarijGpEiGpt30K%2FOACRHXHQDWVl3jSwYZ%2Bguhlli5%2FQ3bDwVurEaX0n9QnAAZBkTCCIT8Rz8Cb6E2tCQc265hE8Rs8oR6Cay8C6xs8wCogWQoW0t3Ot6eM%2FW1Ix6%2BoOQ4nb07kELXuEsm%2B5GQzKkmhm7l2Das8bXaht8Alo0fRwKR6cYWdGCfGguoNfigS%2Fr%2FQjAuho%2BJkuD2u1%2F8lk3UYjEZoob2FsgJ8QsBq6e55VLEFsHR11oR0GghXE9gOXkLQ1w%2FUTY59ytAw0K3W1AY6pgEIsJYyp9uJx8dpsQyORsijfi%2F7KoiNStxhjvFJz8u3%2BnxgAVo0y5tC4%2Fe8EYXJ9Qp9ZAOXa9jmrpTjkfjVf1ylhd%2BYNh7vPpW6%2BfCGfJHQSk6eYkW56eJVmzy19k1sHPkrNI8fuFljLHxJjGTTOiRNtgGA5I2S%2FaefeQqgMnVpOSq0uQauCJmqE4Y4Obct6cODbjkgTqFSqBuBlkAa6GtDIA88pdPH&X-Amz-Signature=e6fd35264d5f1b33f09f29c2258ab675f9869ae51eb2ad45d345cbca05dd2fcb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YXTYGPXB%2F20260831%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260831T155119Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEM%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIH9pPmMI0aPI0G7ggn6nC96H4nnAivYQ2wD%2FcuBDmXl6AiA4QCTMbPh2CPt3P9hxxiTHJdrukwpV9gSkCoZBFFSKoiqIBAiY%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMYujJUWhzuuwjNFpgKtwDKe%2BdhMmJl5T3Nx0jOD36iEcHXRQ2AyBOMN8CXENsDKssgjOsba4bv6hnosIgsjphcwG5Bkm%2BEw2%2FhJL8h6fO%2Fv069ToyWIiFkxYUHizs07hnD3HYIm%2FYL9mHIGVvHSo8JRg3SR1w8pw%2FZVsJvoBSRhCreX5edT0pNyzW4CsnSQurz7eM6FwMcc6xVNmWZB%2FJMEIHm1Rsw9tF82Vbt1s5MsIp%2F5IgB%2BSSVfVnnv%2BffdK%2BVqalHPGNtlK8u9KzZLcO9ZWpZfl6LYDD9dPJ88mSdMQiXZ%2FNKlig2idvKyGNbkGktutmkE6zFtICRH0SK%2FJG%2FyIs2oz570edYALVTYjWPQrAlx3gELxDBqt91SdDgKDyyAarijGpEiGpt30K%2FOACRHXHQDWVl3jSwYZ%2Bguhlli5%2FQ3bDwVurEaX0n9QnAAZBkTCCIT8Rz8Cb6E2tCQc265hE8Rs8oR6Cay8C6xs8wCogWQoW0t3Ot6eM%2FW1Ix6%2BoOQ4nb07kELXuEsm%2B5GQzKkmhm7l2Das8bXaht8Alo0fRwKR6cYWdGCfGguoNfigS%2Fr%2FQjAuho%2BJkuD2u1%2F8lk3UYjEZoob2FsgJ8QsBq6e55VLEFsHR11oR0GghXE9gOXkLQ1w%2FUTY59ytAw0K3W1AY6pgEIsJYyp9uJx8dpsQyORsijfi%2F7KoiNStxhjvFJz8u3%2BnxgAVo0y5tC4%2Fe8EYXJ9Qp9ZAOXa9jmrpTjkfjVf1ylhd%2BYNh7vPpW6%2BfCGfJHQSk6eYkW56eJVmzy19k1sHPkrNI8fuFljLHxJjGTTOiRNtgGA5I2S%2FaefeQqgMnVpOSq0uQauCJmqE4Y4Obct6cODbjkgTqFSqBuBlkAa6GtDIA88pdPH&X-Amz-Signature=3afb6d494ffb8151ebfe95d0aafadab2abed5c50e9b3271b1c2c6d79203be0b7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
