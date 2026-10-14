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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663XKMQFSF%2F20261014%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261014T131838Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJFMEMCHxzN2XGqB0%2Fu4iNxyp3foogJxWAKxfMVkyR01KD0CqECICq0YOq3CqDKr8Xy9qUChonwFsJ2mChNWT2fq0IfpEN4KogECLX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyjQoWW4nmEiTv2usUq3APlFbA1Nf80wj%2BBoiAl5fcc9WIiln%2FzFJkWdA1X%2BLhDlbl3p47hODU3QbMUi%2F0u%2B%2F3rX0aXRhcDcjOR4SAlNjp1RkwhxisadvLpwOL4arbD%2Fmet0Padl4XtTb22RQDBGHf0QAUPGoqD%2FGJySTET1wsFy4gMyvS9svCH1F7aTzvEouCV0JOZ1rlMmZ7KWmtd43JsEdvAEc8DQZVQHL35us%2F5dfGG0HsZnrTRaUI4hnVfJCOolFQ5msSqDZjwA1%2B2ZwSLXA8Wpnc%2Bklfp%2FYSYzaXhbtZnbOiW%2BAJa0jRRx2ihZ1lKyOs%2BWS6IiKuHeWdPFfu7pSvjn18nsGO0rzb565df0Tfnm20IkaDfxyYs6mUrJUsjPirzUsn2kckHzjlT4V4CI8sm7pEqwdlPEijVbcK8Ad%2F988PKEwJP1kQuf77Z560Ej7LUMr1g7h2hJefYsYBHQ71OwvyU6V9w2ntn6LP5ex7bDIyVLR7Jouo769cAHxITrVtmVrgN4pBoEoShe0N%2Fz9mO35t886jllBsPJ35tTu7gJ95KUBOE5PLEnvHJOBKlxopceZ0HD2l76Xbup%2FiV4q4MozvJ9%2F2hvAzZ2GgrfFOQMgk1%2BHSLbWxZB1enRd6tJnfJy4zCUmhMlDDR7L3WBjqnAcRJ%2Bq%2BD3DvrnGP8tVVuIS%2Fl9w9k0fZ2z2ZG76aD9Rxx6mzqHJizh61HrVxI%2Bl4TkNk6IZMoxVXbpqHgwOT1iLR%2Bf3R7TB8r6DiRUOGmOR09NhXgcu0mDToY%2FgMxrbuTKT28HMvW4VDsjUsFIza6UtOAwi3mvYAXkpIKV65zkFc2VGI69Ed4AEhgUZgU%2BOFcimU5RNU4T3jCgRMrMRjybbmdJJUpIjVV&X-Amz-Signature=3bec829e875ad75fd981577f3ca538f0a494a25c08c1269656516b86afe49309&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663XKMQFSF%2F20261014%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261014T131838Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJFMEMCHxzN2XGqB0%2Fu4iNxyp3foogJxWAKxfMVkyR01KD0CqECICq0YOq3CqDKr8Xy9qUChonwFsJ2mChNWT2fq0IfpEN4KogECLX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyjQoWW4nmEiTv2usUq3APlFbA1Nf80wj%2BBoiAl5fcc9WIiln%2FzFJkWdA1X%2BLhDlbl3p47hODU3QbMUi%2F0u%2B%2F3rX0aXRhcDcjOR4SAlNjp1RkwhxisadvLpwOL4arbD%2Fmet0Padl4XtTb22RQDBGHf0QAUPGoqD%2FGJySTET1wsFy4gMyvS9svCH1F7aTzvEouCV0JOZ1rlMmZ7KWmtd43JsEdvAEc8DQZVQHL35us%2F5dfGG0HsZnrTRaUI4hnVfJCOolFQ5msSqDZjwA1%2B2ZwSLXA8Wpnc%2Bklfp%2FYSYzaXhbtZnbOiW%2BAJa0jRRx2ihZ1lKyOs%2BWS6IiKuHeWdPFfu7pSvjn18nsGO0rzb565df0Tfnm20IkaDfxyYs6mUrJUsjPirzUsn2kckHzjlT4V4CI8sm7pEqwdlPEijVbcK8Ad%2F988PKEwJP1kQuf77Z560Ej7LUMr1g7h2hJefYsYBHQ71OwvyU6V9w2ntn6LP5ex7bDIyVLR7Jouo769cAHxITrVtmVrgN4pBoEoShe0N%2Fz9mO35t886jllBsPJ35tTu7gJ95KUBOE5PLEnvHJOBKlxopceZ0HD2l76Xbup%2FiV4q4MozvJ9%2F2hvAzZ2GgrfFOQMgk1%2BHSLbWxZB1enRd6tJnfJy4zCUmhMlDDR7L3WBjqnAcRJ%2Bq%2BD3DvrnGP8tVVuIS%2Fl9w9k0fZ2z2ZG76aD9Rxx6mzqHJizh61HrVxI%2Bl4TkNk6IZMoxVXbpqHgwOT1iLR%2Bf3R7TB8r6DiRUOGmOR09NhXgcu0mDToY%2FgMxrbuTKT28HMvW4VDsjUsFIza6UtOAwi3mvYAXkpIKV65zkFc2VGI69Ed4AEhgUZgU%2BOFcimU5RNU4T3jCgRMrMRjybbmdJJUpIjVV&X-Amz-Signature=2b32c40857897bf124136eb7347a37643771087f1ec1e1f8fbe45d0647a82682&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663XKMQFSF%2F20261014%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261014T131838Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJFMEMCHxzN2XGqB0%2Fu4iNxyp3foogJxWAKxfMVkyR01KD0CqECICq0YOq3CqDKr8Xy9qUChonwFsJ2mChNWT2fq0IfpEN4KogECLX%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyjQoWW4nmEiTv2usUq3APlFbA1Nf80wj%2BBoiAl5fcc9WIiln%2FzFJkWdA1X%2BLhDlbl3p47hODU3QbMUi%2F0u%2B%2F3rX0aXRhcDcjOR4SAlNjp1RkwhxisadvLpwOL4arbD%2Fmet0Padl4XtTb22RQDBGHf0QAUPGoqD%2FGJySTET1wsFy4gMyvS9svCH1F7aTzvEouCV0JOZ1rlMmZ7KWmtd43JsEdvAEc8DQZVQHL35us%2F5dfGG0HsZnrTRaUI4hnVfJCOolFQ5msSqDZjwA1%2B2ZwSLXA8Wpnc%2Bklfp%2FYSYzaXhbtZnbOiW%2BAJa0jRRx2ihZ1lKyOs%2BWS6IiKuHeWdPFfu7pSvjn18nsGO0rzb565df0Tfnm20IkaDfxyYs6mUrJUsjPirzUsn2kckHzjlT4V4CI8sm7pEqwdlPEijVbcK8Ad%2F988PKEwJP1kQuf77Z560Ej7LUMr1g7h2hJefYsYBHQ71OwvyU6V9w2ntn6LP5ex7bDIyVLR7Jouo769cAHxITrVtmVrgN4pBoEoShe0N%2Fz9mO35t886jllBsPJ35tTu7gJ95KUBOE5PLEnvHJOBKlxopceZ0HD2l76Xbup%2FiV4q4MozvJ9%2F2hvAzZ2GgrfFOQMgk1%2BHSLbWxZB1enRd6tJnfJy4zCUmhMlDDR7L3WBjqnAcRJ%2Bq%2BD3DvrnGP8tVVuIS%2Fl9w9k0fZ2z2ZG76aD9Rxx6mzqHJizh61HrVxI%2Bl4TkNk6IZMoxVXbpqHgwOT1iLR%2Bf3R7TB8r6DiRUOGmOR09NhXgcu0mDToY%2FgMxrbuTKT28HMvW4VDsjUsFIza6UtOAwi3mvYAXkpIKV65zkFc2VGI69Ed4AEhgUZgU%2BOFcimU5RNU4T3jCgRMrMRjybbmdJJUpIjVV&X-Amz-Signature=f6777ad759df378a4791f6a0fda150f359209f2c6d3f2112ca3a304550c995a2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667GYJDPPU%2F20261014%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261014T131838Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCJ15XqW0taJPowFJgFlwmi8BZ%2FPUNO9s7kQ8eidv421QIgbUylhnSRBavpm0BtISqStrqVaZbfIUDH5Fupdx%2F3hcQqiAQItf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDF8ecg9Y%2BZVSJ4JtkCrcAxJsTdvw%2FzOwjA3WIx3tYv%2BaCA%2By3eiGqWM%2BGCFZzb6cCzvI%2B1hUn187GlZjxW89bICrsVpKqj3sXUEtNje86xtukyg0%2BVOrjLqAbacF4YeebvD1OEUPMu2hHveJEJvpUpWn5O6ZFOmupPT50QegoKAoVnb8A2JwwgyUFMBo76z3MtpjrzgXyGc7R2ks8%2FfxnQDQ7RTkoc7FXJWveip1l9HsNJlgxIil%2BRe4N5nUuvsLxNGZjHe5mJBhonlqq85vSKxxVetCRfVhsU1x3P73tXS9W6r8Q%2Bswp8co%2Fm%2FBcyDBvTuJcyzyBkfr2dg2Wnk4UP1xxPNVF1mDxVK0%2FXE61TtzHswUCCw1wCmAB4wDEh6bJ8LwB9F5vUoNR5%2BamfMarUKIquLYVz4%2Fjex1%2FZAmameK9dIL7TQ4dKXkKBxNgW%2FAWjXZfwwALF4D15sVSW6AWWjG6dj80BAxRIuBAXLDmPRX8G8MAYLwUzC0%2BNtvYIGJ%2Fp7%2BFXlGqRp1XAxxEzTbTMUVyzyh%2BWIHaYnETR63PqqgPoHcrBDSLnNZ0Lp9%2B9M7odg5Z2KnPBjWtvaHcOUndCNkRqNM%2FuPhjlRb0m%2BYa53YGGzPYxFgGwXTZQrXVopKkX0f18bfAGJpH%2F%2B4MMLtvdYGOqUB9Leu96kQ7rMNUyhTmiFYesAceMp7LgvA38e%2F4F1xHXbN8NqnKpk0tC5dPbt7mbfrmP6r96FjTvGlPdZB%2Fxn5YancqalDK1QbhoJU4mzjcSmUH6hjKvMEuYVbwrk39djb4UwW7X2uxT7hhI33msbnGCkwh5cIpZmohOR%2BWFfCdHc3ykwqjPNiYofp1MHKh0iF2McLSfDaLncQeS6OlaZLusTSigHX&X-Amz-Signature=6fd5296e956b3cd56552283c487fcbc933c10997e856da93d19857bb407c7eaa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667GYJDPPU%2F20261014%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261014T131838Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCJ15XqW0taJPowFJgFlwmi8BZ%2FPUNO9s7kQ8eidv421QIgbUylhnSRBavpm0BtISqStrqVaZbfIUDH5Fupdx%2F3hcQqiAQItf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDF8ecg9Y%2BZVSJ4JtkCrcAxJsTdvw%2FzOwjA3WIx3tYv%2BaCA%2By3eiGqWM%2BGCFZzb6cCzvI%2B1hUn187GlZjxW89bICrsVpKqj3sXUEtNje86xtukyg0%2BVOrjLqAbacF4YeebvD1OEUPMu2hHveJEJvpUpWn5O6ZFOmupPT50QegoKAoVnb8A2JwwgyUFMBo76z3MtpjrzgXyGc7R2ks8%2FfxnQDQ7RTkoc7FXJWveip1l9HsNJlgxIil%2BRe4N5nUuvsLxNGZjHe5mJBhonlqq85vSKxxVetCRfVhsU1x3P73tXS9W6r8Q%2Bswp8co%2Fm%2FBcyDBvTuJcyzyBkfr2dg2Wnk4UP1xxPNVF1mDxVK0%2FXE61TtzHswUCCw1wCmAB4wDEh6bJ8LwB9F5vUoNR5%2BamfMarUKIquLYVz4%2Fjex1%2FZAmameK9dIL7TQ4dKXkKBxNgW%2FAWjXZfwwALF4D15sVSW6AWWjG6dj80BAxRIuBAXLDmPRX8G8MAYLwUzC0%2BNtvYIGJ%2Fp7%2BFXlGqRp1XAxxEzTbTMUVyzyh%2BWIHaYnETR63PqqgPoHcrBDSLnNZ0Lp9%2B9M7odg5Z2KnPBjWtvaHcOUndCNkRqNM%2FuPhjlRb0m%2BYa53YGGzPYxFgGwXTZQrXVopKkX0f18bfAGJpH%2F%2B4MMLtvdYGOqUB9Leu96kQ7rMNUyhTmiFYesAceMp7LgvA38e%2F4F1xHXbN8NqnKpk0tC5dPbt7mbfrmP6r96FjTvGlPdZB%2Fxn5YancqalDK1QbhoJU4mzjcSmUH6hjKvMEuYVbwrk39djb4UwW7X2uxT7hhI33msbnGCkwh5cIpZmohOR%2BWFfCdHc3ykwqjPNiYofp1MHKh0iF2McLSfDaLncQeS6OlaZLusTSigHX&X-Amz-Signature=c2492fe07f802ce48d4d5bd3f5e03369d79f4f8996cfaefbcd9d8573343a3ba9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667GYJDPPU%2F20261014%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261014T131838Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCJ15XqW0taJPowFJgFlwmi8BZ%2FPUNO9s7kQ8eidv421QIgbUylhnSRBavpm0BtISqStrqVaZbfIUDH5Fupdx%2F3hcQqiAQItf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDF8ecg9Y%2BZVSJ4JtkCrcAxJsTdvw%2FzOwjA3WIx3tYv%2BaCA%2By3eiGqWM%2BGCFZzb6cCzvI%2B1hUn187GlZjxW89bICrsVpKqj3sXUEtNje86xtukyg0%2BVOrjLqAbacF4YeebvD1OEUPMu2hHveJEJvpUpWn5O6ZFOmupPT50QegoKAoVnb8A2JwwgyUFMBo76z3MtpjrzgXyGc7R2ks8%2FfxnQDQ7RTkoc7FXJWveip1l9HsNJlgxIil%2BRe4N5nUuvsLxNGZjHe5mJBhonlqq85vSKxxVetCRfVhsU1x3P73tXS9W6r8Q%2Bswp8co%2Fm%2FBcyDBvTuJcyzyBkfr2dg2Wnk4UP1xxPNVF1mDxVK0%2FXE61TtzHswUCCw1wCmAB4wDEh6bJ8LwB9F5vUoNR5%2BamfMarUKIquLYVz4%2Fjex1%2FZAmameK9dIL7TQ4dKXkKBxNgW%2FAWjXZfwwALF4D15sVSW6AWWjG6dj80BAxRIuBAXLDmPRX8G8MAYLwUzC0%2BNtvYIGJ%2Fp7%2BFXlGqRp1XAxxEzTbTMUVyzyh%2BWIHaYnETR63PqqgPoHcrBDSLnNZ0Lp9%2B9M7odg5Z2KnPBjWtvaHcOUndCNkRqNM%2FuPhjlRb0m%2BYa53YGGzPYxFgGwXTZQrXVopKkX0f18bfAGJpH%2F%2B4MMLtvdYGOqUB9Leu96kQ7rMNUyhTmiFYesAceMp7LgvA38e%2F4F1xHXbN8NqnKpk0tC5dPbt7mbfrmP6r96FjTvGlPdZB%2Fxn5YancqalDK1QbhoJU4mzjcSmUH6hjKvMEuYVbwrk39djb4UwW7X2uxT7hhI33msbnGCkwh5cIpZmohOR%2BWFfCdHc3ykwqjPNiYofp1MHKh0iF2McLSfDaLncQeS6OlaZLusTSigHX&X-Amz-Signature=c071eddc97426d434dd9f05644fc0253ff5433f4203d6b5ce05a1e249251b68d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667GYJDPPU%2F20261014%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261014T131838Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCJ15XqW0taJPowFJgFlwmi8BZ%2FPUNO9s7kQ8eidv421QIgbUylhnSRBavpm0BtISqStrqVaZbfIUDH5Fupdx%2F3hcQqiAQItf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDF8ecg9Y%2BZVSJ4JtkCrcAxJsTdvw%2FzOwjA3WIx3tYv%2BaCA%2By3eiGqWM%2BGCFZzb6cCzvI%2B1hUn187GlZjxW89bICrsVpKqj3sXUEtNje86xtukyg0%2BVOrjLqAbacF4YeebvD1OEUPMu2hHveJEJvpUpWn5O6ZFOmupPT50QegoKAoVnb8A2JwwgyUFMBo76z3MtpjrzgXyGc7R2ks8%2FfxnQDQ7RTkoc7FXJWveip1l9HsNJlgxIil%2BRe4N5nUuvsLxNGZjHe5mJBhonlqq85vSKxxVetCRfVhsU1x3P73tXS9W6r8Q%2Bswp8co%2Fm%2FBcyDBvTuJcyzyBkfr2dg2Wnk4UP1xxPNVF1mDxVK0%2FXE61TtzHswUCCw1wCmAB4wDEh6bJ8LwB9F5vUoNR5%2BamfMarUKIquLYVz4%2Fjex1%2FZAmameK9dIL7TQ4dKXkKBxNgW%2FAWjXZfwwALF4D15sVSW6AWWjG6dj80BAxRIuBAXLDmPRX8G8MAYLwUzC0%2BNtvYIGJ%2Fp7%2BFXlGqRp1XAxxEzTbTMUVyzyh%2BWIHaYnETR63PqqgPoHcrBDSLnNZ0Lp9%2B9M7odg5Z2KnPBjWtvaHcOUndCNkRqNM%2FuPhjlRb0m%2BYa53YGGzPYxFgGwXTZQrXVopKkX0f18bfAGJpH%2F%2B4MMLtvdYGOqUB9Leu96kQ7rMNUyhTmiFYesAceMp7LgvA38e%2F4F1xHXbN8NqnKpk0tC5dPbt7mbfrmP6r96FjTvGlPdZB%2Fxn5YancqalDK1QbhoJU4mzjcSmUH6hjKvMEuYVbwrk39djb4UwW7X2uxT7hhI33msbnGCkwh5cIpZmohOR%2BWFfCdHc3ykwqjPNiYofp1MHKh0iF2McLSfDaLncQeS6OlaZLusTSigHX&X-Amz-Signature=e66bdc99e2b6d9e756acc919648cc04183dfb464832e5315e1a930d9282cca26&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T5THYVWZ%2F20261014%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261014T131838Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBPli0069CC3AduAN0Qal%2FhsmxDPc7MM6goLT6h5Q30mAiEA%2FFpJlM5TEStlC0SudWJ%2FwPnj9BHrl%2FfZOE18psMovTAqiAQItv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHUf97hE2Ccizh6KwircA5pMr6oG96i95EGV1w%2BYRC3GAZE3sL5LezzJUGh9bunEaQG%2BgxQLNGwe%2B6GD3kdh5twkXmEUWn1BaZo%2BRygXbdYFXFW%2BlXYvWwqNo0FuLABT9NSrJwELHLFRCF5vkJpXfslPJvdYaeEEHnpYCcxsfzViLHUJffIeOGNaPry%2F7lUICqcSEZLH1r4bMz4qjolxm2wX5LlyXsV0GqycMvhYHUiCOGq9BUx6AK%2F%2FOxKnzXFNXWthpBHiiWEUTeBqlpwlTWG1HD9to%2FZQprhGEHweS5i5MbGnHWarjzLh1oPvKWvclrap%2B4rX2wTtuMvhjRw7Cc%2FWlUMx6YuuT8Q8TV4ILfDBImgAR7yqOOSVaA21oQ46I14O%2F5jhv0sWxLL0H1QbLERVsOVuyr6w5V6dP%2B%2FqRMiiSv04%2B9XBJ0B4XCK%2BXbAmRyNoUBopxNsuSX6lCLHzcq8QWa33Dnge%2BjEKtlrwe9blT8KuHIBuhOqImJO77ly1KMc5%2FXoWaqlT%2Bu%2B43NDRXZouE%2F29jlwLY5seWYeJA90fTMgHhpGCTS7D0wR6vx9ecQvTGzJ%2FA85fIRzeB9VM5wET61irnM09BLsb4sHY0jT7s%2Fsqi8e8sDRg2WtbED6HKIct2uWE73ZjbgbiMObqvdYGOqUBAJG4l5x4gQNCgsNN6A1AyXGkj%2Bz9ZmK6DfmjgnZ46jdT9WjKl5rjcb0n4jB29lz7PMm5scAK6RxU%2BuEbMogY36hzgKe5meNQlvitYZHfhWDivwa72%2Fd0b%2BcTmVndx1isR2fkKhT%2FCvwDzRgmoV6uGf9kSnW898QfSzTJ2%2BXUhqSo6B%2B4d5kJdNZI720lGT%2BSNGjeOPkT6OMNTHCfKHbtYRAP2Ouu&X-Amz-Signature=99080676fbc0cf20bd70c10510082a8ee1801b9bb01db89fee29074794ea0f1d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UTVJROAA%2F20261014%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261014T131838Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFL9lAJwqibFd63CXEaiEBqy7Jpboffyy73z5ofW16n%2BAiEAzJo%2F7ggeUADHVyKEheHvXyE6Fs2dZSKPdcQ2TOmqt0IqiAQItv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDK6ESnQSrTIw%2FUohCircAz2QyWngXVAoQXotdsLs1TyQqiEEMQANQp%2BIce61FtKVUn8AfvllipC08PoTcPdRlChFSgeJ3WDwzIdrEqj8S0bKPtnD%2Be1a6ndFNcHt4H3qYOYfT6%2BWoOFM8j8Tv%2Bc72OukIX52jK%2FmQEq%2BS01x0T30s9GIRZBZm6e3h2p8C83t1HFi8vsWnpAU3%2FiGVZ6tywxYYgAtXh5w5hjzrtX5SukSs1GQW88qsLq89ksBzBZZ1Hbu6DnPRG76Czd2o2RY9X1RKeX60P6VUBbC6sWhrmaRd7toiuAb0WJC1X4cI6SKBq%2FFaE%2B5qL4f7PQoopujXsZB%2FvHWF%2F%2FbUkLs0mEbuY%2Bz4e63qoLfel7ZdSoQhNCjJ3q%2FSeriHz6ozvPs8dDTDrlWU6vY6atSC4oIioeJZyEeiWZrUMEnZ%2BV69HG6z6afbgJmmTRMx7uGBrhwBjVQphPlvrt3aUICIzhO6KFtiC5cLydOyyZReDVRTbrgqZ%2Behdy5iFsA0K4UeRBNs3r6vAfxN%2B8GPCNIxgZW%2BaJTjjX9WrMQryzTBVT1UHY0HgNjG6YfhNtkK5TdJP2EthWbLP5XEsAsyhJZvTHb7TPwZ%2FKfePIiedDfLb0pftbE6Tkbw9%2Fib6z02nJr0pVFMInsvdYGOqUBf1%2B7tZ1EFF6vv83S77xlxvOkdfwS5Bn864%2FkQDb1HAE7pBCIruRhnTSB9UUq%2F5UlUmg4u1qmHupQ%2BSzsV42b9jWiTrvQBvy%2Bwvfl8bQ47wQSrZMrkJvO8GVW426n7B3c69yadYPxt3%2FyQYjg91kwB6F%2FwlhvtNGaVrBNN68V6VttGE39t0sMfnazaw%2BJmm%2B%2Bzd3CUuKJkljEDcd9LgmBm7y7v%2BDr&X-Amz-Signature=0896f48c374a644085f0a0b677147dae0edc8d8494e998cde36d192128c8c3f8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UTVJROAA%2F20261014%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261014T131839Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEO3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFL9lAJwqibFd63CXEaiEBqy7Jpboffyy73z5ofW16n%2BAiEAzJo%2F7ggeUADHVyKEheHvXyE6Fs2dZSKPdcQ2TOmqt0IqiAQItv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDK6ESnQSrTIw%2FUohCircAz2QyWngXVAoQXotdsLs1TyQqiEEMQANQp%2BIce61FtKVUn8AfvllipC08PoTcPdRlChFSgeJ3WDwzIdrEqj8S0bKPtnD%2Be1a6ndFNcHt4H3qYOYfT6%2BWoOFM8j8Tv%2Bc72OukIX52jK%2FmQEq%2BS01x0T30s9GIRZBZm6e3h2p8C83t1HFi8vsWnpAU3%2FiGVZ6tywxYYgAtXh5w5hjzrtX5SukSs1GQW88qsLq89ksBzBZZ1Hbu6DnPRG76Czd2o2RY9X1RKeX60P6VUBbC6sWhrmaRd7toiuAb0WJC1X4cI6SKBq%2FFaE%2B5qL4f7PQoopujXsZB%2FvHWF%2F%2FbUkLs0mEbuY%2Bz4e63qoLfel7ZdSoQhNCjJ3q%2FSeriHz6ozvPs8dDTDrlWU6vY6atSC4oIioeJZyEeiWZrUMEnZ%2BV69HG6z6afbgJmmTRMx7uGBrhwBjVQphPlvrt3aUICIzhO6KFtiC5cLydOyyZReDVRTbrgqZ%2Behdy5iFsA0K4UeRBNs3r6vAfxN%2B8GPCNIxgZW%2BaJTjjX9WrMQryzTBVT1UHY0HgNjG6YfhNtkK5TdJP2EthWbLP5XEsAsyhJZvTHb7TPwZ%2FKfePIiedDfLb0pftbE6Tkbw9%2Fib6z02nJr0pVFMInsvdYGOqUBf1%2B7tZ1EFF6vv83S77xlxvOkdfwS5Bn864%2FkQDb1HAE7pBCIruRhnTSB9UUq%2F5UlUmg4u1qmHupQ%2BSzsV42b9jWiTrvQBvy%2Bwvfl8bQ47wQSrZMrkJvO8GVW426n7B3c69yadYPxt3%2FyQYjg91kwB6F%2FwlhvtNGaVrBNN68V6VttGE39t0sMfnazaw%2BJmm%2B%2Bzd3CUuKJkljEDcd9LgmBm7y7v%2BDr&X-Amz-Signature=99b2a1a6a2206b718c4f6a525adf17043c479bdc9a03bfd39f43f889f45aff5f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
