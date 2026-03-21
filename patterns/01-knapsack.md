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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RF3WTVNF%2F20260321%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260321T083258Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCAOyV89SiAwGiRbL69A61wZz8XMQJHiFhGAkxwdLlZSwIhALRmA9YSYWCJQRWlpoisvzc1it89t92%2FUnr277et23uBKv8DCEkQABoMNjM3NDIzMTgzODA1Igw8Tz9ruNfOM7Wa3ykq3AOiMZvmbGljyJUwMt7tGePitZsADTFFJXwsEDlUsN9Iz3byCaQieUMEQnFX7B%2FB%2FVtim%2FuONgaijIpTyJXVoUHdt%2FzMguYuVJ490jd%2FKQzTnYuDjqr4D96df769g4bMSb41VIXVJMp1ToZo4vk7wV3mYUfRNzyHQUJZ0Mj%2FgK%2BFPjx7mEpi5HTI3iyvQ8dCmQ%2Bucqs4zbq8vLw72Q%2BVJ1OGx8rSBcqkW6XUIy3H9YJjaP6rewVUJoF%2FUq6HKjwXY9wfYrKobpXnTdBkI3bRqGk9BG8fIqf1tF%2BLwQgbrHOSQy31xe9neQFxDQjHdyKwfe84iNsOS6KaMhEE3cF8LJ%2BEaVBNsL09Tr7NOVRwbRYCrP9mX3%2Bn4XdPFLHXsMuWY%2B0rvn9tjxa%2BDhffpT0ZtezFCQ%2F5ZZQF4cCFwJvxFJVvoooaRjOgFWAwRitYxZEzCF4rC23BTbcjUi0RXaY1n%2Fu%2BY1mDJYZBwRvNNksWKep2OtS6Zab5Y2adu0kWx8k59HNcV71Pjjxg75rb9JsPJ7UtLFFGcLQZA8AohG09u57zKLPK9avJ4oMN7PZvb%2FNLWHpA0fZpM5f2oxU1VQcxYsL3Kt4w4ZWr4hA%2FQlU1D%2BOQKjVl3ipZTIsed1zqyzDTjvnNBjqkAe8hVb9C8OcnDe4adKvTi%2F%2BLk%2FA46IL4n8brTcYbeWlcYl3i3PkpeYTCyJnuCTJyVjQyBu%2FuQGB%2BbSLLdlax24y%2B%2Bg4S5mZoqZ50DCr9KZS3yDu%2FCEjd%2FHEYXd%2FzpWA1B7Z9%2BAV4dvRNqB%2BVzzA9vJRVQLYb8uB%2BC5QRgfHTAHT52R9Grjlcto4kpfHib0qD6EpaPlObJhvWCtNN6db9OwckqyR%2F&X-Amz-Signature=74b3f0528b5707aaa6127d3e48dd9979e6e3f4b3511bab774199e610580b4c6a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RF3WTVNF%2F20260321%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260321T083258Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCAOyV89SiAwGiRbL69A61wZz8XMQJHiFhGAkxwdLlZSwIhALRmA9YSYWCJQRWlpoisvzc1it89t92%2FUnr277et23uBKv8DCEkQABoMNjM3NDIzMTgzODA1Igw8Tz9ruNfOM7Wa3ykq3AOiMZvmbGljyJUwMt7tGePitZsADTFFJXwsEDlUsN9Iz3byCaQieUMEQnFX7B%2FB%2FVtim%2FuONgaijIpTyJXVoUHdt%2FzMguYuVJ490jd%2FKQzTnYuDjqr4D96df769g4bMSb41VIXVJMp1ToZo4vk7wV3mYUfRNzyHQUJZ0Mj%2FgK%2BFPjx7mEpi5HTI3iyvQ8dCmQ%2Bucqs4zbq8vLw72Q%2BVJ1OGx8rSBcqkW6XUIy3H9YJjaP6rewVUJoF%2FUq6HKjwXY9wfYrKobpXnTdBkI3bRqGk9BG8fIqf1tF%2BLwQgbrHOSQy31xe9neQFxDQjHdyKwfe84iNsOS6KaMhEE3cF8LJ%2BEaVBNsL09Tr7NOVRwbRYCrP9mX3%2Bn4XdPFLHXsMuWY%2B0rvn9tjxa%2BDhffpT0ZtezFCQ%2F5ZZQF4cCFwJvxFJVvoooaRjOgFWAwRitYxZEzCF4rC23BTbcjUi0RXaY1n%2Fu%2BY1mDJYZBwRvNNksWKep2OtS6Zab5Y2adu0kWx8k59HNcV71Pjjxg75rb9JsPJ7UtLFFGcLQZA8AohG09u57zKLPK9avJ4oMN7PZvb%2FNLWHpA0fZpM5f2oxU1VQcxYsL3Kt4w4ZWr4hA%2FQlU1D%2BOQKjVl3ipZTIsed1zqyzDTjvnNBjqkAe8hVb9C8OcnDe4adKvTi%2F%2BLk%2FA46IL4n8brTcYbeWlcYl3i3PkpeYTCyJnuCTJyVjQyBu%2FuQGB%2BbSLLdlax24y%2B%2Bg4S5mZoqZ50DCr9KZS3yDu%2FCEjd%2FHEYXd%2FzpWA1B7Z9%2BAV4dvRNqB%2BVzzA9vJRVQLYb8uB%2BC5QRgfHTAHT52R9Grjlcto4kpfHib0qD6EpaPlObJhvWCtNN6db9OwckqyR%2F&X-Amz-Signature=635c153c64e3c8a70e0fff9efff2c58ba1cc4343609a4e753acbe7bde1501621&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RF3WTVNF%2F20260321%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260321T083258Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCAOyV89SiAwGiRbL69A61wZz8XMQJHiFhGAkxwdLlZSwIhALRmA9YSYWCJQRWlpoisvzc1it89t92%2FUnr277et23uBKv8DCEkQABoMNjM3NDIzMTgzODA1Igw8Tz9ruNfOM7Wa3ykq3AOiMZvmbGljyJUwMt7tGePitZsADTFFJXwsEDlUsN9Iz3byCaQieUMEQnFX7B%2FB%2FVtim%2FuONgaijIpTyJXVoUHdt%2FzMguYuVJ490jd%2FKQzTnYuDjqr4D96df769g4bMSb41VIXVJMp1ToZo4vk7wV3mYUfRNzyHQUJZ0Mj%2FgK%2BFPjx7mEpi5HTI3iyvQ8dCmQ%2Bucqs4zbq8vLw72Q%2BVJ1OGx8rSBcqkW6XUIy3H9YJjaP6rewVUJoF%2FUq6HKjwXY9wfYrKobpXnTdBkI3bRqGk9BG8fIqf1tF%2BLwQgbrHOSQy31xe9neQFxDQjHdyKwfe84iNsOS6KaMhEE3cF8LJ%2BEaVBNsL09Tr7NOVRwbRYCrP9mX3%2Bn4XdPFLHXsMuWY%2B0rvn9tjxa%2BDhffpT0ZtezFCQ%2F5ZZQF4cCFwJvxFJVvoooaRjOgFWAwRitYxZEzCF4rC23BTbcjUi0RXaY1n%2Fu%2BY1mDJYZBwRvNNksWKep2OtS6Zab5Y2adu0kWx8k59HNcV71Pjjxg75rb9JsPJ7UtLFFGcLQZA8AohG09u57zKLPK9avJ4oMN7PZvb%2FNLWHpA0fZpM5f2oxU1VQcxYsL3Kt4w4ZWr4hA%2FQlU1D%2BOQKjVl3ipZTIsed1zqyzDTjvnNBjqkAe8hVb9C8OcnDe4adKvTi%2F%2BLk%2FA46IL4n8brTcYbeWlcYl3i3PkpeYTCyJnuCTJyVjQyBu%2FuQGB%2BbSLLdlax24y%2B%2Bg4S5mZoqZ50DCr9KZS3yDu%2FCEjd%2FHEYXd%2FzpWA1B7Z9%2BAV4dvRNqB%2BVzzA9vJRVQLYb8uB%2BC5QRgfHTAHT52R9Grjlcto4kpfHib0qD6EpaPlObJhvWCtNN6db9OwckqyR%2F&X-Amz-Signature=83bf380364f3f2de81fec34de7a3f68d7350a27f5959e33b32efea631699ee3f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XUNROQZ6%2F20260321%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260321T083259Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC9yok4w5BFeKIlfrCh0LhUwDqKt2Gd%2Bkm2TClO9Jyq7AIgCfy6XMcT9XtcvNI0aE%2Bq6flZD9x%2BknWYbvO0Ny1ZLs8q%2FwMISRAAGgw2Mzc0MjMxODM4MDUiDFQ6RzKt5axVggzMqyrcA0o1Fjnn3WWXjGcnd1KoiAIeexC%2Fvk96y6EJxjkDwRy3rQXBPRd8Q2KGEjHxMWN9h%2FnvndCDfMMGF4kuaofVMPHs56438aIONsLG06v4jo6n6zsMGOW3bu3QdjgMKZmoGDofsvr3Bh%2BVMfDdM4BnfgZgZb3GDDjLcM0uAcbVOiYj3ExYsA9neqYdJm7qs91ZvXTci7W1T2FnJV4cqy7yF7tOjeueBt2oq%2Ba4kv88lxCl%2FX4KA%2FMBijSVHOHXY8Ngg8bLM9KyXXEMpP9VK7GgoQfeyI6vkclyOK%2BV5UWZV5EVMpVkhAtXDMfYb1%2F6cA9HXE6uPaB3isdhCJtYN7CiFAvmIk8T2Y0W787OuejdISze6AQ7iuM7PZCN0lXK2F5IuqBWQyn0KByPcuXNLKbECL3BrGPamcHtFDF%2BAkmHnML3swqK5%2FdH9ny7ppZo4qzosASuMtyovb%2Biin%2B%2F9ro5IVsSitXgtCxjx%2BxS9md14EhVxN3V8F5eu3MVvUlLjjDoc3V3CEB31V7w2C6HpPwy%2Fgv%2FbkjeyWSLEOaePQg2Nj0%2Bg%2B4nxGu4dhqJ4fK9MHutDy0%2BtdBDnM4KQKW%2BPl40fuCaQFKv5WDO1BNPTbJ22fGDHVFY38t5vuzRWtdDMIaP%2Bc0GOqUBKGkoXs%2BFP2wdkUfn%2FVz6Rz4acpIMDxkITx0kCbdNQf5LTnp1jEhQaHB7y05v5331CgA4IWyLfS9zSJS7gywRIWlH2cfqSm9p4NZMU6TQWWuEOmIdehKn4aDuPms1UIB6jWGZghnnav%2BBNf3rbTlf4ZsLqxch1DUa3mlyZIeGczphPEmgiSGBHZ14eCbZvpsAE9FAHVpbJFl3OSdRXHTjBtGRIJBV&X-Amz-Signature=72308b6cc9ad960fff3db8cf5df741a6ab7cd2456aa77fd4b6bd3b4ebe84bfa4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XUNROQZ6%2F20260321%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260321T083259Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC9yok4w5BFeKIlfrCh0LhUwDqKt2Gd%2Bkm2TClO9Jyq7AIgCfy6XMcT9XtcvNI0aE%2Bq6flZD9x%2BknWYbvO0Ny1ZLs8q%2FwMISRAAGgw2Mzc0MjMxODM4MDUiDFQ6RzKt5axVggzMqyrcA0o1Fjnn3WWXjGcnd1KoiAIeexC%2Fvk96y6EJxjkDwRy3rQXBPRd8Q2KGEjHxMWN9h%2FnvndCDfMMGF4kuaofVMPHs56438aIONsLG06v4jo6n6zsMGOW3bu3QdjgMKZmoGDofsvr3Bh%2BVMfDdM4BnfgZgZb3GDDjLcM0uAcbVOiYj3ExYsA9neqYdJm7qs91ZvXTci7W1T2FnJV4cqy7yF7tOjeueBt2oq%2Ba4kv88lxCl%2FX4KA%2FMBijSVHOHXY8Ngg8bLM9KyXXEMpP9VK7GgoQfeyI6vkclyOK%2BV5UWZV5EVMpVkhAtXDMfYb1%2F6cA9HXE6uPaB3isdhCJtYN7CiFAvmIk8T2Y0W787OuejdISze6AQ7iuM7PZCN0lXK2F5IuqBWQyn0KByPcuXNLKbECL3BrGPamcHtFDF%2BAkmHnML3swqK5%2FdH9ny7ppZo4qzosASuMtyovb%2Biin%2B%2F9ro5IVsSitXgtCxjx%2BxS9md14EhVxN3V8F5eu3MVvUlLjjDoc3V3CEB31V7w2C6HpPwy%2Fgv%2FbkjeyWSLEOaePQg2Nj0%2Bg%2B4nxGu4dhqJ4fK9MHutDy0%2BtdBDnM4KQKW%2BPl40fuCaQFKv5WDO1BNPTbJ22fGDHVFY38t5vuzRWtdDMIaP%2Bc0GOqUBKGkoXs%2BFP2wdkUfn%2FVz6Rz4acpIMDxkITx0kCbdNQf5LTnp1jEhQaHB7y05v5331CgA4IWyLfS9zSJS7gywRIWlH2cfqSm9p4NZMU6TQWWuEOmIdehKn4aDuPms1UIB6jWGZghnnav%2BBNf3rbTlf4ZsLqxch1DUa3mlyZIeGczphPEmgiSGBHZ14eCbZvpsAE9FAHVpbJFl3OSdRXHTjBtGRIJBV&X-Amz-Signature=e570d431f3045986cf390a43c7805c689f37618ebd3378c86dd74003fc262851&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XUNROQZ6%2F20260321%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260321T083259Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC9yok4w5BFeKIlfrCh0LhUwDqKt2Gd%2Bkm2TClO9Jyq7AIgCfy6XMcT9XtcvNI0aE%2Bq6flZD9x%2BknWYbvO0Ny1ZLs8q%2FwMISRAAGgw2Mzc0MjMxODM4MDUiDFQ6RzKt5axVggzMqyrcA0o1Fjnn3WWXjGcnd1KoiAIeexC%2Fvk96y6EJxjkDwRy3rQXBPRd8Q2KGEjHxMWN9h%2FnvndCDfMMGF4kuaofVMPHs56438aIONsLG06v4jo6n6zsMGOW3bu3QdjgMKZmoGDofsvr3Bh%2BVMfDdM4BnfgZgZb3GDDjLcM0uAcbVOiYj3ExYsA9neqYdJm7qs91ZvXTci7W1T2FnJV4cqy7yF7tOjeueBt2oq%2Ba4kv88lxCl%2FX4KA%2FMBijSVHOHXY8Ngg8bLM9KyXXEMpP9VK7GgoQfeyI6vkclyOK%2BV5UWZV5EVMpVkhAtXDMfYb1%2F6cA9HXE6uPaB3isdhCJtYN7CiFAvmIk8T2Y0W787OuejdISze6AQ7iuM7PZCN0lXK2F5IuqBWQyn0KByPcuXNLKbECL3BrGPamcHtFDF%2BAkmHnML3swqK5%2FdH9ny7ppZo4qzosASuMtyovb%2Biin%2B%2F9ro5IVsSitXgtCxjx%2BxS9md14EhVxN3V8F5eu3MVvUlLjjDoc3V3CEB31V7w2C6HpPwy%2Fgv%2FbkjeyWSLEOaePQg2Nj0%2Bg%2B4nxGu4dhqJ4fK9MHutDy0%2BtdBDnM4KQKW%2BPl40fuCaQFKv5WDO1BNPTbJ22fGDHVFY38t5vuzRWtdDMIaP%2Bc0GOqUBKGkoXs%2BFP2wdkUfn%2FVz6Rz4acpIMDxkITx0kCbdNQf5LTnp1jEhQaHB7y05v5331CgA4IWyLfS9zSJS7gywRIWlH2cfqSm9p4NZMU6TQWWuEOmIdehKn4aDuPms1UIB6jWGZghnnav%2BBNf3rbTlf4ZsLqxch1DUa3mlyZIeGczphPEmgiSGBHZ14eCbZvpsAE9FAHVpbJFl3OSdRXHTjBtGRIJBV&X-Amz-Signature=cb7e86824ef9f0e0e6ee95f3e0d33685e1c3d98c2ed646753b5f81b27a9db1be&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XUNROQZ6%2F20260321%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260321T083259Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC9yok4w5BFeKIlfrCh0LhUwDqKt2Gd%2Bkm2TClO9Jyq7AIgCfy6XMcT9XtcvNI0aE%2Bq6flZD9x%2BknWYbvO0Ny1ZLs8q%2FwMISRAAGgw2Mzc0MjMxODM4MDUiDFQ6RzKt5axVggzMqyrcA0o1Fjnn3WWXjGcnd1KoiAIeexC%2Fvk96y6EJxjkDwRy3rQXBPRd8Q2KGEjHxMWN9h%2FnvndCDfMMGF4kuaofVMPHs56438aIONsLG06v4jo6n6zsMGOW3bu3QdjgMKZmoGDofsvr3Bh%2BVMfDdM4BnfgZgZb3GDDjLcM0uAcbVOiYj3ExYsA9neqYdJm7qs91ZvXTci7W1T2FnJV4cqy7yF7tOjeueBt2oq%2Ba4kv88lxCl%2FX4KA%2FMBijSVHOHXY8Ngg8bLM9KyXXEMpP9VK7GgoQfeyI6vkclyOK%2BV5UWZV5EVMpVkhAtXDMfYb1%2F6cA9HXE6uPaB3isdhCJtYN7CiFAvmIk8T2Y0W787OuejdISze6AQ7iuM7PZCN0lXK2F5IuqBWQyn0KByPcuXNLKbECL3BrGPamcHtFDF%2BAkmHnML3swqK5%2FdH9ny7ppZo4qzosASuMtyovb%2Biin%2B%2F9ro5IVsSitXgtCxjx%2BxS9md14EhVxN3V8F5eu3MVvUlLjjDoc3V3CEB31V7w2C6HpPwy%2Fgv%2FbkjeyWSLEOaePQg2Nj0%2Bg%2B4nxGu4dhqJ4fK9MHutDy0%2BtdBDnM4KQKW%2BPl40fuCaQFKv5WDO1BNPTbJ22fGDHVFY38t5vuzRWtdDMIaP%2Bc0GOqUBKGkoXs%2BFP2wdkUfn%2FVz6Rz4acpIMDxkITx0kCbdNQf5LTnp1jEhQaHB7y05v5331CgA4IWyLfS9zSJS7gywRIWlH2cfqSm9p4NZMU6TQWWuEOmIdehKn4aDuPms1UIB6jWGZghnnav%2BBNf3rbTlf4ZsLqxch1DUa3mlyZIeGczphPEmgiSGBHZ14eCbZvpsAE9FAHVpbJFl3OSdRXHTjBtGRIJBV&X-Amz-Signature=9b767a8f1d33f134440a09406d415ee9a201649a6ec7e9c583e05fb97ab6e44a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666J7FYDOJ%2F20260321%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260321T083300Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEX2x9no6c6k47oYGwwqMytpORXgTaBV3AJ3z5OMcR5dAiA%2FKWToqbNZdZMFNZ0m%2FMVN9nIQ%2BqUuKwH0w7BMX5DphCr%2FAwhIEAAaDDYzNzQyMzE4MzgwNSIM2ImvT4j4x%2FKTwUzBKtwDarViNEkgb1nLYYGcR8WNGzkHs7oRk0qdxZEZZhdR0fPFRcyRpk7YJPGAMaYWKHTSU6PDgHv4cY3%2FJwxUtn6iEPjkpNYYgd8aCrpLb2sB3IwP485JqN0oAE37Mi6YjBJZedmX2lD9w%2Fgmifydr79FVeZHN%2Bg3OdD5BAI3%2FzJqchj960fDu3Ps4PCAGlq0Ad5HSPIg%2FOSSQedJcGpNP%2BrxHdpssKv7yxtGcOUqugMt4q4RTQCOLenQ9soYg3p0CHjUcXVjAg4wXj7ieQppQUbrdqO97EW%2BXnYu8jsBDvPoqmKgE80mCaAh7ZfoahNF9wtnARrnQ7ismnvYvOiR%2BgD060RIvVTjbK4Na7j76UMsPfvJ5f7UbXgIeoh6klNbd32jtZPaljj9GPRD4mjdB94owX5VDIrLfUvDjaWcjBpB2h%2FvE0cJv5Yxgp88LWIp0JSMjCuMiMPjTx7PKzFkHi3KXq8SAUwVwOlFEQkBCvhbnrmIzPA%2BzeqPM7XUEfaPoMXIDN0AYmvHkFJUeEbY9Lcrz5bqH2J4HJuVMSeBLVGJDZVTAc%2FjK39JQmPZqNoUb0NKe3ixxNCiO2l1YUCNc2T11YcyY4rfVWv2iNzCxKRy3w4kxs8fOpS10T9McWQwo475zQY6pgFOHlSyJojHuGzytQESAT0UiG%2F8wR%2F6IoIzKDZ7%2FIuIRIazURi3HB21uSL3axz3ZKzr8xsYNvTegLijFehQyQ%2FFf4dYgB%2B%2BMuyfcV8nFQdODZRTRlNmxeilnNpcfTYdfXCKiAqrqF%2FaHHS87DpeAtZxTdpSYX4wXa%2B4bxZwSZ%2FFlUpl5KhwDKogLVeeubGDlTbMQ1cEUITaIb9dlj4BZlOJ3Txpcqe1&X-Amz-Signature=896e661e34b823c51a0558d975be53cc37b1fed25ff8abc5afda3337ac87304e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XNEF5KZS%2F20260321%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260321T083301Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIF3Uj92Y3XB9Ke5XXniQGsLcUon0zlL2h4WwSbvRQ6ISAiBYAfWUVnZxmu%2FVwlKpwTr9xwmdEszN77cxHidH65S%2BkSr%2FAwhIEAAaDDYzNzQyMzE4MzgwNSIMgVda9WHdx9igfuK8KtwDf67CMqbqWQFuEK3%2FZr%2BA8dt2bNNEPgsOcGTB0rYeogWExPzTc%2FwytCyIpYg8YOqxbVsd%2B1f3UOByBjFaX%2BZD%2FO01ehxElD9t%2B9ogOen3usjCLhtqJLFIdLjGJE6570mDZR%2BbrALS2fAVvG1fH%2BTd1HGSXKJw3Ct1f1dMt8KVzWBR4zHajpqADpr%2FqO%2Fngui2TkJLepK0E5ERlBn2PfZH4aSji7nkkiyLgcsh6ksS1vHMTj5OmJL%2BbioAPRP%2FtFu%2BMX3%2FvTd9E2r81EJVeiX9zducy%2FCZepDlRd1cCvItC%2FRFvsO%2Fy0QIGCleo%2BpDGHqvP6ik4S9wOKqjERfnEkEq8P4xH0iS3L0vEZqvr0xibsKH%2BRcG%2F%2BiRMhHafzEGY%2FTb%2FbRFv78q2Hr5Z2SgtXj3npFLBdNtQDSLEFRVKejUBLy49KO7RYAtclwrIxCgeBHdCB8kjb5S1cfSp%2BUo3szQKMvrCTVis5DLXUphP6UuTaoApojRR88eX44uCi56CubJgcC6E0sgmeJEEdYE4RiWR8tK%2Fz68w7%2BfasCwY38nUkYNDkF9wpEvPNVcZUhcFQvnswjM7%2FhapfdcwqV%2F9g9kzIgWkL6qb550FVl3kBq3fe5DvlZqKWjYsOd0E%2B8w5o35zQY6pgF5445aheBlsgOCXuqpm6LFVmiRyvQwVDmGpcDeLyLxpS2CGj8SinF56ZKxlKIHlGCKpwarnIpCdaDDVjuWrA7dcHW6ggVIgHGdt8qwhLvcO0ZPsC%2B6gD643f3bilur8%2Fh5TRi924c%2FKsazh%2Ft1ORJbau0YokipXiuvt3aoHfYwjOy7QCFaqz86o%2FjMV6KAxQKUibDrNDEnjjUYqSI0zs3NDVK0K%2BNv&X-Amz-Signature=10caa49bfe0919fc35539b6ce138c943ca5e9400fb64141f83164d29b405dfbd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XNEF5KZS%2F20260321%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260321T083301Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEID%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIF3Uj92Y3XB9Ke5XXniQGsLcUon0zlL2h4WwSbvRQ6ISAiBYAfWUVnZxmu%2FVwlKpwTr9xwmdEszN77cxHidH65S%2BkSr%2FAwhIEAAaDDYzNzQyMzE4MzgwNSIMgVda9WHdx9igfuK8KtwDf67CMqbqWQFuEK3%2FZr%2BA8dt2bNNEPgsOcGTB0rYeogWExPzTc%2FwytCyIpYg8YOqxbVsd%2B1f3UOByBjFaX%2BZD%2FO01ehxElD9t%2B9ogOen3usjCLhtqJLFIdLjGJE6570mDZR%2BbrALS2fAVvG1fH%2BTd1HGSXKJw3Ct1f1dMt8KVzWBR4zHajpqADpr%2FqO%2Fngui2TkJLepK0E5ERlBn2PfZH4aSji7nkkiyLgcsh6ksS1vHMTj5OmJL%2BbioAPRP%2FtFu%2BMX3%2FvTd9E2r81EJVeiX9zducy%2FCZepDlRd1cCvItC%2FRFvsO%2Fy0QIGCleo%2BpDGHqvP6ik4S9wOKqjERfnEkEq8P4xH0iS3L0vEZqvr0xibsKH%2BRcG%2F%2BiRMhHafzEGY%2FTb%2FbRFv78q2Hr5Z2SgtXj3npFLBdNtQDSLEFRVKejUBLy49KO7RYAtclwrIxCgeBHdCB8kjb5S1cfSp%2BUo3szQKMvrCTVis5DLXUphP6UuTaoApojRR88eX44uCi56CubJgcC6E0sgmeJEEdYE4RiWR8tK%2Fz68w7%2BfasCwY38nUkYNDkF9wpEvPNVcZUhcFQvnswjM7%2FhapfdcwqV%2F9g9kzIgWkL6qb550FVl3kBq3fe5DvlZqKWjYsOd0E%2B8w5o35zQY6pgF5445aheBlsgOCXuqpm6LFVmiRyvQwVDmGpcDeLyLxpS2CGj8SinF56ZKxlKIHlGCKpwarnIpCdaDDVjuWrA7dcHW6ggVIgHGdt8qwhLvcO0ZPsC%2B6gD643f3bilur8%2Fh5TRi924c%2FKsazh%2Ft1ORJbau0YokipXiuvt3aoHfYwjOy7QCFaqz86o%2FjMV6KAxQKUibDrNDEnjjUYqSI0zs3NDVK0K%2BNv&X-Amz-Signature=9ebb04b8b37d52323620b182d5bad7046ff906649cb9f4cb232420f65caf8227&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
