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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46633XHGOBC%2F20260303%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260303T084014Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDYWtDj2uoB7CwzdjmWiddN2zfMaGkFQJZBRuNVxjLbVgIgP%2Bt2WV130GzcsJ4heIbAEqSLHL7V0uZSbeYffgAeZHEqiAQImf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAKqtOeX0hsB%2BboWWyrcAzcV5xvEX0IzmeOJ79phpiN7Hr%2FB%2F9Zr9tgqFm1pTSgadXQuebVpY33WNSBM0CtgqQU48tTyHJmmpMpwuYCsFdZAxgtMzYKndDngUiAw9SuS8JU1XM7BfcmlvOrvXdmRD5Dx2s6tADLzntawfpYykoEOjJplAlljZMHkozwczTeoeHFO30bb5ytEsCz3C5%2B1g5f5B3g7ZQRCSqb9pP0fNhM%2FT2BgAZVMwWHXdQUJFL8hWPVZtbC49EtkTzS7PKPiyefLSxy8Ab7cLK8pokMpCwVACUmp4vRi4GVQcB4lUTmfNLrt9B0KuzN3il5MeQZ74uE6LEUD2cB4yGYJNl6Dv%2BfkcPWl5ullK9aqb8WX3radMqGNKGGa0oPU26%2FgJhqqEHrIn5rfWnm%2Fn8J7bKPfWrcOLQD7kkezyPcdedLGyNKFfKVczMie1I9qXFjjJJw4zIAIFlCavCkekFQ6LMjmKUxwgpQeOG124MwZJ0XMn2MY0Nvd8pFrnJbRpKQB%2B%2BxiFQwGGyyGphZL%2B%2FpfpXPOOWlQHwcN3bmBNXZvdTHC%2Fj3AR%2FbCShjUO5CRPxR2gRRrgAAUAUuUbC71ceBfvH4yyokK%2F%2B25PFpzj8qbR85Gu5E97QSBBn00NOZBdl7nMPOoms0GOqUBaKDSc8U1ej4jz%2Bru9PsC2NCKa3CIstr5JXuv6kFcVzCVU3oiZdpjhxQqxfOYPnZNNf92nKH%2B8OYoXt%2FeblSO%2BbZbs6RzKq%2BLHTOzeJEP7ytB9%2BABC3%2Fc6cs8LyFPjlrDrpCZ1GWsQsx7lj9Y%2F8p7SRKdK9JKh4v9g6lQA0MzJfWxrOHNQdn%2FT4KK8e7Vj9qiH40oG9GK6jDtM4xfSGVsAGjrN9AH&X-Amz-Signature=8c3d279b418e0235cb39c058fcadf6502d875ece2094ade595bda3785cef0b03&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46633XHGOBC%2F20260303%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260303T084014Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDYWtDj2uoB7CwzdjmWiddN2zfMaGkFQJZBRuNVxjLbVgIgP%2Bt2WV130GzcsJ4heIbAEqSLHL7V0uZSbeYffgAeZHEqiAQImf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAKqtOeX0hsB%2BboWWyrcAzcV5xvEX0IzmeOJ79phpiN7Hr%2FB%2F9Zr9tgqFm1pTSgadXQuebVpY33WNSBM0CtgqQU48tTyHJmmpMpwuYCsFdZAxgtMzYKndDngUiAw9SuS8JU1XM7BfcmlvOrvXdmRD5Dx2s6tADLzntawfpYykoEOjJplAlljZMHkozwczTeoeHFO30bb5ytEsCz3C5%2B1g5f5B3g7ZQRCSqb9pP0fNhM%2FT2BgAZVMwWHXdQUJFL8hWPVZtbC49EtkTzS7PKPiyefLSxy8Ab7cLK8pokMpCwVACUmp4vRi4GVQcB4lUTmfNLrt9B0KuzN3il5MeQZ74uE6LEUD2cB4yGYJNl6Dv%2BfkcPWl5ullK9aqb8WX3radMqGNKGGa0oPU26%2FgJhqqEHrIn5rfWnm%2Fn8J7bKPfWrcOLQD7kkezyPcdedLGyNKFfKVczMie1I9qXFjjJJw4zIAIFlCavCkekFQ6LMjmKUxwgpQeOG124MwZJ0XMn2MY0Nvd8pFrnJbRpKQB%2B%2BxiFQwGGyyGphZL%2B%2FpfpXPOOWlQHwcN3bmBNXZvdTHC%2Fj3AR%2FbCShjUO5CRPxR2gRRrgAAUAUuUbC71ceBfvH4yyokK%2F%2B25PFpzj8qbR85Gu5E97QSBBn00NOZBdl7nMPOoms0GOqUBaKDSc8U1ej4jz%2Bru9PsC2NCKa3CIstr5JXuv6kFcVzCVU3oiZdpjhxQqxfOYPnZNNf92nKH%2B8OYoXt%2FeblSO%2BbZbs6RzKq%2BLHTOzeJEP7ytB9%2BABC3%2Fc6cs8LyFPjlrDrpCZ1GWsQsx7lj9Y%2F8p7SRKdK9JKh4v9g6lQA0MzJfWxrOHNQdn%2FT4KK8e7Vj9qiH40oG9GK6jDtM4xfSGVsAGjrN9AH&X-Amz-Signature=6cfe83e725d163c358f3ac2ffdc8e6bc743851c50d64af4eaef72407cb3050d3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46633XHGOBC%2F20260303%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260303T084014Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDYWtDj2uoB7CwzdjmWiddN2zfMaGkFQJZBRuNVxjLbVgIgP%2Bt2WV130GzcsJ4heIbAEqSLHL7V0uZSbeYffgAeZHEqiAQImf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAKqtOeX0hsB%2BboWWyrcAzcV5xvEX0IzmeOJ79phpiN7Hr%2FB%2F9Zr9tgqFm1pTSgadXQuebVpY33WNSBM0CtgqQU48tTyHJmmpMpwuYCsFdZAxgtMzYKndDngUiAw9SuS8JU1XM7BfcmlvOrvXdmRD5Dx2s6tADLzntawfpYykoEOjJplAlljZMHkozwczTeoeHFO30bb5ytEsCz3C5%2B1g5f5B3g7ZQRCSqb9pP0fNhM%2FT2BgAZVMwWHXdQUJFL8hWPVZtbC49EtkTzS7PKPiyefLSxy8Ab7cLK8pokMpCwVACUmp4vRi4GVQcB4lUTmfNLrt9B0KuzN3il5MeQZ74uE6LEUD2cB4yGYJNl6Dv%2BfkcPWl5ullK9aqb8WX3radMqGNKGGa0oPU26%2FgJhqqEHrIn5rfWnm%2Fn8J7bKPfWrcOLQD7kkezyPcdedLGyNKFfKVczMie1I9qXFjjJJw4zIAIFlCavCkekFQ6LMjmKUxwgpQeOG124MwZJ0XMn2MY0Nvd8pFrnJbRpKQB%2B%2BxiFQwGGyyGphZL%2B%2FpfpXPOOWlQHwcN3bmBNXZvdTHC%2Fj3AR%2FbCShjUO5CRPxR2gRRrgAAUAUuUbC71ceBfvH4yyokK%2F%2B25PFpzj8qbR85Gu5E97QSBBn00NOZBdl7nMPOoms0GOqUBaKDSc8U1ej4jz%2Bru9PsC2NCKa3CIstr5JXuv6kFcVzCVU3oiZdpjhxQqxfOYPnZNNf92nKH%2B8OYoXt%2FeblSO%2BbZbs6RzKq%2BLHTOzeJEP7ytB9%2BABC3%2Fc6cs8LyFPjlrDrpCZ1GWsQsx7lj9Y%2F8p7SRKdK9JKh4v9g6lQA0MzJfWxrOHNQdn%2FT4KK8e7Vj9qiH40oG9GK6jDtM4xfSGVsAGjrN9AH&X-Amz-Signature=2673cf9ee056a89e9e07078f4a1f0bda5c4a1bce26918b789dbf4ab245d599eb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666EHIN7RT%2F20260303%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260303T084014Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDD5BkLSGZbFAcL7tkCnF85484ijQPd4u85ovfebS%2BPqgIhAKsjxF43u%2Bbys2kl7iuEP4DVVXG7vLWbVsE%2BIotcpm4wKogECJn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igwu3%2BDUXrFnbnRLklMq3AN%2Bx3hNXSYtJAF2Zr58DvefmzH%2FE4vfXH%2Bep6YXKPl9kYzDrw9QlZQScBWPo0zqG9bsQ1O89fnLy%2BwVUMTEEYfVOVUBgBlsREMMI7sI%2FV8EHyaiGcfNsL6wQOH%2BaHIK3W8Fu9Ho4RSi3r82CAu1cf8UHCqVT7aPXremwoMTEFi113qpbovPN88FGaqZpI%2FnduwCictwECkkLsbhxYRAtNt0MZ%2FYt%2B2SSvRd2O01YtPSY39d7QfNOhyT%2BCp6xUM6EVs42Db83GFQopkS9kgS120rjp16tg99T7v1nQ04i7%2BtOMaNaNZ0swz%2FiH1ZPFJYuASdmiTnEg4wccznNvmrXmsKSsu9JkhiXrOXxdIfnvoOdoj5Uyx3fl0oAae6%2BeAfbINzv3K5A5TQL2EdK0DyHWJv2AfeZLtEbfhm3YuKJBmZwsGFJPF%2FlJ55AKX%2BmEycxqDWtzXtGxsZcLOPCIHBimxHsNu%2Bx%2BJWmaLzn4Cc%2BS2Wv3wOML9W3aN713bkmqFjY0X4FVcRFlfj4ZoSmFmfdW3KUwU5CWeoROnlTj29vsxtn%2FMg7waV%2BbgY%2BJi01nnsQDeq%2FOTwQOpy6PkEqfPVTKQQtPMdqmKKKM3nmd6rwlZxhcJjttphx3EFnK1RjzDXp5rNBjqkAePtXdStlH6pFOGb2GFiXZFtVYaHMAYltpsxfT4imG83qjXY1SS44g8l83YsbG31gaTnydjsKxwmQsXX4gJatnslwr7ptUkBofuRSDC59UbYhI0sdjjgp3CEO0ZVhlgarEoMpQ8Ud4aO1KR9hPEWh%2FHBDrQ3wj%2BhiB5CFEtR3bIrIHPkkEwQe2FeXzQYHqWxAkFnWLInrJQXXa6wqaNkS64ogBsQ&X-Amz-Signature=416b34e9484d01c03f9465fa2803666cf47bf051a74b4d7b1f14ec7ab31e03fd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666EHIN7RT%2F20260303%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260303T084014Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDD5BkLSGZbFAcL7tkCnF85484ijQPd4u85ovfebS%2BPqgIhAKsjxF43u%2Bbys2kl7iuEP4DVVXG7vLWbVsE%2BIotcpm4wKogECJn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igwu3%2BDUXrFnbnRLklMq3AN%2Bx3hNXSYtJAF2Zr58DvefmzH%2FE4vfXH%2Bep6YXKPl9kYzDrw9QlZQScBWPo0zqG9bsQ1O89fnLy%2BwVUMTEEYfVOVUBgBlsREMMI7sI%2FV8EHyaiGcfNsL6wQOH%2BaHIK3W8Fu9Ho4RSi3r82CAu1cf8UHCqVT7aPXremwoMTEFi113qpbovPN88FGaqZpI%2FnduwCictwECkkLsbhxYRAtNt0MZ%2FYt%2B2SSvRd2O01YtPSY39d7QfNOhyT%2BCp6xUM6EVs42Db83GFQopkS9kgS120rjp16tg99T7v1nQ04i7%2BtOMaNaNZ0swz%2FiH1ZPFJYuASdmiTnEg4wccznNvmrXmsKSsu9JkhiXrOXxdIfnvoOdoj5Uyx3fl0oAae6%2BeAfbINzv3K5A5TQL2EdK0DyHWJv2AfeZLtEbfhm3YuKJBmZwsGFJPF%2FlJ55AKX%2BmEycxqDWtzXtGxsZcLOPCIHBimxHsNu%2Bx%2BJWmaLzn4Cc%2BS2Wv3wOML9W3aN713bkmqFjY0X4FVcRFlfj4ZoSmFmfdW3KUwU5CWeoROnlTj29vsxtn%2FMg7waV%2BbgY%2BJi01nnsQDeq%2FOTwQOpy6PkEqfPVTKQQtPMdqmKKKM3nmd6rwlZxhcJjttphx3EFnK1RjzDXp5rNBjqkAePtXdStlH6pFOGb2GFiXZFtVYaHMAYltpsxfT4imG83qjXY1SS44g8l83YsbG31gaTnydjsKxwmQsXX4gJatnslwr7ptUkBofuRSDC59UbYhI0sdjjgp3CEO0ZVhlgarEoMpQ8Ud4aO1KR9hPEWh%2FHBDrQ3wj%2BhiB5CFEtR3bIrIHPkkEwQe2FeXzQYHqWxAkFnWLInrJQXXa6wqaNkS64ogBsQ&X-Amz-Signature=b1de53c947f87dcadb3ec2f50944f3c94ce864011d6f44b4ba4afca3907792d9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666EHIN7RT%2F20260303%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260303T084014Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDD5BkLSGZbFAcL7tkCnF85484ijQPd4u85ovfebS%2BPqgIhAKsjxF43u%2Bbys2kl7iuEP4DVVXG7vLWbVsE%2BIotcpm4wKogECJn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igwu3%2BDUXrFnbnRLklMq3AN%2Bx3hNXSYtJAF2Zr58DvefmzH%2FE4vfXH%2Bep6YXKPl9kYzDrw9QlZQScBWPo0zqG9bsQ1O89fnLy%2BwVUMTEEYfVOVUBgBlsREMMI7sI%2FV8EHyaiGcfNsL6wQOH%2BaHIK3W8Fu9Ho4RSi3r82CAu1cf8UHCqVT7aPXremwoMTEFi113qpbovPN88FGaqZpI%2FnduwCictwECkkLsbhxYRAtNt0MZ%2FYt%2B2SSvRd2O01YtPSY39d7QfNOhyT%2BCp6xUM6EVs42Db83GFQopkS9kgS120rjp16tg99T7v1nQ04i7%2BtOMaNaNZ0swz%2FiH1ZPFJYuASdmiTnEg4wccznNvmrXmsKSsu9JkhiXrOXxdIfnvoOdoj5Uyx3fl0oAae6%2BeAfbINzv3K5A5TQL2EdK0DyHWJv2AfeZLtEbfhm3YuKJBmZwsGFJPF%2FlJ55AKX%2BmEycxqDWtzXtGxsZcLOPCIHBimxHsNu%2Bx%2BJWmaLzn4Cc%2BS2Wv3wOML9W3aN713bkmqFjY0X4FVcRFlfj4ZoSmFmfdW3KUwU5CWeoROnlTj29vsxtn%2FMg7waV%2BbgY%2BJi01nnsQDeq%2FOTwQOpy6PkEqfPVTKQQtPMdqmKKKM3nmd6rwlZxhcJjttphx3EFnK1RjzDXp5rNBjqkAePtXdStlH6pFOGb2GFiXZFtVYaHMAYltpsxfT4imG83qjXY1SS44g8l83YsbG31gaTnydjsKxwmQsXX4gJatnslwr7ptUkBofuRSDC59UbYhI0sdjjgp3CEO0ZVhlgarEoMpQ8Ud4aO1KR9hPEWh%2FHBDrQ3wj%2BhiB5CFEtR3bIrIHPkkEwQe2FeXzQYHqWxAkFnWLInrJQXXa6wqaNkS64ogBsQ&X-Amz-Signature=94a66289dc9f98caf868a429e46c761e34c94bd6d0b4c27696829e4bf514d8ed&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666EHIN7RT%2F20260303%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260303T084014Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDD5BkLSGZbFAcL7tkCnF85484ijQPd4u85ovfebS%2BPqgIhAKsjxF43u%2Bbys2kl7iuEP4DVVXG7vLWbVsE%2BIotcpm4wKogECJn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igwu3%2BDUXrFnbnRLklMq3AN%2Bx3hNXSYtJAF2Zr58DvefmzH%2FE4vfXH%2Bep6YXKPl9kYzDrw9QlZQScBWPo0zqG9bsQ1O89fnLy%2BwVUMTEEYfVOVUBgBlsREMMI7sI%2FV8EHyaiGcfNsL6wQOH%2BaHIK3W8Fu9Ho4RSi3r82CAu1cf8UHCqVT7aPXremwoMTEFi113qpbovPN88FGaqZpI%2FnduwCictwECkkLsbhxYRAtNt0MZ%2FYt%2B2SSvRd2O01YtPSY39d7QfNOhyT%2BCp6xUM6EVs42Db83GFQopkS9kgS120rjp16tg99T7v1nQ04i7%2BtOMaNaNZ0swz%2FiH1ZPFJYuASdmiTnEg4wccznNvmrXmsKSsu9JkhiXrOXxdIfnvoOdoj5Uyx3fl0oAae6%2BeAfbINzv3K5A5TQL2EdK0DyHWJv2AfeZLtEbfhm3YuKJBmZwsGFJPF%2FlJ55AKX%2BmEycxqDWtzXtGxsZcLOPCIHBimxHsNu%2Bx%2BJWmaLzn4Cc%2BS2Wv3wOML9W3aN713bkmqFjY0X4FVcRFlfj4ZoSmFmfdW3KUwU5CWeoROnlTj29vsxtn%2FMg7waV%2BbgY%2BJi01nnsQDeq%2FOTwQOpy6PkEqfPVTKQQtPMdqmKKKM3nmd6rwlZxhcJjttphx3EFnK1RjzDXp5rNBjqkAePtXdStlH6pFOGb2GFiXZFtVYaHMAYltpsxfT4imG83qjXY1SS44g8l83YsbG31gaTnydjsKxwmQsXX4gJatnslwr7ptUkBofuRSDC59UbYhI0sdjjgp3CEO0ZVhlgarEoMpQ8Ud4aO1KR9hPEWh%2FHBDrQ3wj%2BhiB5CFEtR3bIrIHPkkEwQe2FeXzQYHqWxAkFnWLInrJQXXa6wqaNkS64ogBsQ&X-Amz-Signature=25c5719ac84da4b638f722f1d70cbc88704c0b775fc6bcb9f2b2232878689384&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663P22VDK4%2F20260303%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260303T084017Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEUYywu4%2BcdmYwZbmIeMDN9Ac3snYw2ORtFwBSm3ycBgAiBs09cRS%2BeP4ZaLyTkO5gDs1CSQRjEsJ2f%2BG2oyX57e2iqIBAiZ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM0QUH4LEJXsu7Dts%2FKtwDA3Tk2btQ42Hxj%2BcpYh5hTCqo3%2F%2B2bOsVDAjvRFp8492XXJdbBCqM%2BrdaKkMqDwV9fl4j3vbcnWQhak7ZIEEDV%2BmzUerXj2hkaSwgFvMhJLVcmF%2BgmgmyG4bkVghvyTckBhwHlCEI9Rzyo9iXRdzaTQhIr3%2FZ0zqaofpNnDRAkZY6P4iQ%2BEgFrCOQ5K1%2BHzmLdlKJelzvzt%2BI8rR8f8LMLsZy8XovU2XwFXsdIv3LbIzdTuJvIFqLNu%2FvEDskGDseKibX90g0uPW88oST6HfiE9jbNy%2BTiFsO7MvaDYKg9uAo2P%2BFFOKeM6FZ25nvmYpDUmAShEBdyFgJEKIhFvMpWXsslsZRvEsJpyXZ097j9nCsvkSptpuNKQnbg2ZXRJMHAfvOePSyejsfF0yVbzZxp5Mg5jf9aUHPKWnZivAcOScpFG7B6p74Od3%2BC6Dqg1NWaJepP8bE%2FBdbXd3HBz55SH8tzi1fUWRg7kxHWNaxPrOqr2fqTzGadzwqTLvTIspvU1p0mucfUcsZd8HgzXYx2sR9LqvHHoFoq5ys2nGql%2FX3ivwmxMCLHr9qU0PycYXNfvPyIdGqcwg9O2FCXiV2XiE3nULCPOMteXNDccKJ4Z35Rd0U7wUKbmVfvr4wjqiazQY6pgF8ef0bNaLudeypM7XmJL48zkyoFh40eX41Pfo4GaLX3HaqosnGJt8Ip5Tc2EzyhPI8tdhvXNCSCpC4Rs81degv0UBHJnfU64zk%2B9DGDy%2F2gE3ZE2M7jPUMsd5Ac%2BJMqG5Wje5vEaSFqbgIEGRBx4JxYP5leFAMFNuU077g2xirsdQceycUf4Dzh9HTC9iC4mRpW%2BdMs%2ByZYQIHIEkDsfMposcknQ0L&X-Amz-Signature=5488a4433487b152ec4b48d22d1d797dd60092f83ad6e4fca79bf1b1c11bad33&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WU2VMVMC%2F20260303%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260303T084018Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFQ7%2BDnnch%2F6XbS87e0oh0Gbl%2BiCfZllBKXarCIdPO4HAiEA%2BWp0TuCpFbaF2sT2XdvNGQvvupYf%2BfppWRu7WI955CcqiAQImf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMRHcV8oRuFNPOzr4yrcA4fNfhEOWJHaLMXJPjQLit6gGYiZXo7iEinW9E%2BOSOWku0034jwqUCLumwKgzgID02fR%2Bzal4m3vTvl1qgahs9ATPe2yQa%2FeveCCUATyUTeVjuRugvZuofrcoSnehk7kBhVvNvxazjuOz1hq2H1UTTDyev2w9TyvoYFYC2ZHZDMZv%2B75ztHBzEhqFPIjpgOIe8QBMMROYdZwttGcc0Pacx73sOydZBBzd6w8dm1pmz5MzmB9Pqz3wyqTkbKvDACz70d5hnqm7mMyU8bidOLJMKWKRqPapbCE%2FuYmzt5bR7k282XfK70UQsCFHVKOxfSxecux07WyuwH8pLFpoXC2qa4%2B56BuBKrd4lunKCELiPEQaoN8n%2B9EswhUx3ZCMlhtd7KCUU5zsaILBINJaMdfD4S093NR7%2FCNcU09gVhnEBo0wzjDRaF4RaIJSKFgl9yYmifjmHWv3Iuf8BGcRA7daDfwKLzUKp6vYgL3ElDAgDfpeRBdaGgInCGCeGCcBec%2B8%2B5M2wsK3q%2FfRlLWqLy7aKhm0LqhN%2Fr6HoW6aQL0FhmPRJ9a7Q%2BQipFlQXKexYmXL6hSu7h13dtLYBLc2jpj16ZUGysoWwjPsySPK99K%2F%2FI1eiRSHSNe7F3S1CJyMImpms0GOqUB2yXAbSMW5mVozNABt7%2Fp1lPWeJJte6dW0q29FH7pxRpslFaXAoOfegAOyAO1L1PrBtQAGRzUOsDMGcLk1SNHfy37uCGopa%2Ba%2FxlCQgJuUiUe57asjLTjkfdSwHgfd3mET%2B81MeScyFS06jGmONOYdO7Ca6RRAUY%2BIU30CyfTWUBqsJXSmKA%2BznQ%2F84NaDzBi87zC4PAyWTb5DFKbFv2SBO00LEvE&X-Amz-Signature=c8254447fdf173903613178596c5d0aebc8de89711fd5e2542121525e7a46c58&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WU2VMVMC%2F20260303%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260303T084018Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEND%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFQ7%2BDnnch%2F6XbS87e0oh0Gbl%2BiCfZllBKXarCIdPO4HAiEA%2BWp0TuCpFbaF2sT2XdvNGQvvupYf%2BfppWRu7WI955CcqiAQImf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMRHcV8oRuFNPOzr4yrcA4fNfhEOWJHaLMXJPjQLit6gGYiZXo7iEinW9E%2BOSOWku0034jwqUCLumwKgzgID02fR%2Bzal4m3vTvl1qgahs9ATPe2yQa%2FeveCCUATyUTeVjuRugvZuofrcoSnehk7kBhVvNvxazjuOz1hq2H1UTTDyev2w9TyvoYFYC2ZHZDMZv%2B75ztHBzEhqFPIjpgOIe8QBMMROYdZwttGcc0Pacx73sOydZBBzd6w8dm1pmz5MzmB9Pqz3wyqTkbKvDACz70d5hnqm7mMyU8bidOLJMKWKRqPapbCE%2FuYmzt5bR7k282XfK70UQsCFHVKOxfSxecux07WyuwH8pLFpoXC2qa4%2B56BuBKrd4lunKCELiPEQaoN8n%2B9EswhUx3ZCMlhtd7KCUU5zsaILBINJaMdfD4S093NR7%2FCNcU09gVhnEBo0wzjDRaF4RaIJSKFgl9yYmifjmHWv3Iuf8BGcRA7daDfwKLzUKp6vYgL3ElDAgDfpeRBdaGgInCGCeGCcBec%2B8%2B5M2wsK3q%2FfRlLWqLy7aKhm0LqhN%2Fr6HoW6aQL0FhmPRJ9a7Q%2BQipFlQXKexYmXL6hSu7h13dtLYBLc2jpj16ZUGysoWwjPsySPK99K%2F%2FI1eiRSHSNe7F3S1CJyMImpms0GOqUB2yXAbSMW5mVozNABt7%2Fp1lPWeJJte6dW0q29FH7pxRpslFaXAoOfegAOyAO1L1PrBtQAGRzUOsDMGcLk1SNHfy37uCGopa%2Ba%2FxlCQgJuUiUe57asjLTjkfdSwHgfd3mET%2B81MeScyFS06jGmONOYdO7Ca6RRAUY%2BIU30CyfTWUBqsJXSmKA%2BznQ%2F84NaDzBi87zC4PAyWTb5DFKbFv2SBO00LEvE&X-Amz-Signature=91699c5da826d5b9c87fbdf97ea2ea71b1ccc3ab82d8c40bcb5cf7efe54b70b9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
