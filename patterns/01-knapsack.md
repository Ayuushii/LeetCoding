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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UUN5IP2H%2F20260720%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260720T105037Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCkwxrVNGwMd1l%2FKgyOwpui%2BnoKFrUbMHTwIxE9ezjMiQIgSOmBHjuQuFkYjtwcjA7TLufDEWT%2FcSHqsztx4lj7McoqiAQIov%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCFQ%2FDA5monvhrnB3SrcAwAt9Rn1Tnuzsb0zFhbRH5Ury%2BdkTiWqCh%2FAlzTT0D17%2B2GqCZ7FXRJ7k7thh2d1OhtZfw0Xo8AYjSPXEEEQrHauvsibjHA9eHJbdea0%2B7hHZX7Cu9UfkTbiKhK32qGmH9Ad%2BEC6x1tNsg8xUhT2fnNCLQG47vz%2FnzEyo6y%2FkBoZGk1RIBz0BLtbbZPbloE%2BV3CqiZ6VD8V5taErePOS8HyzNbDBGw5fGUoX3WFkNSyFIVoHnTKvMSVshwObW7CmnbXTCdq6YEfHucCofQWXK8LoaXf%2FL%2BgyQ37KoRmMp9dXYAFn2jweZekifWjOVwYm%2BCLZTSO%2B1kfVtiXUx%2Be0vgp986lHneVhbMjjDoQZy8SOEheaR0teV4%2F1QCGCWpkB2jw7WjkJEJXrrv6hEleG0YNxy04IFMM%2F9irtaPrnNSF90C1sGX4yza2PyTe9Vtp0yrgcLL9Fh1MTeJrQeMS%2Fd9x27D9ok%2Fet%2FRsmvodjk9vu24wTvmXJRUDAl%2BI8pUkpJR50HGN%2BggNRHYZUK%2Fsu7hhvTuay2Gb%2FvLQ6ekonWpRKp4aRsXicyUS9EjyvAJvUekz43wdinGjlTfkuYO3dPAPoX3wMViUgzWRRsWl3Blv8WIJMESsGZs%2FBF8JEMKvL99IGOqUBbMxZjWzkbiiadYp79EJAiqfQehfDXq4eAohqEfEVrVfYaPyJgLk1HxurlQICe8e%2B7JVASMEeW48ToLU%2Bik3RVGGEA6Uxx3rgUBT25poL%2FVDbpJEo32C5ce4DRv%2FGyI7W8qwd4mbHn3Xwm6rv9cXZCX7aMG4PmqGNMNViz0UWvs%2FMP0lxBAn74Num8nDxvpng9XfWGoinElv2Ze5V56V5ufB5BWoe&X-Amz-Signature=84139bc18ce3f36e6e4929a31d010009835d6c338db3ae156b63dcced7b203da&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UUN5IP2H%2F20260720%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260720T105037Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCkwxrVNGwMd1l%2FKgyOwpui%2BnoKFrUbMHTwIxE9ezjMiQIgSOmBHjuQuFkYjtwcjA7TLufDEWT%2FcSHqsztx4lj7McoqiAQIov%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCFQ%2FDA5monvhrnB3SrcAwAt9Rn1Tnuzsb0zFhbRH5Ury%2BdkTiWqCh%2FAlzTT0D17%2B2GqCZ7FXRJ7k7thh2d1OhtZfw0Xo8AYjSPXEEEQrHauvsibjHA9eHJbdea0%2B7hHZX7Cu9UfkTbiKhK32qGmH9Ad%2BEC6x1tNsg8xUhT2fnNCLQG47vz%2FnzEyo6y%2FkBoZGk1RIBz0BLtbbZPbloE%2BV3CqiZ6VD8V5taErePOS8HyzNbDBGw5fGUoX3WFkNSyFIVoHnTKvMSVshwObW7CmnbXTCdq6YEfHucCofQWXK8LoaXf%2FL%2BgyQ37KoRmMp9dXYAFn2jweZekifWjOVwYm%2BCLZTSO%2B1kfVtiXUx%2Be0vgp986lHneVhbMjjDoQZy8SOEheaR0teV4%2F1QCGCWpkB2jw7WjkJEJXrrv6hEleG0YNxy04IFMM%2F9irtaPrnNSF90C1sGX4yza2PyTe9Vtp0yrgcLL9Fh1MTeJrQeMS%2Fd9x27D9ok%2Fet%2FRsmvodjk9vu24wTvmXJRUDAl%2BI8pUkpJR50HGN%2BggNRHYZUK%2Fsu7hhvTuay2Gb%2FvLQ6ekonWpRKp4aRsXicyUS9EjyvAJvUekz43wdinGjlTfkuYO3dPAPoX3wMViUgzWRRsWl3Blv8WIJMESsGZs%2FBF8JEMKvL99IGOqUBbMxZjWzkbiiadYp79EJAiqfQehfDXq4eAohqEfEVrVfYaPyJgLk1HxurlQICe8e%2B7JVASMEeW48ToLU%2Bik3RVGGEA6Uxx3rgUBT25poL%2FVDbpJEo32C5ce4DRv%2FGyI7W8qwd4mbHn3Xwm6rv9cXZCX7aMG4PmqGNMNViz0UWvs%2FMP0lxBAn74Num8nDxvpng9XfWGoinElv2Ze5V56V5ufB5BWoe&X-Amz-Signature=91e2826ad16b43ec66becb1be094789a0735da687b1f002b8e61bcab1cffbbcb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UUN5IP2H%2F20260720%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260720T105037Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCkwxrVNGwMd1l%2FKgyOwpui%2BnoKFrUbMHTwIxE9ezjMiQIgSOmBHjuQuFkYjtwcjA7TLufDEWT%2FcSHqsztx4lj7McoqiAQIov%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCFQ%2FDA5monvhrnB3SrcAwAt9Rn1Tnuzsb0zFhbRH5Ury%2BdkTiWqCh%2FAlzTT0D17%2B2GqCZ7FXRJ7k7thh2d1OhtZfw0Xo8AYjSPXEEEQrHauvsibjHA9eHJbdea0%2B7hHZX7Cu9UfkTbiKhK32qGmH9Ad%2BEC6x1tNsg8xUhT2fnNCLQG47vz%2FnzEyo6y%2FkBoZGk1RIBz0BLtbbZPbloE%2BV3CqiZ6VD8V5taErePOS8HyzNbDBGw5fGUoX3WFkNSyFIVoHnTKvMSVshwObW7CmnbXTCdq6YEfHucCofQWXK8LoaXf%2FL%2BgyQ37KoRmMp9dXYAFn2jweZekifWjOVwYm%2BCLZTSO%2B1kfVtiXUx%2Be0vgp986lHneVhbMjjDoQZy8SOEheaR0teV4%2F1QCGCWpkB2jw7WjkJEJXrrv6hEleG0YNxy04IFMM%2F9irtaPrnNSF90C1sGX4yza2PyTe9Vtp0yrgcLL9Fh1MTeJrQeMS%2Fd9x27D9ok%2Fet%2FRsmvodjk9vu24wTvmXJRUDAl%2BI8pUkpJR50HGN%2BggNRHYZUK%2Fsu7hhvTuay2Gb%2FvLQ6ekonWpRKp4aRsXicyUS9EjyvAJvUekz43wdinGjlTfkuYO3dPAPoX3wMViUgzWRRsWl3Blv8WIJMESsGZs%2FBF8JEMKvL99IGOqUBbMxZjWzkbiiadYp79EJAiqfQehfDXq4eAohqEfEVrVfYaPyJgLk1HxurlQICe8e%2B7JVASMEeW48ToLU%2Bik3RVGGEA6Uxx3rgUBT25poL%2FVDbpJEo32C5ce4DRv%2FGyI7W8qwd4mbHn3Xwm6rv9cXZCX7aMG4PmqGNMNViz0UWvs%2FMP0lxBAn74Num8nDxvpng9XfWGoinElv2Ze5V56V5ufB5BWoe&X-Amz-Signature=22b7dd002fa08777e5786979884c5f03623b1777a06a3643f046019f93d396d9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SXEHABCE%2F20260720%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260720T105037Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDoyqcPz6RNQNmYNmUmEOqpokYw66s%2Fnf%2FWljNK7pzfuAIgQAz5RYyPtrFU0b5gembodbGA5Dusp2INaQCyxEkAF4UqiAQIov%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDF9t%2Ff%2FrY63%2FavRzMSrcA9M33y%2F6H6D8QTsBunVVhO1GkruwxsQnxn4jJflUm%2B5eVLu5cv0VYaD4QUyD89k2MRt0vj7cCaRubI24WXqCg7khsVxJ1xDk4zzI7TnYgofDXnFhiC3zahtGIdMH%2FEwmm%2BU0WIro5mhTxZKWhmIOdAtsp0d6llfjg0%2Bf%2B0KxENsmtlgRLf7ujZuP1bpd76cNwOTuCU02EidccIIRvpKUoUI6V%2F305O2UiLZKHJmzlqFHrHkn3Pk6FizFIOJi8EfDXymi4khDc7Ai8R%2Ff3%2Fw9%2B3mPIW1R1u6uxbNBi0ggJFu9foXS7TK9fASqCcoqIWQjRIfA4qtvzKYlpeqkcSrbh8msohB%2Fo0ObJkv1a1bb%2F3JhFwqG2Kl8xqnkOgiisMTC4dAT7aZZzo8kx8G720XRmP81ayYu4NelqNyiTKu96Dhu1rt1Jo9tvAdw19snk0fAzYbK0I0f%2BcH81ct2dHw2q%2BUeOd9FyEP7cKUoXeT6ein%2F4enjFJL7WKe5jD4SOQTSq2pYOgoPQthNcUijQWrZWc2703tCT4Ed3LtQJdaEDgHRJRE349VpUBtOZlh5mL8JimKmhcLr9IREGUfz5mtpPv6GfbQA%2FYMCTo91Z%2B3XmDxb91sngJ9%2FvFtkmKXSMInO99IGOqUBb%2FtF4m257oCWqBd5MF5ySp1jbpIvKXonT2Q97Pq%2BWmV7AfrvPGI5Lf%2FNgqd1TU0HXm6OeGGdiKfgmzS2Sz3zGcd2WZJ%2Bdn74gz7VQWRGXFzBRzxYs6EJ1HWcWjyibFPax6GUA0Vm0DLQj56ZwhDibB7a6%2B7RZznnZojGeyVpUdbUMBwk%2B0F1Hw%2By5TiivCSSgcS%2FCxP7SJNbb%2BPcPWJyehBruvt6&X-Amz-Signature=4bdc49686cfa23337c397b2cf652ce7dcdf1e312a6660b7ead54741ec8645799&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SXEHABCE%2F20260720%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260720T105037Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDoyqcPz6RNQNmYNmUmEOqpokYw66s%2Fnf%2FWljNK7pzfuAIgQAz5RYyPtrFU0b5gembodbGA5Dusp2INaQCyxEkAF4UqiAQIov%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDF9t%2Ff%2FrY63%2FavRzMSrcA9M33y%2F6H6D8QTsBunVVhO1GkruwxsQnxn4jJflUm%2B5eVLu5cv0VYaD4QUyD89k2MRt0vj7cCaRubI24WXqCg7khsVxJ1xDk4zzI7TnYgofDXnFhiC3zahtGIdMH%2FEwmm%2BU0WIro5mhTxZKWhmIOdAtsp0d6llfjg0%2Bf%2B0KxENsmtlgRLf7ujZuP1bpd76cNwOTuCU02EidccIIRvpKUoUI6V%2F305O2UiLZKHJmzlqFHrHkn3Pk6FizFIOJi8EfDXymi4khDc7Ai8R%2Ff3%2Fw9%2B3mPIW1R1u6uxbNBi0ggJFu9foXS7TK9fASqCcoqIWQjRIfA4qtvzKYlpeqkcSrbh8msohB%2Fo0ObJkv1a1bb%2F3JhFwqG2Kl8xqnkOgiisMTC4dAT7aZZzo8kx8G720XRmP81ayYu4NelqNyiTKu96Dhu1rt1Jo9tvAdw19snk0fAzYbK0I0f%2BcH81ct2dHw2q%2BUeOd9FyEP7cKUoXeT6ein%2F4enjFJL7WKe5jD4SOQTSq2pYOgoPQthNcUijQWrZWc2703tCT4Ed3LtQJdaEDgHRJRE349VpUBtOZlh5mL8JimKmhcLr9IREGUfz5mtpPv6GfbQA%2FYMCTo91Z%2B3XmDxb91sngJ9%2FvFtkmKXSMInO99IGOqUBb%2FtF4m257oCWqBd5MF5ySp1jbpIvKXonT2Q97Pq%2BWmV7AfrvPGI5Lf%2FNgqd1TU0HXm6OeGGdiKfgmzS2Sz3zGcd2WZJ%2Bdn74gz7VQWRGXFzBRzxYs6EJ1HWcWjyibFPax6GUA0Vm0DLQj56ZwhDibB7a6%2B7RZznnZojGeyVpUdbUMBwk%2B0F1Hw%2By5TiivCSSgcS%2FCxP7SJNbb%2BPcPWJyehBruvt6&X-Amz-Signature=7fbd9f6f1f50e8729847eef0894dcabd8ad234d7eb242979bc0594340d52fc73&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SXEHABCE%2F20260720%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260720T105037Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDoyqcPz6RNQNmYNmUmEOqpokYw66s%2Fnf%2FWljNK7pzfuAIgQAz5RYyPtrFU0b5gembodbGA5Dusp2INaQCyxEkAF4UqiAQIov%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDF9t%2Ff%2FrY63%2FavRzMSrcA9M33y%2F6H6D8QTsBunVVhO1GkruwxsQnxn4jJflUm%2B5eVLu5cv0VYaD4QUyD89k2MRt0vj7cCaRubI24WXqCg7khsVxJ1xDk4zzI7TnYgofDXnFhiC3zahtGIdMH%2FEwmm%2BU0WIro5mhTxZKWhmIOdAtsp0d6llfjg0%2Bf%2B0KxENsmtlgRLf7ujZuP1bpd76cNwOTuCU02EidccIIRvpKUoUI6V%2F305O2UiLZKHJmzlqFHrHkn3Pk6FizFIOJi8EfDXymi4khDc7Ai8R%2Ff3%2Fw9%2B3mPIW1R1u6uxbNBi0ggJFu9foXS7TK9fASqCcoqIWQjRIfA4qtvzKYlpeqkcSrbh8msohB%2Fo0ObJkv1a1bb%2F3JhFwqG2Kl8xqnkOgiisMTC4dAT7aZZzo8kx8G720XRmP81ayYu4NelqNyiTKu96Dhu1rt1Jo9tvAdw19snk0fAzYbK0I0f%2BcH81ct2dHw2q%2BUeOd9FyEP7cKUoXeT6ein%2F4enjFJL7WKe5jD4SOQTSq2pYOgoPQthNcUijQWrZWc2703tCT4Ed3LtQJdaEDgHRJRE349VpUBtOZlh5mL8JimKmhcLr9IREGUfz5mtpPv6GfbQA%2FYMCTo91Z%2B3XmDxb91sngJ9%2FvFtkmKXSMInO99IGOqUBb%2FtF4m257oCWqBd5MF5ySp1jbpIvKXonT2Q97Pq%2BWmV7AfrvPGI5Lf%2FNgqd1TU0HXm6OeGGdiKfgmzS2Sz3zGcd2WZJ%2Bdn74gz7VQWRGXFzBRzxYs6EJ1HWcWjyibFPax6GUA0Vm0DLQj56ZwhDibB7a6%2B7RZznnZojGeyVpUdbUMBwk%2B0F1Hw%2By5TiivCSSgcS%2FCxP7SJNbb%2BPcPWJyehBruvt6&X-Amz-Signature=13cba67cd70b49908fc62dc96058f9440517ee7cdd29293cb9e0b76eb28dd4bd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SXEHABCE%2F20260720%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260720T105037Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDoyqcPz6RNQNmYNmUmEOqpokYw66s%2Fnf%2FWljNK7pzfuAIgQAz5RYyPtrFU0b5gembodbGA5Dusp2INaQCyxEkAF4UqiAQIov%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDF9t%2Ff%2FrY63%2FavRzMSrcA9M33y%2F6H6D8QTsBunVVhO1GkruwxsQnxn4jJflUm%2B5eVLu5cv0VYaD4QUyD89k2MRt0vj7cCaRubI24WXqCg7khsVxJ1xDk4zzI7TnYgofDXnFhiC3zahtGIdMH%2FEwmm%2BU0WIro5mhTxZKWhmIOdAtsp0d6llfjg0%2Bf%2B0KxENsmtlgRLf7ujZuP1bpd76cNwOTuCU02EidccIIRvpKUoUI6V%2F305O2UiLZKHJmzlqFHrHkn3Pk6FizFIOJi8EfDXymi4khDc7Ai8R%2Ff3%2Fw9%2B3mPIW1R1u6uxbNBi0ggJFu9foXS7TK9fASqCcoqIWQjRIfA4qtvzKYlpeqkcSrbh8msohB%2Fo0ObJkv1a1bb%2F3JhFwqG2Kl8xqnkOgiisMTC4dAT7aZZzo8kx8G720XRmP81ayYu4NelqNyiTKu96Dhu1rt1Jo9tvAdw19snk0fAzYbK0I0f%2BcH81ct2dHw2q%2BUeOd9FyEP7cKUoXeT6ein%2F4enjFJL7WKe5jD4SOQTSq2pYOgoPQthNcUijQWrZWc2703tCT4Ed3LtQJdaEDgHRJRE349VpUBtOZlh5mL8JimKmhcLr9IREGUfz5mtpPv6GfbQA%2FYMCTo91Z%2B3XmDxb91sngJ9%2FvFtkmKXSMInO99IGOqUBb%2FtF4m257oCWqBd5MF5ySp1jbpIvKXonT2Q97Pq%2BWmV7AfrvPGI5Lf%2FNgqd1TU0HXm6OeGGdiKfgmzS2Sz3zGcd2WZJ%2Bdn74gz7VQWRGXFzBRzxYs6EJ1HWcWjyibFPax6GUA0Vm0DLQj56ZwhDibB7a6%2B7RZznnZojGeyVpUdbUMBwk%2B0F1Hw%2By5TiivCSSgcS%2FCxP7SJNbb%2BPcPWJyehBruvt6&X-Amz-Signature=b1206704e66d050d009fd3afc3b8c74e5a0ecb0ce0c1438c57515386f7c26d8a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VWC3LQZE%2F20260720%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260720T105037Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGFDIHvGgC7Fte3uK1aBgzBkluoEg6BgQV2oDuwoGxSYAiBFQvmo3D1o2nDgSb6vjVfViE20Um8NLJ16KZ%2Fyxu8CYyqIBAii%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMeh1xAetyHBQa5pYkKtwDZxMxJVkLifB3LITI4ilRcVNkHqxrGR%2FPHd4IkH6Mx%2BqoC9YWRywiTPMcopYJt%2FinxjKUq6NJlKFTj5gBsujym37aZrsleFwYYJXSJJrZMyG5mlLD7hFsC7x%2FxJXLvPC92Xj8V2sC4JDO3bz804E35%2FTd3pfqCz2gycKOT5m8HuDNpJ5D5lUKc4BJfs9LN3g3E2htqeEsAsXdnaw0YEw8pNpKlu4XRmt9jErMOWAKBmVbIEqECrgHpPPhbosCV1IkxZ1RpP5xbc70qZeeagB4mgflV8r0mKNjGRvGatCHswZwVwvq3J5by6LzYf45KnrXXXoNnAEO6xxe%2Bwv3kQCv3ybWmDvVrOsa3%2BRz09y6qvkP4br8jC4SuML8AdqvL2fCfXNoQh6hDwsLNGpC5PyZMtstMePsHsm59GCV%2FN%2BYULP%2B0Tx%2B4jeD7bOcd5ZZ%2Fx1zU2bVjTeZ%2FBeQ2Kk4KxoD2DUwNsBaIlNyYb6cH1Q%2BJ4d82Clgrp3UBFu5u0xGigN%2F8aIgxBvRBy80iJGYd85YTrummTly%2BNHyeaR%2F%2Bm20pZBKGRokNtyVWqioFCw1wddfJYHYsU%2BAli8yeLNR1bxKgL13PFn1OjFZZPkNfbxgEV75v3emJT8nyQ3bX5Ew48330gY6pgF6XOoSB7A9ACEyu1TCpfaB1jsi%2Bb1nbnPE%2FRAur6fqvoxI6VYxNNNfKa5gvDjS0bBNtIZ92pdRPNgF0uEW81E4r3EZuMUpGh0cFzwty8UyNolGNDVQFm%2BpKWD%2BY0CBADVh4AJWoKKcP0ftJJ%2BM7j%2Bg%2FcMSz9ATCDE4dSCxl%2B6KqvqpbrIHCMQnbDsay2QmeEp1Da7Ym2IQsucjrWo6KaR3pRSugCQy&X-Amz-Signature=78b470497d190d65c48858fe88b7d1274ea86b56d9324e6af7c97a05f498dc24&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W6RYG6EK%2F20260720%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260720T105037Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCaxThESVddvHiJ3hwrgQBc%2B1vZNcOcCB0Nc84dHjF0BAIgQ3Sg%2FjSSRbHRZPcVew0AircsniNdrsh3l3UXRZll%2Fw0qiAQIov%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJlpo9jn4w%2FQR86nBCrcA%2B63%2BLrgk4N8ADC8%2FzYvgXeTpVZs2Pkjbbm60OxMvEW4k%2B7R9CRDavmqaskuyFd6qxvXmKyKqqxfmbSIwk77SCGRfdT86VyD6i1DNskIy0zANMdI%2F%2FHMOg1gU%2F90D0uf5bmA6rZmDCElekkSxWthIH4%2FN35bRcnZRCXMnWQyRZ1EjmcG7AqyzPY9%2BOihc0XlwM9Ya68D5vQbKQhEGzLCtIB5lUrJ7AfbEjC72EvaC%2FqGe7CjjtE0SKx82AZka7Hwwn0QLI36qLWFvXpZMLz0bei%2FbuPqRT1cyMba1yV2Dbbyw%2BGq0yBbKFM8GhyQw%2FMKEejB7plo291Pz1nY1FhcHW8sy1VZhDcOUHM%2FHBJlhnFmoj68OW%2Fd%2BRqMzZUqbbWh%2FAS9ieMQeH7aBkwIp%2BJLD%2FX9Yb8SYSGEMU%2F2VPB9vCMohnYclGJNmJTLTAVPYizZxJsG9ejnUCSlS%2BdDJ2qirh2KI4kFpaiUfUqDfZZImJOfXahAO3%2BTttuFF9LSRW4sDpL10X4cSUXmQG1xjuPC70FT3ol2aNbe0W%2FwVsYBubjyhNCDUXCk8bnJ78flOgSFen6AF%2BjCAzsSIAU8skfdnem9u00wEx4cEphTFWwgIALfMCd9x8neqJMvly6XMMzN99IGOqUBshTUiqmfuDES9n%2Bw3dyo96bf9%2Bk6Fz9fE0rZxXeBoKb7v6cEABi140ZwukiM8f7vv4WHkh9gjVSGZtOe5PJ3%2FgtONVpLSYhKIZFzOFzWYJ2vcdYWpboEvIPNwVw3ayiD2V0xilneV6rnpvBW1XQekiMHOi%2BCiL6idHOM%2FY2d9Z%2BnNPOhqn9SRZtNaxTjmDvWMksGoKWYsc7arzUHzUtxKuqwaQ0P&X-Amz-Signature=6dca396edb8c898add8081e121af2535c4168015dde0ca09c21354f31ef78c31&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W6RYG6EK%2F20260720%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260720T105037Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCaxThESVddvHiJ3hwrgQBc%2B1vZNcOcCB0Nc84dHjF0BAIgQ3Sg%2FjSSRbHRZPcVew0AircsniNdrsh3l3UXRZll%2Fw0qiAQIov%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJlpo9jn4w%2FQR86nBCrcA%2B63%2BLrgk4N8ADC8%2FzYvgXeTpVZs2Pkjbbm60OxMvEW4k%2B7R9CRDavmqaskuyFd6qxvXmKyKqqxfmbSIwk77SCGRfdT86VyD6i1DNskIy0zANMdI%2F%2FHMOg1gU%2F90D0uf5bmA6rZmDCElekkSxWthIH4%2FN35bRcnZRCXMnWQyRZ1EjmcG7AqyzPY9%2BOihc0XlwM9Ya68D5vQbKQhEGzLCtIB5lUrJ7AfbEjC72EvaC%2FqGe7CjjtE0SKx82AZka7Hwwn0QLI36qLWFvXpZMLz0bei%2FbuPqRT1cyMba1yV2Dbbyw%2BGq0yBbKFM8GhyQw%2FMKEejB7plo291Pz1nY1FhcHW8sy1VZhDcOUHM%2FHBJlhnFmoj68OW%2Fd%2BRqMzZUqbbWh%2FAS9ieMQeH7aBkwIp%2BJLD%2FX9Yb8SYSGEMU%2F2VPB9vCMohnYclGJNmJTLTAVPYizZxJsG9ejnUCSlS%2BdDJ2qirh2KI4kFpaiUfUqDfZZImJOfXahAO3%2BTttuFF9LSRW4sDpL10X4cSUXmQG1xjuPC70FT3ol2aNbe0W%2FwVsYBubjyhNCDUXCk8bnJ78flOgSFen6AF%2BjCAzsSIAU8skfdnem9u00wEx4cEphTFWwgIALfMCd9x8neqJMvly6XMMzN99IGOqUBshTUiqmfuDES9n%2Bw3dyo96bf9%2Bk6Fz9fE0rZxXeBoKb7v6cEABi140ZwukiM8f7vv4WHkh9gjVSGZtOe5PJ3%2FgtONVpLSYhKIZFzOFzWYJ2vcdYWpboEvIPNwVw3ayiD2V0xilneV6rnpvBW1XQekiMHOi%2BCiL6idHOM%2FY2d9Z%2BnNPOhqn9SRZtNaxTjmDvWMksGoKWYsc7arzUHzUtxKuqwaQ0P&X-Amz-Signature=fe900fee40dd50596899275357f02a1088dc22f9b9ba0d575374d6637761d793&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
