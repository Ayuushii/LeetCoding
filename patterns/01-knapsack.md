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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666P6H5BOJ%2F20260702%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260702T103750Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECkaCXVzLXdlc3QtMiJGMEQCIBuewoyMM29BfxsOoTOzd9QdaKDPvJf2wDc76t9i8KaeAiA%2F4Ri1wfny4Usy1L8zsZtcaqFc9%2Fp0AC5ahj4RyNc7kSqIBAjy%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMJCMyEE3PULAIQR%2FJKtwD1XXQi9u7RcIGCEl9k7PXBrsBGF%2BJcBJoIE3w9viiwXEU5xH0net8tPwDp5mX%2BNpk8XI8bxzKLpfVJ54PQlSIcjqo5BQuDJWAjW6Qu%2F2mRL1qoMjckRixsPjEDLfAUAgr2eVC%2F3e2bBf4%2F%2BOs%2BYagVrlmp1Fe00MDZzXdfUL0dkdut93HJewZUK2uVLDryD6pqLzEmJjy1HdoPa8Ih%2F4%2B36ZcLzCiazI52cq6YY4JHvtlrI5zYHPvnrRdIsTjkE%2BNUDFSVVqiedN8t1XsPvqDa0GiOTeHYShMTCN3iO2%2F5omxZM46hZ0kJSqqPGZj%2FMNZDcTkM3LDuQlfHqsrP6TpDE7AWCWEph2fScKPjFQ%2BtjketQNZ%2FEQX9aaKMdgJhmcoZEhV%2FZiGwgU9xMAImOR%2FaZCLPdPDgsyl%2BgdG%2FoiOeKo5BQILQOEkmnljh8n0Ay3v7hZiw1CV0P8cxa58pUUKv8pLhlB9xca22JBluVKlYQEEv8pUaLzYU%2BRyj26s0sdVTf4hRQra0KwvFORqhJ%2Fy9nC1mvXFfsxFv9sOKwEyjSVPdeBJxSjWaCEPD%2B%2FoBYZul88svCzKfteotsus4v5%2B27V%2Fy80ePwXoYbte8ZwpB9fAFvO1y0fQAyZTYBsw5deY0gY6pgE8fITa5H33ulVXNhWtqL9hhcswcVFzFhtCNs3aLeoaFC7UBCMjnnJFcO4pZsLzvbKmWtkMp5CJPQBB3yoA8kA0a74QmzHQQykjwtQnEZwZxGiaIh91I91OeLEAIPkL8jgpFJ4G3KOJGEMYYlCiZxVChpkGBUyUz3mlUxHlT1DZEuDUWx81x9weLnwGwaZCTWqpma6OfXZ0UAszQOpfaxmqYI0o3Jvq&X-Amz-Signature=24965e61cb9e491f100a8b87e9cdffea11632e154a0013d79b5e17735eff0d39&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666P6H5BOJ%2F20260702%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260702T103750Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECkaCXVzLXdlc3QtMiJGMEQCIBuewoyMM29BfxsOoTOzd9QdaKDPvJf2wDc76t9i8KaeAiA%2F4Ri1wfny4Usy1L8zsZtcaqFc9%2Fp0AC5ahj4RyNc7kSqIBAjy%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMJCMyEE3PULAIQR%2FJKtwD1XXQi9u7RcIGCEl9k7PXBrsBGF%2BJcBJoIE3w9viiwXEU5xH0net8tPwDp5mX%2BNpk8XI8bxzKLpfVJ54PQlSIcjqo5BQuDJWAjW6Qu%2F2mRL1qoMjckRixsPjEDLfAUAgr2eVC%2F3e2bBf4%2F%2BOs%2BYagVrlmp1Fe00MDZzXdfUL0dkdut93HJewZUK2uVLDryD6pqLzEmJjy1HdoPa8Ih%2F4%2B36ZcLzCiazI52cq6YY4JHvtlrI5zYHPvnrRdIsTjkE%2BNUDFSVVqiedN8t1XsPvqDa0GiOTeHYShMTCN3iO2%2F5omxZM46hZ0kJSqqPGZj%2FMNZDcTkM3LDuQlfHqsrP6TpDE7AWCWEph2fScKPjFQ%2BtjketQNZ%2FEQX9aaKMdgJhmcoZEhV%2FZiGwgU9xMAImOR%2FaZCLPdPDgsyl%2BgdG%2FoiOeKo5BQILQOEkmnljh8n0Ay3v7hZiw1CV0P8cxa58pUUKv8pLhlB9xca22JBluVKlYQEEv8pUaLzYU%2BRyj26s0sdVTf4hRQra0KwvFORqhJ%2Fy9nC1mvXFfsxFv9sOKwEyjSVPdeBJxSjWaCEPD%2B%2FoBYZul88svCzKfteotsus4v5%2B27V%2Fy80ePwXoYbte8ZwpB9fAFvO1y0fQAyZTYBsw5deY0gY6pgE8fITa5H33ulVXNhWtqL9hhcswcVFzFhtCNs3aLeoaFC7UBCMjnnJFcO4pZsLzvbKmWtkMp5CJPQBB3yoA8kA0a74QmzHQQykjwtQnEZwZxGiaIh91I91OeLEAIPkL8jgpFJ4G3KOJGEMYYlCiZxVChpkGBUyUz3mlUxHlT1DZEuDUWx81x9weLnwGwaZCTWqpma6OfXZ0UAszQOpfaxmqYI0o3Jvq&X-Amz-Signature=1885b869c0635b51e9ceada3990664de3e13d918aeb8f4e8fbe5de21974e9cc5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666P6H5BOJ%2F20260702%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260702T103750Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECkaCXVzLXdlc3QtMiJGMEQCIBuewoyMM29BfxsOoTOzd9QdaKDPvJf2wDc76t9i8KaeAiA%2F4Ri1wfny4Usy1L8zsZtcaqFc9%2Fp0AC5ahj4RyNc7kSqIBAjy%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMJCMyEE3PULAIQR%2FJKtwD1XXQi9u7RcIGCEl9k7PXBrsBGF%2BJcBJoIE3w9viiwXEU5xH0net8tPwDp5mX%2BNpk8XI8bxzKLpfVJ54PQlSIcjqo5BQuDJWAjW6Qu%2F2mRL1qoMjckRixsPjEDLfAUAgr2eVC%2F3e2bBf4%2F%2BOs%2BYagVrlmp1Fe00MDZzXdfUL0dkdut93HJewZUK2uVLDryD6pqLzEmJjy1HdoPa8Ih%2F4%2B36ZcLzCiazI52cq6YY4JHvtlrI5zYHPvnrRdIsTjkE%2BNUDFSVVqiedN8t1XsPvqDa0GiOTeHYShMTCN3iO2%2F5omxZM46hZ0kJSqqPGZj%2FMNZDcTkM3LDuQlfHqsrP6TpDE7AWCWEph2fScKPjFQ%2BtjketQNZ%2FEQX9aaKMdgJhmcoZEhV%2FZiGwgU9xMAImOR%2FaZCLPdPDgsyl%2BgdG%2FoiOeKo5BQILQOEkmnljh8n0Ay3v7hZiw1CV0P8cxa58pUUKv8pLhlB9xca22JBluVKlYQEEv8pUaLzYU%2BRyj26s0sdVTf4hRQra0KwvFORqhJ%2Fy9nC1mvXFfsxFv9sOKwEyjSVPdeBJxSjWaCEPD%2B%2FoBYZul88svCzKfteotsus4v5%2B27V%2Fy80ePwXoYbte8ZwpB9fAFvO1y0fQAyZTYBsw5deY0gY6pgE8fITa5H33ulVXNhWtqL9hhcswcVFzFhtCNs3aLeoaFC7UBCMjnnJFcO4pZsLzvbKmWtkMp5CJPQBB3yoA8kA0a74QmzHQQykjwtQnEZwZxGiaIh91I91OeLEAIPkL8jgpFJ4G3KOJGEMYYlCiZxVChpkGBUyUz3mlUxHlT1DZEuDUWx81x9weLnwGwaZCTWqpma6OfXZ0UAszQOpfaxmqYI0o3Jvq&X-Amz-Signature=8db4b580ee2b998a9b5f4ee93da058fc857f55a448d4533bacced16c538783df&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466432COAGD%2F20260702%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260702T103751Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECkaCXVzLXdlc3QtMiJHMEUCIGk0LPVywZeTmI1TFVWtdIycXvUKB7rJLqumbUQFWiBLAiEAxS7iKvaPu3%2FVc7y0clI%2FgAt%2Fhv5fLNhYPViRu28PP1gqiAQI8v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGe2Kwr15HP5jC4W9CrcA3%2FX6dgt9gHFS8z8BSOfAKcEzFcVqvTRczuk%2BK%2F7wB8mg%2BJWD2%2F3h1AoW9If7OhLYBckq%2FhOv%2BhFqcU9Mbj7z1RqA%2FHAhRoo5W5V5BFc2ne6AX6ecT14PMPr2V5zIuUmF3q%2BOzxMT%2B%2B%2FqtDgCATx9eYXisS0mSshaCQrCDPKHLlRKHKKWtP%2BtREQ13VH1opsbQNFSIDY1cxNXw%2FRVWoEui8pw3XjkbCD7P4gBRwEo2f5Sc%2BQXqBXUDmTdUHawf8k812YZIAJIh5XG9db7asoX9Sn5cgtrRzR2bCIxrMxv%2BYKQTc%2Fo6U7tzsyTeIZl9WMQLnQe%2FIzLv9mOk5PtNcl4g7hre%2F2Xi%2BWKRJ6e2BanJ8KQm4L8R4oE5Prnf572NvlQGMFbIhp1FJH3wUHYWkcP9SnohzJeJKDA26rPNB71%2FWhw9VbmCTOBbJIKj%2FZkgezlwfOl9iuAm9hjxZ4JXISvo9KoGFmrXzmFh8uFhi02k5LR0AMPcVBMjf3TP5qvEeoUrNTSCwQicCU6SIed5QtdU6vbKuTGJVESLmMmfRI79yzaLIU%2FX1FekLq3SlWg%2BFnp%2F9jgjYV7B69yRGfzQPfYiOFRMAAk%2BBTIVAlMUrw506YD7YJbDy3y%2FYqrtPFMObYmNIGOqUBpG1B%2B77D4oxdoiHRp8xflxKYBmdsYQov%2Bxlij8HRXZo2Vm0AkA557vRDdVtOcAX6MK0kED6fmurrWrdq0Yq0lA4dkZkh3TnskeC7d98lpUhgpf2%2BZjF3S1LZDRxSGJ7aLQYGs0bFF1To3jthhKWy1CfJEsrB6Qn4sKvh%2B%2BeEreERBwrzpZK0iuaJGimb4nOIurPROPYYRxQNKUKrB%2Bs%2FQAgoJtZW&X-Amz-Signature=edc4591182c3b264220ed10465eeb5cc60271fb3a7ac75fb4cbf92e68712a6d6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466432COAGD%2F20260702%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260702T103751Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECkaCXVzLXdlc3QtMiJHMEUCIGk0LPVywZeTmI1TFVWtdIycXvUKB7rJLqumbUQFWiBLAiEAxS7iKvaPu3%2FVc7y0clI%2FgAt%2Fhv5fLNhYPViRu28PP1gqiAQI8v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGe2Kwr15HP5jC4W9CrcA3%2FX6dgt9gHFS8z8BSOfAKcEzFcVqvTRczuk%2BK%2F7wB8mg%2BJWD2%2F3h1AoW9If7OhLYBckq%2FhOv%2BhFqcU9Mbj7z1RqA%2FHAhRoo5W5V5BFc2ne6AX6ecT14PMPr2V5zIuUmF3q%2BOzxMT%2B%2B%2FqtDgCATx9eYXisS0mSshaCQrCDPKHLlRKHKKWtP%2BtREQ13VH1opsbQNFSIDY1cxNXw%2FRVWoEui8pw3XjkbCD7P4gBRwEo2f5Sc%2BQXqBXUDmTdUHawf8k812YZIAJIh5XG9db7asoX9Sn5cgtrRzR2bCIxrMxv%2BYKQTc%2Fo6U7tzsyTeIZl9WMQLnQe%2FIzLv9mOk5PtNcl4g7hre%2F2Xi%2BWKRJ6e2BanJ8KQm4L8R4oE5Prnf572NvlQGMFbIhp1FJH3wUHYWkcP9SnohzJeJKDA26rPNB71%2FWhw9VbmCTOBbJIKj%2FZkgezlwfOl9iuAm9hjxZ4JXISvo9KoGFmrXzmFh8uFhi02k5LR0AMPcVBMjf3TP5qvEeoUrNTSCwQicCU6SIed5QtdU6vbKuTGJVESLmMmfRI79yzaLIU%2FX1FekLq3SlWg%2BFnp%2F9jgjYV7B69yRGfzQPfYiOFRMAAk%2BBTIVAlMUrw506YD7YJbDy3y%2FYqrtPFMObYmNIGOqUBpG1B%2B77D4oxdoiHRp8xflxKYBmdsYQov%2Bxlij8HRXZo2Vm0AkA557vRDdVtOcAX6MK0kED6fmurrWrdq0Yq0lA4dkZkh3TnskeC7d98lpUhgpf2%2BZjF3S1LZDRxSGJ7aLQYGs0bFF1To3jthhKWy1CfJEsrB6Qn4sKvh%2B%2BeEreERBwrzpZK0iuaJGimb4nOIurPROPYYRxQNKUKrB%2Bs%2FQAgoJtZW&X-Amz-Signature=54bb6052b244415d3fa45477c2bb6140d1f7daa5451da94d91e4c2e2b56e77eb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466432COAGD%2F20260702%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260702T103751Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECkaCXVzLXdlc3QtMiJHMEUCIGk0LPVywZeTmI1TFVWtdIycXvUKB7rJLqumbUQFWiBLAiEAxS7iKvaPu3%2FVc7y0clI%2FgAt%2Fhv5fLNhYPViRu28PP1gqiAQI8v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGe2Kwr15HP5jC4W9CrcA3%2FX6dgt9gHFS8z8BSOfAKcEzFcVqvTRczuk%2BK%2F7wB8mg%2BJWD2%2F3h1AoW9If7OhLYBckq%2FhOv%2BhFqcU9Mbj7z1RqA%2FHAhRoo5W5V5BFc2ne6AX6ecT14PMPr2V5zIuUmF3q%2BOzxMT%2B%2B%2FqtDgCATx9eYXisS0mSshaCQrCDPKHLlRKHKKWtP%2BtREQ13VH1opsbQNFSIDY1cxNXw%2FRVWoEui8pw3XjkbCD7P4gBRwEo2f5Sc%2BQXqBXUDmTdUHawf8k812YZIAJIh5XG9db7asoX9Sn5cgtrRzR2bCIxrMxv%2BYKQTc%2Fo6U7tzsyTeIZl9WMQLnQe%2FIzLv9mOk5PtNcl4g7hre%2F2Xi%2BWKRJ6e2BanJ8KQm4L8R4oE5Prnf572NvlQGMFbIhp1FJH3wUHYWkcP9SnohzJeJKDA26rPNB71%2FWhw9VbmCTOBbJIKj%2FZkgezlwfOl9iuAm9hjxZ4JXISvo9KoGFmrXzmFh8uFhi02k5LR0AMPcVBMjf3TP5qvEeoUrNTSCwQicCU6SIed5QtdU6vbKuTGJVESLmMmfRI79yzaLIU%2FX1FekLq3SlWg%2BFnp%2F9jgjYV7B69yRGfzQPfYiOFRMAAk%2BBTIVAlMUrw506YD7YJbDy3y%2FYqrtPFMObYmNIGOqUBpG1B%2B77D4oxdoiHRp8xflxKYBmdsYQov%2Bxlij8HRXZo2Vm0AkA557vRDdVtOcAX6MK0kED6fmurrWrdq0Yq0lA4dkZkh3TnskeC7d98lpUhgpf2%2BZjF3S1LZDRxSGJ7aLQYGs0bFF1To3jthhKWy1CfJEsrB6Qn4sKvh%2B%2BeEreERBwrzpZK0iuaJGimb4nOIurPROPYYRxQNKUKrB%2Bs%2FQAgoJtZW&X-Amz-Signature=b5c5392b1ace82f79aadc30bd7fcb1e334fc64ef7eaa6181b27c89fa1396b9a2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466432COAGD%2F20260702%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260702T103751Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECkaCXVzLXdlc3QtMiJHMEUCIGk0LPVywZeTmI1TFVWtdIycXvUKB7rJLqumbUQFWiBLAiEAxS7iKvaPu3%2FVc7y0clI%2FgAt%2Fhv5fLNhYPViRu28PP1gqiAQI8v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGe2Kwr15HP5jC4W9CrcA3%2FX6dgt9gHFS8z8BSOfAKcEzFcVqvTRczuk%2BK%2F7wB8mg%2BJWD2%2F3h1AoW9If7OhLYBckq%2FhOv%2BhFqcU9Mbj7z1RqA%2FHAhRoo5W5V5BFc2ne6AX6ecT14PMPr2V5zIuUmF3q%2BOzxMT%2B%2B%2FqtDgCATx9eYXisS0mSshaCQrCDPKHLlRKHKKWtP%2BtREQ13VH1opsbQNFSIDY1cxNXw%2FRVWoEui8pw3XjkbCD7P4gBRwEo2f5Sc%2BQXqBXUDmTdUHawf8k812YZIAJIh5XG9db7asoX9Sn5cgtrRzR2bCIxrMxv%2BYKQTc%2Fo6U7tzsyTeIZl9WMQLnQe%2FIzLv9mOk5PtNcl4g7hre%2F2Xi%2BWKRJ6e2BanJ8KQm4L8R4oE5Prnf572NvlQGMFbIhp1FJH3wUHYWkcP9SnohzJeJKDA26rPNB71%2FWhw9VbmCTOBbJIKj%2FZkgezlwfOl9iuAm9hjxZ4JXISvo9KoGFmrXzmFh8uFhi02k5LR0AMPcVBMjf3TP5qvEeoUrNTSCwQicCU6SIed5QtdU6vbKuTGJVESLmMmfRI79yzaLIU%2FX1FekLq3SlWg%2BFnp%2F9jgjYV7B69yRGfzQPfYiOFRMAAk%2BBTIVAlMUrw506YD7YJbDy3y%2FYqrtPFMObYmNIGOqUBpG1B%2B77D4oxdoiHRp8xflxKYBmdsYQov%2Bxlij8HRXZo2Vm0AkA557vRDdVtOcAX6MK0kED6fmurrWrdq0Yq0lA4dkZkh3TnskeC7d98lpUhgpf2%2BZjF3S1LZDRxSGJ7aLQYGs0bFF1To3jthhKWy1CfJEsrB6Qn4sKvh%2B%2BeEreERBwrzpZK0iuaJGimb4nOIurPROPYYRxQNKUKrB%2Bs%2FQAgoJtZW&X-Amz-Signature=b2e4a3681e07e1104d8d7f71f2685d4ce067021e03cbb8b40243986a3435e16d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QPA44XJM%2F20260702%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260702T103751Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECkaCXVzLXdlc3QtMiJHMEUCIQCqZrEk3ft%2BltOtoXpgtE8sPevSmmULlnlLaprvLuAc3QIgfIijL4XrI%2F%2BXMqUrOGABQYWB603TqZHiimzPW3UCElAqiAQI8v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAR2GXzehKan7h7u3CrcA6kIyBat0eLU3T16ov4N0HGnN3EU1%2Bl3Tutzh2kq%2Bsrf14R3hFdzcvu1mREDl7U0h2c%2B7tj4dE01dVJZR5yRexKRDskkpjB4SojQDmdgTLqqy%2BLg7a%2Fwgd7VYkDvlkQZL8Rw78DLnBmplh5NvDftXRvdMCPO2o5NS2HsmEbBHSs0kvGB7ta1IMNvE%2FXhydYhtiv9zL0H2S3eP7okE2nXg%2BWXrHnHFy0iSPgulaHlWrEt4op4uP9YW7hcYGdWrw%2B%2BsBkcDqIpX8lt%2F6phZzovrBs%2FONGN%2FNVv4RehhMTHkAW5961Oq%2B8siTcWvleV05POL%2FExPBACdasHr%2FQJGDcAUW%2B0lwE5Uc%2Bh9Tj81jwig3hIxitjm7t84VNbQB70naeSLZ3r%2FrPpfBYQe0tyBzuSJwAkW%2F%2Fw1oaXxkRufsPnU43f9zQGHN1F7G%2F3bVHnaRdBNueUVINy%2FPg9Lly86R4yQ08gdVEDGm8Q1ccS50SiEuphC01Ivu94pRtLxhWQtkLF1ETsLhi30k5M%2BNycq5zuPxW15WZWnfOPKodTMPOlfxHzy3Hlx5h8vDssYoRZYlFlYmMGBODMRUGKspjnlgnJLzg6PGgywkAsUy3l0Am6VL7J1BzGyDaRUebqVkKAMKDWmNIGOqUBPM9msPf6Bq0FiG3Q2mkFuQkEaDqinE3dbxzvOm9073MlYlkl3AN5oevQKqrF6QKDzwKHQthMC29OZobiWWjQ4%2FzTPtm2dIaE75sql9lKWynQLZQ%2FhbldfvdtgMiyqPiJalvyU4lFx0xNtiKAQsTjGJdOcnqME6CbbgJihj6tY2wMTFCDu9vqUFw2XbDGv2FIWYuUBkQLIPmDII6sVRM3hcvXn6P%2F&X-Amz-Signature=3fdb49eb0b4768e303b5b936cf01736921f95ec0e3b6ecaa3d9a4d1c69b6ad40&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466222KKKGH%2F20260702%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260702T103751Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECkaCXVzLXdlc3QtMiJIMEYCIQCNFn2vB0UOFCucwmN2ndLRUCesQTwExJIki4udHzeIGgIhAJg3sbx4xlZqX7LZE%2B6e0uO7gCaR1XZbdNK7ZHtEG52oKogECPL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyPWKlt8Y9kmZTbDf4q3AMWlHVVPRgq2RR1m%2FnFtescX8Kjm87fOG1Z8YPqoCkcfM3kfQgfKMTtV6Hekq%2BZNrsm5lbOnUDOOumDN2LkEVDH%2F9do57umzPxvBzGR10iAEXHY0qksOL6Onx5BdkXRQZTxgGpZPndfiK9NQjN4N7oKV4AkeHF%2FXQVXcoSAnPcTdoAlqLeBuZ5pm7utgfoOqRzFk%2F69nVkd3vFCqgEMuQYzpssB3NGIwd2WnKsivuzboekPjR6cX8%2F2qm%2FS7WbONbbhHEgspiin5IfiDzsr%2BIZDzJbLO8VXV3qMu2S1AlzZCJjjZ6K9CeTBih93OoG%2Fp0lPopijYJNQpG4z2JLDk27zwRdfwqVaMzGgVKtYyGE86DdZKMZoWjwR6eUL8eTYWvNxIb0EUkwaJRQ3SanTr%2FLD%2BUdUDAVsDGkFV8KGf1kSZj6l2WLd0QHStDKGMubHmWrz4V6SJ5oOw8YUKJ%2F4rmJolAmKsLbJ%2F0hYg3KF2fe0LLtotNsQEvw54uwOdpphcOQjOBFFATDOJJ2Egomlfm5d%2BkIDbd1HK6Epx1789pa8WFKCjrMUxBXZyar1aO%2FYmqIVh%2BpvQG53cbpyxNTGePzIB4F3X9m2jqj%2FUYKPxGrMcIsXS%2BKhyFnJM8pXqDCZ2JjSBjqkAcKvrRT9jmwoaT%2FVxSf6Pos0galIdZ90eddKGrYQk2QjUVNsPt4MdTBica1HQtZVy%2F%2BXkPq1M5VMTifluvu%2B8vVLQ5M0433av%2B6frtwAQmxdGuCFYxv5fiL46VnVt4xzGtyzoBdeYzHeYUkNCNKJ5va3lPqTt0wyY4JxbWDsl2aud8kOKPU79Fqwqmflo%2FgknCdqXT5rutFOfWufu897WANp9fBg&X-Amz-Signature=a1a944134a9121e977a552e8b94e439ca2d18cba09177f562bb483d21fe96433&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466222KKKGH%2F20260702%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260702T103751Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECkaCXVzLXdlc3QtMiJIMEYCIQCNFn2vB0UOFCucwmN2ndLRUCesQTwExJIki4udHzeIGgIhAJg3sbx4xlZqX7LZE%2B6e0uO7gCaR1XZbdNK7ZHtEG52oKogECPL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyPWKlt8Y9kmZTbDf4q3AMWlHVVPRgq2RR1m%2FnFtescX8Kjm87fOG1Z8YPqoCkcfM3kfQgfKMTtV6Hekq%2BZNrsm5lbOnUDOOumDN2LkEVDH%2F9do57umzPxvBzGR10iAEXHY0qksOL6Onx5BdkXRQZTxgGpZPndfiK9NQjN4N7oKV4AkeHF%2FXQVXcoSAnPcTdoAlqLeBuZ5pm7utgfoOqRzFk%2F69nVkd3vFCqgEMuQYzpssB3NGIwd2WnKsivuzboekPjR6cX8%2F2qm%2FS7WbONbbhHEgspiin5IfiDzsr%2BIZDzJbLO8VXV3qMu2S1AlzZCJjjZ6K9CeTBih93OoG%2Fp0lPopijYJNQpG4z2JLDk27zwRdfwqVaMzGgVKtYyGE86DdZKMZoWjwR6eUL8eTYWvNxIb0EUkwaJRQ3SanTr%2FLD%2BUdUDAVsDGkFV8KGf1kSZj6l2WLd0QHStDKGMubHmWrz4V6SJ5oOw8YUKJ%2F4rmJolAmKsLbJ%2F0hYg3KF2fe0LLtotNsQEvw54uwOdpphcOQjOBFFATDOJJ2Egomlfm5d%2BkIDbd1HK6Epx1789pa8WFKCjrMUxBXZyar1aO%2FYmqIVh%2BpvQG53cbpyxNTGePzIB4F3X9m2jqj%2FUYKPxGrMcIsXS%2BKhyFnJM8pXqDCZ2JjSBjqkAcKvrRT9jmwoaT%2FVxSf6Pos0galIdZ90eddKGrYQk2QjUVNsPt4MdTBica1HQtZVy%2F%2BXkPq1M5VMTifluvu%2B8vVLQ5M0433av%2B6frtwAQmxdGuCFYxv5fiL46VnVt4xzGtyzoBdeYzHeYUkNCNKJ5va3lPqTt0wyY4JxbWDsl2aud8kOKPU79Fqwqmflo%2FgknCdqXT5rutFOfWufu897WANp9fBg&X-Amz-Signature=8548e21707cc33ec450ac3503fee08718ff6896322989349b07e230e8fa9e6ea&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
