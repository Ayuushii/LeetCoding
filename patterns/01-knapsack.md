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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QVIMSM4B%2F20260802%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260802T095500Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBAaCXVzLXdlc3QtMiJHMEUCIGZ%2BvwNL2gnUbwiweUcg4j8TGfjo%2BxSpcW9Ww1%2BxrWSkAiEAy%2BzOFDNfh9H4xzSAd3XYcNgkOiPCT3KAX0cBKFq3DqEqiAQI2f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBK6oEtFLnMSXj%2Fn4CrcA8FFLrvPmz73uoaFyTnAM8t3ykgT%2B%2Fi2a0EgrUfnVnYnZG2ttc1bt4%2F0Di1WS9LOZHe%2F20K0%2FyYEMEe7gvBBvASotLK7LaRYNbgB1JGRjwb5tizAuJvvY1El%2Fusucu%2BVBYMVDyxDGq%2BXYFKK3QMPKKX98wHCQ%2BJqER1ikqC7s5jtB2IfWSNzu%2B8oRQcXGyYfBoJRsj0duBNY3RpBTqGldYJAvwbH%2FfrBMxDFmcTgRkJRQP5MruFbhCYXh1xy289nkVqsgj5tDmhvEr8l%2BM85Fu5kbx%2BcOlQG2xFo5y2EtrU3yA294DPi8qxgUxCMHaT7Cy5vKD5u6IVAuc69tg0q7MSI6moQNR3wR1Zy9VBRXV8zBZOvmd5RZpBz0pVFkGuE%2FGC3098BvGanysUNvIglTHU1kUYLFOIPh5vWzDgto6o47eFq%2FSPblgIdE3bKG0wpt7JbrSu422DvjB8LTIhfhkAWwAAXkDoY2UL9cPngoFOgsTgUxrEdHyoGITkAqsEc5tLUVuW%2B2TqZGeO10ag5XBZbrvn31GR9o4wFkxuvM%2Bq5p8sXKzLBaTe3PZ4UMSh8hN36Y4lXizoBwpjg%2FOunl%2FuM7hRcPnt3KvVHr1JsTMPyeHdOxmJ0Da%2BQHucIMIjyu9MGOqUBRi0QJWN7pEM3ijcfzXoQN0yV8DI5veDCY4UmPAjAvpu1kv1G8vaAhss06mZzpDa4Sd3Tc6F32OrrCtkL43ErhOamBp8lc0UeKibPqvp%2B9SDHOaM7Fdq6%2Btv30qFbS7qraceLR14%2Bi%2FmVXdkH8u8bAmt8klHcmzXE3h%2B%2Bwh1f51ShA06kL2N6S1a%2Fi0lUghtGaA9ATuOq81xMXxcpVCmnLP9OYaKQ&X-Amz-Signature=8f0421e3aebe036a0cac6a4204530bec18ae0da77236f9497ec6abc4be79d12a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QVIMSM4B%2F20260802%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260802T095500Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBAaCXVzLXdlc3QtMiJHMEUCIGZ%2BvwNL2gnUbwiweUcg4j8TGfjo%2BxSpcW9Ww1%2BxrWSkAiEAy%2BzOFDNfh9H4xzSAd3XYcNgkOiPCT3KAX0cBKFq3DqEqiAQI2f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBK6oEtFLnMSXj%2Fn4CrcA8FFLrvPmz73uoaFyTnAM8t3ykgT%2B%2Fi2a0EgrUfnVnYnZG2ttc1bt4%2F0Di1WS9LOZHe%2F20K0%2FyYEMEe7gvBBvASotLK7LaRYNbgB1JGRjwb5tizAuJvvY1El%2Fusucu%2BVBYMVDyxDGq%2BXYFKK3QMPKKX98wHCQ%2BJqER1ikqC7s5jtB2IfWSNzu%2B8oRQcXGyYfBoJRsj0duBNY3RpBTqGldYJAvwbH%2FfrBMxDFmcTgRkJRQP5MruFbhCYXh1xy289nkVqsgj5tDmhvEr8l%2BM85Fu5kbx%2BcOlQG2xFo5y2EtrU3yA294DPi8qxgUxCMHaT7Cy5vKD5u6IVAuc69tg0q7MSI6moQNR3wR1Zy9VBRXV8zBZOvmd5RZpBz0pVFkGuE%2FGC3098BvGanysUNvIglTHU1kUYLFOIPh5vWzDgto6o47eFq%2FSPblgIdE3bKG0wpt7JbrSu422DvjB8LTIhfhkAWwAAXkDoY2UL9cPngoFOgsTgUxrEdHyoGITkAqsEc5tLUVuW%2B2TqZGeO10ag5XBZbrvn31GR9o4wFkxuvM%2Bq5p8sXKzLBaTe3PZ4UMSh8hN36Y4lXizoBwpjg%2FOunl%2FuM7hRcPnt3KvVHr1JsTMPyeHdOxmJ0Da%2BQHucIMIjyu9MGOqUBRi0QJWN7pEM3ijcfzXoQN0yV8DI5veDCY4UmPAjAvpu1kv1G8vaAhss06mZzpDa4Sd3Tc6F32OrrCtkL43ErhOamBp8lc0UeKibPqvp%2B9SDHOaM7Fdq6%2Btv30qFbS7qraceLR14%2Bi%2FmVXdkH8u8bAmt8klHcmzXE3h%2B%2Bwh1f51ShA06kL2N6S1a%2Fi0lUghtGaA9ATuOq81xMXxcpVCmnLP9OYaKQ&X-Amz-Signature=c2cd40ea1c47a5711e756fcc45798bb23523f00ffac74240dd08f149d128f8e4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QVIMSM4B%2F20260802%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260802T095500Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBAaCXVzLXdlc3QtMiJHMEUCIGZ%2BvwNL2gnUbwiweUcg4j8TGfjo%2BxSpcW9Ww1%2BxrWSkAiEAy%2BzOFDNfh9H4xzSAd3XYcNgkOiPCT3KAX0cBKFq3DqEqiAQI2f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBK6oEtFLnMSXj%2Fn4CrcA8FFLrvPmz73uoaFyTnAM8t3ykgT%2B%2Fi2a0EgrUfnVnYnZG2ttc1bt4%2F0Di1WS9LOZHe%2F20K0%2FyYEMEe7gvBBvASotLK7LaRYNbgB1JGRjwb5tizAuJvvY1El%2Fusucu%2BVBYMVDyxDGq%2BXYFKK3QMPKKX98wHCQ%2BJqER1ikqC7s5jtB2IfWSNzu%2B8oRQcXGyYfBoJRsj0duBNY3RpBTqGldYJAvwbH%2FfrBMxDFmcTgRkJRQP5MruFbhCYXh1xy289nkVqsgj5tDmhvEr8l%2BM85Fu5kbx%2BcOlQG2xFo5y2EtrU3yA294DPi8qxgUxCMHaT7Cy5vKD5u6IVAuc69tg0q7MSI6moQNR3wR1Zy9VBRXV8zBZOvmd5RZpBz0pVFkGuE%2FGC3098BvGanysUNvIglTHU1kUYLFOIPh5vWzDgto6o47eFq%2FSPblgIdE3bKG0wpt7JbrSu422DvjB8LTIhfhkAWwAAXkDoY2UL9cPngoFOgsTgUxrEdHyoGITkAqsEc5tLUVuW%2B2TqZGeO10ag5XBZbrvn31GR9o4wFkxuvM%2Bq5p8sXKzLBaTe3PZ4UMSh8hN36Y4lXizoBwpjg%2FOunl%2FuM7hRcPnt3KvVHr1JsTMPyeHdOxmJ0Da%2BQHucIMIjyu9MGOqUBRi0QJWN7pEM3ijcfzXoQN0yV8DI5veDCY4UmPAjAvpu1kv1G8vaAhss06mZzpDa4Sd3Tc6F32OrrCtkL43ErhOamBp8lc0UeKibPqvp%2B9SDHOaM7Fdq6%2Btv30qFbS7qraceLR14%2Bi%2FmVXdkH8u8bAmt8klHcmzXE3h%2B%2Bwh1f51ShA06kL2N6S1a%2Fi0lUghtGaA9ATuOq81xMXxcpVCmnLP9OYaKQ&X-Amz-Signature=db4f6ef03232a7777c285cae1d5fd192ef9ae067a94623602fc2d2d43096732b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WQAPXG64%2F20260802%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260802T095500Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBAaCXVzLXdlc3QtMiJGMEQCIH59QLWr9%2BcyBhEwHg3zfYFd%2FMRAJgE84fQqGj9LPk78AiAQ3iaMKUSMum2Gvzj%2BcPMMiyk1%2FykrVz9pj9Hhc3xLPyqIBAjZ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMvim4dGaUSjB6tuRZKtwDxulbvlcXIMfQM4X16NTYFd1c7UhoTgTTo8od7I%2BEbm6khiaxDUVU2XX3tIV9hUXb48qC%2FKADpRufKPWnSKyT9%2BCspPdfjWU4HJJ91o3rwDyPlNBAtvVY%2FDk5Xol6G1b%2FtGBdAQ3x3qHOPJdN6daaFXsh4Dm3AsUsGQNFZ1wsEZmSm8lI7GFitGD9I5UOmbaJjYjWqVfR6Kz3RevZrq3GYZ%2Bw0RMAz%2F3QyX3Q2%2FAK4J1iE0I7fD63ylA1r15KfVivKATpTwhccnNBAoDIKdJnLfnMeEePvRUxGdF3xr5XL8WCVjgfVNps0xXcTdZB5wtINYT9qF42KC8Kjg%2FiUKcfTgmvAJawlYwj6b2uTn1HCI4p9JvRzKnzzVt3n9zwi2oBwKKyN66CHTZKsrMg2JgxY%2FeJLAvt7cdwfUlm6KMH5z2bDF2aedUR8ezlznIl3lFGFxZfoH%2FF8ft465JxzOjPpHX1mYYIo7Dxfyw7r4bZotEioj4stF30ybVkcqYQjjHtTcI%2FsIztyV%2F4M%2FwTCAVGV%2Fi0HjViONv43g7cHwO8JPncltA9uAZI0yftEcvhox8Xf7Vp2WXAvvm8MhSyPUzq59xiZs8Lyc06qJ3C8YoyXN3q%2FUqJSDnvVEWWqv8wjPC70wY6pgETmThqUejNHEfRxONbztrSlpOynVjL7ZFI8ofcPAI9VZwU5%2BTgMc1mlODhiWhOp8sKg5HrufslmFTCq2f9LL%2B8iVZG2D0ld0RBMavdaNOcnz96UFh9vHDZC8%2BE24U3jxo%2F61CitxRybL89vbneCweA7pQRdbiMwt5Ke%2FZ%2F67gcl6Wh%2B0JQn%2FA7o3nt95Vnfi%2BJ6YbQ7zV%2BQjeKqzifOC4JiBUbeGjx&X-Amz-Signature=6898a0c4e2d03b93681b7c7da6564c00195ccbff72ffccf2924b985e4f8413e3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WQAPXG64%2F20260802%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260802T095500Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBAaCXVzLXdlc3QtMiJGMEQCIH59QLWr9%2BcyBhEwHg3zfYFd%2FMRAJgE84fQqGj9LPk78AiAQ3iaMKUSMum2Gvzj%2BcPMMiyk1%2FykrVz9pj9Hhc3xLPyqIBAjZ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMvim4dGaUSjB6tuRZKtwDxulbvlcXIMfQM4X16NTYFd1c7UhoTgTTo8od7I%2BEbm6khiaxDUVU2XX3tIV9hUXb48qC%2FKADpRufKPWnSKyT9%2BCspPdfjWU4HJJ91o3rwDyPlNBAtvVY%2FDk5Xol6G1b%2FtGBdAQ3x3qHOPJdN6daaFXsh4Dm3AsUsGQNFZ1wsEZmSm8lI7GFitGD9I5UOmbaJjYjWqVfR6Kz3RevZrq3GYZ%2Bw0RMAz%2F3QyX3Q2%2FAK4J1iE0I7fD63ylA1r15KfVivKATpTwhccnNBAoDIKdJnLfnMeEePvRUxGdF3xr5XL8WCVjgfVNps0xXcTdZB5wtINYT9qF42KC8Kjg%2FiUKcfTgmvAJawlYwj6b2uTn1HCI4p9JvRzKnzzVt3n9zwi2oBwKKyN66CHTZKsrMg2JgxY%2FeJLAvt7cdwfUlm6KMH5z2bDF2aedUR8ezlznIl3lFGFxZfoH%2FF8ft465JxzOjPpHX1mYYIo7Dxfyw7r4bZotEioj4stF30ybVkcqYQjjHtTcI%2FsIztyV%2F4M%2FwTCAVGV%2Fi0HjViONv43g7cHwO8JPncltA9uAZI0yftEcvhox8Xf7Vp2WXAvvm8MhSyPUzq59xiZs8Lyc06qJ3C8YoyXN3q%2FUqJSDnvVEWWqv8wjPC70wY6pgETmThqUejNHEfRxONbztrSlpOynVjL7ZFI8ofcPAI9VZwU5%2BTgMc1mlODhiWhOp8sKg5HrufslmFTCq2f9LL%2B8iVZG2D0ld0RBMavdaNOcnz96UFh9vHDZC8%2BE24U3jxo%2F61CitxRybL89vbneCweA7pQRdbiMwt5Ke%2FZ%2F67gcl6Wh%2B0JQn%2FA7o3nt95Vnfi%2BJ6YbQ7zV%2BQjeKqzifOC4JiBUbeGjx&X-Amz-Signature=57f1c0355e398166d9a0ba9dcf0b8fbf3626aae8b86fe17236697c40f256c6c1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WQAPXG64%2F20260802%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260802T095500Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBAaCXVzLXdlc3QtMiJGMEQCIH59QLWr9%2BcyBhEwHg3zfYFd%2FMRAJgE84fQqGj9LPk78AiAQ3iaMKUSMum2Gvzj%2BcPMMiyk1%2FykrVz9pj9Hhc3xLPyqIBAjZ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMvim4dGaUSjB6tuRZKtwDxulbvlcXIMfQM4X16NTYFd1c7UhoTgTTo8od7I%2BEbm6khiaxDUVU2XX3tIV9hUXb48qC%2FKADpRufKPWnSKyT9%2BCspPdfjWU4HJJ91o3rwDyPlNBAtvVY%2FDk5Xol6G1b%2FtGBdAQ3x3qHOPJdN6daaFXsh4Dm3AsUsGQNFZ1wsEZmSm8lI7GFitGD9I5UOmbaJjYjWqVfR6Kz3RevZrq3GYZ%2Bw0RMAz%2F3QyX3Q2%2FAK4J1iE0I7fD63ylA1r15KfVivKATpTwhccnNBAoDIKdJnLfnMeEePvRUxGdF3xr5XL8WCVjgfVNps0xXcTdZB5wtINYT9qF42KC8Kjg%2FiUKcfTgmvAJawlYwj6b2uTn1HCI4p9JvRzKnzzVt3n9zwi2oBwKKyN66CHTZKsrMg2JgxY%2FeJLAvt7cdwfUlm6KMH5z2bDF2aedUR8ezlznIl3lFGFxZfoH%2FF8ft465JxzOjPpHX1mYYIo7Dxfyw7r4bZotEioj4stF30ybVkcqYQjjHtTcI%2FsIztyV%2F4M%2FwTCAVGV%2Fi0HjViONv43g7cHwO8JPncltA9uAZI0yftEcvhox8Xf7Vp2WXAvvm8MhSyPUzq59xiZs8Lyc06qJ3C8YoyXN3q%2FUqJSDnvVEWWqv8wjPC70wY6pgETmThqUejNHEfRxONbztrSlpOynVjL7ZFI8ofcPAI9VZwU5%2BTgMc1mlODhiWhOp8sKg5HrufslmFTCq2f9LL%2B8iVZG2D0ld0RBMavdaNOcnz96UFh9vHDZC8%2BE24U3jxo%2F61CitxRybL89vbneCweA7pQRdbiMwt5Ke%2FZ%2F67gcl6Wh%2B0JQn%2FA7o3nt95Vnfi%2BJ6YbQ7zV%2BQjeKqzifOC4JiBUbeGjx&X-Amz-Signature=799c38f64c6e6b60cdd57201df737e6f73697ca32de65d6fa6e75300decb3427&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WQAPXG64%2F20260802%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260802T095500Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBAaCXVzLXdlc3QtMiJGMEQCIH59QLWr9%2BcyBhEwHg3zfYFd%2FMRAJgE84fQqGj9LPk78AiAQ3iaMKUSMum2Gvzj%2BcPMMiyk1%2FykrVz9pj9Hhc3xLPyqIBAjZ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMvim4dGaUSjB6tuRZKtwDxulbvlcXIMfQM4X16NTYFd1c7UhoTgTTo8od7I%2BEbm6khiaxDUVU2XX3tIV9hUXb48qC%2FKADpRufKPWnSKyT9%2BCspPdfjWU4HJJ91o3rwDyPlNBAtvVY%2FDk5Xol6G1b%2FtGBdAQ3x3qHOPJdN6daaFXsh4Dm3AsUsGQNFZ1wsEZmSm8lI7GFitGD9I5UOmbaJjYjWqVfR6Kz3RevZrq3GYZ%2Bw0RMAz%2F3QyX3Q2%2FAK4J1iE0I7fD63ylA1r15KfVivKATpTwhccnNBAoDIKdJnLfnMeEePvRUxGdF3xr5XL8WCVjgfVNps0xXcTdZB5wtINYT9qF42KC8Kjg%2FiUKcfTgmvAJawlYwj6b2uTn1HCI4p9JvRzKnzzVt3n9zwi2oBwKKyN66CHTZKsrMg2JgxY%2FeJLAvt7cdwfUlm6KMH5z2bDF2aedUR8ezlznIl3lFGFxZfoH%2FF8ft465JxzOjPpHX1mYYIo7Dxfyw7r4bZotEioj4stF30ybVkcqYQjjHtTcI%2FsIztyV%2F4M%2FwTCAVGV%2Fi0HjViONv43g7cHwO8JPncltA9uAZI0yftEcvhox8Xf7Vp2WXAvvm8MhSyPUzq59xiZs8Lyc06qJ3C8YoyXN3q%2FUqJSDnvVEWWqv8wjPC70wY6pgETmThqUejNHEfRxONbztrSlpOynVjL7ZFI8ofcPAI9VZwU5%2BTgMc1mlODhiWhOp8sKg5HrufslmFTCq2f9LL%2B8iVZG2D0ld0RBMavdaNOcnz96UFh9vHDZC8%2BE24U3jxo%2F61CitxRybL89vbneCweA7pQRdbiMwt5Ke%2FZ%2F67gcl6Wh%2B0JQn%2FA7o3nt95Vnfi%2BJ6YbQ7zV%2BQjeKqzifOC4JiBUbeGjx&X-Amz-Signature=ef1f303fe99b527fce2145a1631eaed0de8feefe67fe26b42fc5fd93d52e4873&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664I4DOIKV%2F20260802%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260802T095500Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBAaCXVzLXdlc3QtMiJIMEYCIQDHzfKFEbGplgjdrRXF0EszPpKVh%2FGQyJYnu3NstedkJgIhANXEB0cEsVQ49I0hlbPU3106eGl22sYWBQU28UnNMEWeKogECNn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyPQDYb4Re%2FLk6glQsq3AN6ONSC3fsFGE8mYcvurWIhxzwn6lX2HNDaqqNZTQAfwX4YVyzFGj%2BOFiVYnBW%2FfxuslqENqV1Iduix%2FgN%2F%2Bx6Lp0H7L6aHZA%2B4rSn%2BvInLahxcNGxF4eTfbE4NxT6c2r8DpC4JUzIhgEy%2Bvu2VE%2FnNYLjDM%2Fua9fLykFMerQmYm9GZ%2Bk%2BiD%2FX0R9E8wGRaWbFK8jqRCEloz5GeEjpSPC8uOE25RPzc0u5nSzo6gXMndrJM1epDBY4WB%2BUR37oCzKsalTOoAcc1HaYEd8OiuogxwJCw4EX40WrWzssqMoxV02CuJk7Td7MSfV8W0OKPHrG20PpE3EPUEmDAF3dM7Ug2EFbHKrvq4C9P%2ByO6IY4hhkR7KFzE6%2FT0OEZWDvXzxP5B2B%2FCgOEMcgpx%2BrfEzsjM%2BuOU0ChQwRmCyqTWstcAJjRSSDgH2F814oFoBU8of%2BOKSnA7C0eYCLykhXLgh7wHD8pMkopiWCcTw5Bug%2F5KpKiovGAb5hc0GMBpT%2FCreZ0AH52lVJSsrbz2cl%2FyB0DVtfP54I0YIbLvWC0Ap2CSKhZYVybUgip9clSGFwzx6VskEV6XRkDOYzMz6doGDw3a3%2Bz1q6O9WY0Cpi2gsWKDAW40w7HwD02NInEKhzDq8rvTBjqkAZgiDF%2FopOGA0qhFqKvt6zffpaVCGNdKSGUke0bEk9S0pF9NKUx7g1oW5YCVGDHfoTj19DRzDk2oeM60PCb48VoLQ4VkqK8qw6T7mZtLKrKqbyl2FjTvwSRMeX%2FwNx%2BeWbWh5xJ9%2FmqhzZ4ObPgonNlVkdj9ahVbf2TUl4A%2BoSjlWUO7iDgz4%2BJ2ylok90nHszBHHpnVyYnRmRz1BfbzPF80eZky&X-Amz-Signature=ffb0ef1100aee2b680d199dae64d5d2ff0fe4094e8bdc0268a992fcbc3a66722&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y57U3CPB%2F20260802%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260802T095501Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBAaCXVzLXdlc3QtMiJHMEUCIQDH24%2FiRaZFojGcXIyqVDCC0ld6Jy4deBKt8JD1bEhqGQIgKMVjOLTO5RJFQdT9U7OF35lbyrISbKpRJVPhmd70VTgqiAQI2f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDE6ALU2mR7%2Fkm0VyFCrcA96J8LH8OwodwxnF%2BX1jmg0uYFnzFJwsCzisrUlxPAz4bJ0%2FE5Cg62PmFdVh9lfNv%2FX1WXyhpgC0eXq%2Feez7YPqOXg9RzATnM5tP2VgGdb2dSkd1qZe2tMc5NZ5m6A0UfspbvstJkoYoKCFaxY08BsZCoy71IpUD4JehPnKXzUWHDUN%2BD9qndLMRdbHeamgbSbkFE%2B4TK3Pa9waRHP7OAmNvrNUOEPfCqf1lGAqHkLGd6c1H5FeapEGC%2FoGDH%2Fp3qigQIAVio62UCq3ZedhDkcCDkH4MoM5pUG6d5pEVIKbDNjjpWLWFCkjsresubeX2DgAF%2Bqadd5NriikVYMYylLu%2Fw1onzPJFymCJ4TxVfbzbgG3TtIpc8LoA%2BtpoecNsr%2B48Tq6b4zCC9TuwYTgNEjBOi1IwZqHNvHIYJDQPALdlebESt%2B%2Bza2NxGKlBbH86%2BUk0UGBDa5a9C88WlnZM%2F4ZLqsIgLDoG%2BDpk%2B4fSaZOLzhcPx%2FGs%2BJPDyPayw8CsOd2XrjnpL%2FeJKiBjk0tFlG3%2Fc2JvuWKnlUbh34rHcL0Lkk%2FHyqJOOpJgG5XF0aXwpnyi%2FOKgWToHOhcdY9nLtf175AZWWFzVEgoWAw%2FNFP2s8m4OmK7fElc8FPd7MPLyu9MGOqUBybrZJ9ORiLt5CBcdTIA2e6Mr12247by2VwM2QGFUhcSTE1ODOUHoHLuK9KJv2YvMiSG4nBwrb9RIGLSvo6Gi3tIsSJRACznSKsU%2FO1o9OY15gwK8Sqdyk4hwzwMu6e40avVhgZrqisXh9Tza1X41xdRt2N6VvzMBg%2B3t%2BBKF7CO%2F0ybj7mIscPAnz9Kp%2Bm8ZxVqFJVb%2FIZMCOCJdLJFxMOCkRx5H&X-Amz-Signature=16c6ec8fb019e5eb27be8b2f4620594cfdfd9bfd3b7c58bc58a4f8121131349c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y57U3CPB%2F20260802%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260802T095501Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBAaCXVzLXdlc3QtMiJHMEUCIQDH24%2FiRaZFojGcXIyqVDCC0ld6Jy4deBKt8JD1bEhqGQIgKMVjOLTO5RJFQdT9U7OF35lbyrISbKpRJVPhmd70VTgqiAQI2f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDE6ALU2mR7%2Fkm0VyFCrcA96J8LH8OwodwxnF%2BX1jmg0uYFnzFJwsCzisrUlxPAz4bJ0%2FE5Cg62PmFdVh9lfNv%2FX1WXyhpgC0eXq%2Feez7YPqOXg9RzATnM5tP2VgGdb2dSkd1qZe2tMc5NZ5m6A0UfspbvstJkoYoKCFaxY08BsZCoy71IpUD4JehPnKXzUWHDUN%2BD9qndLMRdbHeamgbSbkFE%2B4TK3Pa9waRHP7OAmNvrNUOEPfCqf1lGAqHkLGd6c1H5FeapEGC%2FoGDH%2Fp3qigQIAVio62UCq3ZedhDkcCDkH4MoM5pUG6d5pEVIKbDNjjpWLWFCkjsresubeX2DgAF%2Bqadd5NriikVYMYylLu%2Fw1onzPJFymCJ4TxVfbzbgG3TtIpc8LoA%2BtpoecNsr%2B48Tq6b4zCC9TuwYTgNEjBOi1IwZqHNvHIYJDQPALdlebESt%2B%2Bza2NxGKlBbH86%2BUk0UGBDa5a9C88WlnZM%2F4ZLqsIgLDoG%2BDpk%2B4fSaZOLzhcPx%2FGs%2BJPDyPayw8CsOd2XrjnpL%2FeJKiBjk0tFlG3%2Fc2JvuWKnlUbh34rHcL0Lkk%2FHyqJOOpJgG5XF0aXwpnyi%2FOKgWToHOhcdY9nLtf175AZWWFzVEgoWAw%2FNFP2s8m4OmK7fElc8FPd7MPLyu9MGOqUBybrZJ9ORiLt5CBcdTIA2e6Mr12247by2VwM2QGFUhcSTE1ODOUHoHLuK9KJv2YvMiSG4nBwrb9RIGLSvo6Gi3tIsSJRACznSKsU%2FO1o9OY15gwK8Sqdyk4hwzwMu6e40avVhgZrqisXh9Tza1X41xdRt2N6VvzMBg%2B3t%2BBKF7CO%2F0ybj7mIscPAnz9Kp%2Bm8ZxVqFJVb%2FIZMCOCJdLJFxMOCkRx5H&X-Amz-Signature=3dd77e9c60ff41ae6bb1b0f4b59ef6f82d73119cf416a7155e7beb5635bc9622&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
