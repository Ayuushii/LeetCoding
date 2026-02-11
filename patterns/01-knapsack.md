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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YJIW6CFF%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T041627Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEzkhKmPbZyDQwWhRsjNwgcQv%2BUgD3kMjWJtgDgIASJTAiEAlU%2FOmArSgqClbJCkiXzrc4VWBddexyCfUW7yEe7ApTsqiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMc23pT1%2FVh31oqFESrcA%2FVn608AAEzUrz%2BkbtXSUMejNkCeWun1zWhZD%2FxG4MDbGNGUH54cfytPtjQz4g%2FGqV1mRocgFi5q%2FzgB5cXgqBRefBelc0u%2BN2Gkv4wWDe5SXAY3hWoW3Fn93g9ub1YRxpG817kU0x2KRfU2%2FyUUiheLico4%2BxOmECwTiNRcTWoEnxXYDtr%2F7V0Bz8KhF612J%2F8FJ2cpnO%2BEU4vk%2Bjkg0NqZJjnJJYsS8kVRdEzDFq0rVJ5YNwXorpE0fgy8CryCHfobYBt5HE6Cjq19%2F2X8I7S6dURl9TQIbatFevfC7xEh5jwT%2BvUUKVaYPBBjlxA5S1qUP8yNSx5V0tzuJTMJNObmBvG6kQAJqvgtE4yT64v%2BTkDAPR3Y62HJzw01dDLHZ4ubCgUDMNlgTd%2BpkW%2B0SOZ4Kb4VqU6YAhNy1kzHOxp9Pk0aAv9WoAiEvXRlTwkP9aGQonFiapnYgxyUTYk9cDrzAVPW1lDdiYNblqaOTkUIXq8bAzuDpwp7zgz46hJPPSDix74AGtJ6hdQYSFvB5Dih%2BPOiNeEzIn9BBWBIxUt7mb4vz3Ze1LXqAB8Z6Xs5waVL9mPyvEvvAAQqTIw3lB00AIdm90IDkjnKZXwpFaI5GX9DqaIQmc57y5ojMJrLr8wGOqUBYKPnoSfyZOpaxpbSx26KtHpXMoO96vuXiIANf8jWXXx6GQ%2F%2BECirQ2cwMinQ%2Fl9ke8qfqGeBAajM8tO2OrNSrGw5XWMHYZky%2Buz17YgN3hKmkWQvjeX38EDskX4RBbhemoEP0ep4y%2FiH3HRinSF3Qk8vrxFnBsNhB70n0FoWDyIGSfAWZ6jeRI5y8pyK3IhSGq%2BN4hx2PY0cxBlhYhB8k5WQ6Xz7&X-Amz-Signature=38af899b80e49d0938f96686eb298ad32bca594b3b507321f74e7667160f0409&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YJIW6CFF%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T041627Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEzkhKmPbZyDQwWhRsjNwgcQv%2BUgD3kMjWJtgDgIASJTAiEAlU%2FOmArSgqClbJCkiXzrc4VWBddexyCfUW7yEe7ApTsqiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMc23pT1%2FVh31oqFESrcA%2FVn608AAEzUrz%2BkbtXSUMejNkCeWun1zWhZD%2FxG4MDbGNGUH54cfytPtjQz4g%2FGqV1mRocgFi5q%2FzgB5cXgqBRefBelc0u%2BN2Gkv4wWDe5SXAY3hWoW3Fn93g9ub1YRxpG817kU0x2KRfU2%2FyUUiheLico4%2BxOmECwTiNRcTWoEnxXYDtr%2F7V0Bz8KhF612J%2F8FJ2cpnO%2BEU4vk%2Bjkg0NqZJjnJJYsS8kVRdEzDFq0rVJ5YNwXorpE0fgy8CryCHfobYBt5HE6Cjq19%2F2X8I7S6dURl9TQIbatFevfC7xEh5jwT%2BvUUKVaYPBBjlxA5S1qUP8yNSx5V0tzuJTMJNObmBvG6kQAJqvgtE4yT64v%2BTkDAPR3Y62HJzw01dDLHZ4ubCgUDMNlgTd%2BpkW%2B0SOZ4Kb4VqU6YAhNy1kzHOxp9Pk0aAv9WoAiEvXRlTwkP9aGQonFiapnYgxyUTYk9cDrzAVPW1lDdiYNblqaOTkUIXq8bAzuDpwp7zgz46hJPPSDix74AGtJ6hdQYSFvB5Dih%2BPOiNeEzIn9BBWBIxUt7mb4vz3Ze1LXqAB8Z6Xs5waVL9mPyvEvvAAQqTIw3lB00AIdm90IDkjnKZXwpFaI5GX9DqaIQmc57y5ojMJrLr8wGOqUBYKPnoSfyZOpaxpbSx26KtHpXMoO96vuXiIANf8jWXXx6GQ%2F%2BECirQ2cwMinQ%2Fl9ke8qfqGeBAajM8tO2OrNSrGw5XWMHYZky%2Buz17YgN3hKmkWQvjeX38EDskX4RBbhemoEP0ep4y%2FiH3HRinSF3Qk8vrxFnBsNhB70n0FoWDyIGSfAWZ6jeRI5y8pyK3IhSGq%2BN4hx2PY0cxBlhYhB8k5WQ6Xz7&X-Amz-Signature=bf8083db95802b504a8b4e898c67c2e68e05578e79e8504a9d8dadb4e8ac08b2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YJIW6CFF%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T041627Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIEzkhKmPbZyDQwWhRsjNwgcQv%2BUgD3kMjWJtgDgIASJTAiEAlU%2FOmArSgqClbJCkiXzrc4VWBddexyCfUW7yEe7ApTsqiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMc23pT1%2FVh31oqFESrcA%2FVn608AAEzUrz%2BkbtXSUMejNkCeWun1zWhZD%2FxG4MDbGNGUH54cfytPtjQz4g%2FGqV1mRocgFi5q%2FzgB5cXgqBRefBelc0u%2BN2Gkv4wWDe5SXAY3hWoW3Fn93g9ub1YRxpG817kU0x2KRfU2%2FyUUiheLico4%2BxOmECwTiNRcTWoEnxXYDtr%2F7V0Bz8KhF612J%2F8FJ2cpnO%2BEU4vk%2Bjkg0NqZJjnJJYsS8kVRdEzDFq0rVJ5YNwXorpE0fgy8CryCHfobYBt5HE6Cjq19%2F2X8I7S6dURl9TQIbatFevfC7xEh5jwT%2BvUUKVaYPBBjlxA5S1qUP8yNSx5V0tzuJTMJNObmBvG6kQAJqvgtE4yT64v%2BTkDAPR3Y62HJzw01dDLHZ4ubCgUDMNlgTd%2BpkW%2B0SOZ4Kb4VqU6YAhNy1kzHOxp9Pk0aAv9WoAiEvXRlTwkP9aGQonFiapnYgxyUTYk9cDrzAVPW1lDdiYNblqaOTkUIXq8bAzuDpwp7zgz46hJPPSDix74AGtJ6hdQYSFvB5Dih%2BPOiNeEzIn9BBWBIxUt7mb4vz3Ze1LXqAB8Z6Xs5waVL9mPyvEvvAAQqTIw3lB00AIdm90IDkjnKZXwpFaI5GX9DqaIQmc57y5ojMJrLr8wGOqUBYKPnoSfyZOpaxpbSx26KtHpXMoO96vuXiIANf8jWXXx6GQ%2F%2BECirQ2cwMinQ%2Fl9ke8qfqGeBAajM8tO2OrNSrGw5XWMHYZky%2Buz17YgN3hKmkWQvjeX38EDskX4RBbhemoEP0ep4y%2FiH3HRinSF3Qk8vrxFnBsNhB70n0FoWDyIGSfAWZ6jeRI5y8pyK3IhSGq%2BN4hx2PY0cxBlhYhB8k5WQ6Xz7&X-Amz-Signature=a022f3577e56de21b2d41cab7491d7805e477045230e2dedbb886fb8153d6674&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TUPIWTS2%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T041628Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIFlTqDTIK63iCcm3os2EY8e1kRgHVmwUjct%2BT1hzzV3mAiBmTtUQtMrwXx4oZGXkz%2BQXMmDnd4ZLxK01%2Brk6Gf3UmSqIBAiz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMr8NmBuitDsbHJIUKKtwDACFqSXdsbV5sAGOQFAfrh54pqThylOxf3DwmfiQeBPCzi8CKoBFonDTIGuB%2B5%2B59cPDo9S7anK%2FceUrzOVW6I9WebfFdznGp%2F6jwyduSfV3xyV1%2BEkalSxH8lAM0X6cwvCBVj35QgEyjNvXvPu5rqIdSdaRAvuaRYKnFw2VlaHw8sVd%2Ft3HZQoGjqsQliWjp1Fml%2Bd3aaBL%2FJr%2B1DB%2BGaFcyYs92wT%2B1vjD5HuvMTp6WcYb0IbiqnP9QXNUIolWLEnuT1Uq8VG9QnFHZzC4OkRhbfBNjqtpq6XTIOxDuGGN0bRawtoLCoffCa%2Bp8EPesdQaKualyGQq6jxzXc%2FKjj1Z8eKKWjkvl8w4CMqBRKiipIkzHQDcACAPsqI%2BUYgxx5cHegV3b1UZJP2jvoYxCCAw21qoLkjalqwZOZ%2BDMn62z9aoCDsV6eCVoCcHT%2BqunR0w4Te8l5%2FRr4TbZFaAEp2%2BmInIaeDavXkgcIsDiLc9h1QFX5DYTimDGz4QZcIB957yG4QRyccSwu896wEdg8bHEzYOYXv9WTuMYC9rXhlSsAxjzckJLw3%2FIlhSisPgVroneLXeiBGNeE%2FCs8tGEA99yPVAzugQ0N%2Fo2urcvjXZ11WmQns4Ow3BO5e4wgMyvzAY6pgFBVh%2F5WSisE4vjsWbijtMP9JK5luH%2FulkF2R5ywrjYwHMFvzWhIK13TZ61TLET5NLYsiXcVOkqw6xILItYJZ7Dt1zCQetQ7hqji%2F8odClbz94Emg1sAAoo5Kn%2FzOc%2F3j0Nyqjw3476njTjh2p7rrsH7gyMNjQBiAx9LZcPw%2BtOFUNMA5t%2FWPEx5P0DzdMSLjtIuojOzGUN7Xbww20hcEcf%2FaD9h1fl&X-Amz-Signature=44ecc6b926fa118eceae1b958bd0c7cd178df6a1521b569fa95523e44f8944a6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TUPIWTS2%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T041628Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIFlTqDTIK63iCcm3os2EY8e1kRgHVmwUjct%2BT1hzzV3mAiBmTtUQtMrwXx4oZGXkz%2BQXMmDnd4ZLxK01%2Brk6Gf3UmSqIBAiz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMr8NmBuitDsbHJIUKKtwDACFqSXdsbV5sAGOQFAfrh54pqThylOxf3DwmfiQeBPCzi8CKoBFonDTIGuB%2B5%2B59cPDo9S7anK%2FceUrzOVW6I9WebfFdznGp%2F6jwyduSfV3xyV1%2BEkalSxH8lAM0X6cwvCBVj35QgEyjNvXvPu5rqIdSdaRAvuaRYKnFw2VlaHw8sVd%2Ft3HZQoGjqsQliWjp1Fml%2Bd3aaBL%2FJr%2B1DB%2BGaFcyYs92wT%2B1vjD5HuvMTp6WcYb0IbiqnP9QXNUIolWLEnuT1Uq8VG9QnFHZzC4OkRhbfBNjqtpq6XTIOxDuGGN0bRawtoLCoffCa%2Bp8EPesdQaKualyGQq6jxzXc%2FKjj1Z8eKKWjkvl8w4CMqBRKiipIkzHQDcACAPsqI%2BUYgxx5cHegV3b1UZJP2jvoYxCCAw21qoLkjalqwZOZ%2BDMn62z9aoCDsV6eCVoCcHT%2BqunR0w4Te8l5%2FRr4TbZFaAEp2%2BmInIaeDavXkgcIsDiLc9h1QFX5DYTimDGz4QZcIB957yG4QRyccSwu896wEdg8bHEzYOYXv9WTuMYC9rXhlSsAxjzckJLw3%2FIlhSisPgVroneLXeiBGNeE%2FCs8tGEA99yPVAzugQ0N%2Fo2urcvjXZ11WmQns4Ow3BO5e4wgMyvzAY6pgFBVh%2F5WSisE4vjsWbijtMP9JK5luH%2FulkF2R5ywrjYwHMFvzWhIK13TZ61TLET5NLYsiXcVOkqw6xILItYJZ7Dt1zCQetQ7hqji%2F8odClbz94Emg1sAAoo5Kn%2FzOc%2F3j0Nyqjw3476njTjh2p7rrsH7gyMNjQBiAx9LZcPw%2BtOFUNMA5t%2FWPEx5P0DzdMSLjtIuojOzGUN7Xbww20hcEcf%2FaD9h1fl&X-Amz-Signature=7c612ac41fd049278e2df3c3414426c65178d9ba656cb182a6e2652f2cc8efb4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TUPIWTS2%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T041628Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIFlTqDTIK63iCcm3os2EY8e1kRgHVmwUjct%2BT1hzzV3mAiBmTtUQtMrwXx4oZGXkz%2BQXMmDnd4ZLxK01%2Brk6Gf3UmSqIBAiz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMr8NmBuitDsbHJIUKKtwDACFqSXdsbV5sAGOQFAfrh54pqThylOxf3DwmfiQeBPCzi8CKoBFonDTIGuB%2B5%2B59cPDo9S7anK%2FceUrzOVW6I9WebfFdznGp%2F6jwyduSfV3xyV1%2BEkalSxH8lAM0X6cwvCBVj35QgEyjNvXvPu5rqIdSdaRAvuaRYKnFw2VlaHw8sVd%2Ft3HZQoGjqsQliWjp1Fml%2Bd3aaBL%2FJr%2B1DB%2BGaFcyYs92wT%2B1vjD5HuvMTp6WcYb0IbiqnP9QXNUIolWLEnuT1Uq8VG9QnFHZzC4OkRhbfBNjqtpq6XTIOxDuGGN0bRawtoLCoffCa%2Bp8EPesdQaKualyGQq6jxzXc%2FKjj1Z8eKKWjkvl8w4CMqBRKiipIkzHQDcACAPsqI%2BUYgxx5cHegV3b1UZJP2jvoYxCCAw21qoLkjalqwZOZ%2BDMn62z9aoCDsV6eCVoCcHT%2BqunR0w4Te8l5%2FRr4TbZFaAEp2%2BmInIaeDavXkgcIsDiLc9h1QFX5DYTimDGz4QZcIB957yG4QRyccSwu896wEdg8bHEzYOYXv9WTuMYC9rXhlSsAxjzckJLw3%2FIlhSisPgVroneLXeiBGNeE%2FCs8tGEA99yPVAzugQ0N%2Fo2urcvjXZ11WmQns4Ow3BO5e4wgMyvzAY6pgFBVh%2F5WSisE4vjsWbijtMP9JK5luH%2FulkF2R5ywrjYwHMFvzWhIK13TZ61TLET5NLYsiXcVOkqw6xILItYJZ7Dt1zCQetQ7hqji%2F8odClbz94Emg1sAAoo5Kn%2FzOc%2F3j0Nyqjw3476njTjh2p7rrsH7gyMNjQBiAx9LZcPw%2BtOFUNMA5t%2FWPEx5P0DzdMSLjtIuojOzGUN7Xbww20hcEcf%2FaD9h1fl&X-Amz-Signature=11b819df2d35c5c482d6e8c36c3bf0d053e47d2bd53ea6d8c566603d3daa0dc4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TUPIWTS2%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T041628Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIFlTqDTIK63iCcm3os2EY8e1kRgHVmwUjct%2BT1hzzV3mAiBmTtUQtMrwXx4oZGXkz%2BQXMmDnd4ZLxK01%2Brk6Gf3UmSqIBAiz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMr8NmBuitDsbHJIUKKtwDACFqSXdsbV5sAGOQFAfrh54pqThylOxf3DwmfiQeBPCzi8CKoBFonDTIGuB%2B5%2B59cPDo9S7anK%2FceUrzOVW6I9WebfFdznGp%2F6jwyduSfV3xyV1%2BEkalSxH8lAM0X6cwvCBVj35QgEyjNvXvPu5rqIdSdaRAvuaRYKnFw2VlaHw8sVd%2Ft3HZQoGjqsQliWjp1Fml%2Bd3aaBL%2FJr%2B1DB%2BGaFcyYs92wT%2B1vjD5HuvMTp6WcYb0IbiqnP9QXNUIolWLEnuT1Uq8VG9QnFHZzC4OkRhbfBNjqtpq6XTIOxDuGGN0bRawtoLCoffCa%2Bp8EPesdQaKualyGQq6jxzXc%2FKjj1Z8eKKWjkvl8w4CMqBRKiipIkzHQDcACAPsqI%2BUYgxx5cHegV3b1UZJP2jvoYxCCAw21qoLkjalqwZOZ%2BDMn62z9aoCDsV6eCVoCcHT%2BqunR0w4Te8l5%2FRr4TbZFaAEp2%2BmInIaeDavXkgcIsDiLc9h1QFX5DYTimDGz4QZcIB957yG4QRyccSwu896wEdg8bHEzYOYXv9WTuMYC9rXhlSsAxjzckJLw3%2FIlhSisPgVroneLXeiBGNeE%2FCs8tGEA99yPVAzugQ0N%2Fo2urcvjXZ11WmQns4Ow3BO5e4wgMyvzAY6pgFBVh%2F5WSisE4vjsWbijtMP9JK5luH%2FulkF2R5ywrjYwHMFvzWhIK13TZ61TLET5NLYsiXcVOkqw6xILItYJZ7Dt1zCQetQ7hqji%2F8odClbz94Emg1sAAoo5Kn%2FzOc%2F3j0Nyqjw3476njTjh2p7rrsH7gyMNjQBiAx9LZcPw%2BtOFUNMA5t%2FWPEx5P0DzdMSLjtIuojOzGUN7Xbww20hcEcf%2FaD9h1fl&X-Amz-Signature=be3c800231a8f68520aa4e36a3d57b78de270d8a8999fedcd71c42bfc4989dd3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q4LSEA7O%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T041629Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBt%2FFMc95e8dMJI9BHDlnWrMJidywzJCZcw8RPrzGEI0AiEA46d1OrCElcW0mcAE8Gf4IsAfkHvUla0RgaJWP%2BSdw5sqiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLx%2F2CTh%2BVL6lYV6qCrcA498LXzUGrsyrSrwHJv7t%2FhV2JvxvtpnMB9LwsasdLet0cdBVz%2FppbiTFrfgSPs9U%2FqA3i8ZvF5p5JyOpg4aoOT9nKPKdvFOETF4vSlO%2FC8qsD6DIew2Lpv20Z9eDzGjKe93325rHa66i%2FkM27cxeE4DkS3h1nLi%2FUZRSk3q17AUv1jGo%2FgPsj%2BPHANPk6QoXM1lK7SKYmdHoG7csKPd5aKtFIcDO7uKfQl8UrU91MbNwtrLX2I4pvo4oImxvJWCQ2ULTR13L%2FcjMqZuE4eO2knqMoFqGcY3Gd0rkHwTr%2BxFb9OLWDFyMItsajT4tTNOUODK1bJiE65O2eTWxZ3EtqEq1dX5MlHBMB8rlWnG0pSexMlrad4YtLuYZ3tJNJsft%2BBKDePh5wUs7Ug3gOYts8%2BqYIa7pahS%2FADOariqqxqhTSs8yuFlHTIrFiLzszcfJbW3KdMHoqX0j5Jh%2F9zhS76IAUbOKH%2BepJh06BtopJKsL3Jk27MFS1Lxaw%2F2qkYeNUq3diUzSepL89RuwqyRG0CeULetca0dqOLOyGq4Sc5RzLOLphW6SJfU%2BAxMaXvxzauR0s5LMYKs6td%2Bgqpx1lyvB01iEVi%2BEc12PNJxYWoA0B8aUPXfR2s9c5yxMP%2FKr8wGOqUBV7GTXCP0fYdzkywl5fQqccGnsYdboXFxA0EjO1dl4hWy5TORBRma9qJ%2BzdWhQDwOBH0JEn4HHHyq4Qclh%2Fpz1LH1pJ%2BCzbly1wYL98azUOYRBqO68llR%2B9XMQ3XriKmd%2BZN%2FznWQDljEo%2BF3B%2F7gxTaahWsQBK5t4%2B72VcaXeh0kaAqRsEabvb7CgSrfmWJ9Pfl%2BBdqhl2OCeiaWSNwlCA0vYtEC&X-Amz-Signature=14898d24c3532b73202b22265fc393437d3236c29e355dedc823e4f274160b7f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665SQSDDCP%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T041629Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIH1bStKNODXQusfPlw2c4rYM7xHOvN3Gzs53HNhbdVyxAiEApgid9vze1BenT4ZUhV6wrfD1r4%2Fm%2BGFF3mHZdHYcahIqiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLEyvH1FXeRJdxyigyrcA1vpu7UfXrauJjRZcK%2BVoMb3yy0xkKdVLD%2BQQKrBVyCB7EjCKtxNVFjFJgC54HUalp6Aqd2sHXYFEZWt3EILfH3DoIvidQaSDLYAM7som4oRoHQNNfVM%2B9FJzroWR1jllYkp1YcW93p%2FRsXaeNy7mG3zTQ8MgzFmFhG10xXG%2F%2FdZgXbWHW07SzQR6oX1ZNfbpQxnjdP9rR60LIP7uEyUOzBVp03F81v3j%2BLGc41kkKlQDcHCpMrgGfqDfJw58KEAaaDlbufc398CtzBmfKkKRXPgZV%2BlqCW2C4NvYYOJHO085%2FLNQz4uXYqk4RNvNHVLWbtH40jCXB7Zt5fbFFudKIhn5VMsH8m5FXkRHZWTLt%2FGIfjxl4Wjt4yFIPs2ilLFe%2BMNF%2FKBGIuuH%2FEoU9d5O9em9dKyIoxmx31yA4qOawpx%2FJcnw5oDg5oMkgdgXIw%2FDeSFSQLKRA1NN4aOD4Tjs5bM9uNAAtErnYnKWEDDs%2Fv6OWVHbl%2FrFTfwcsOHH7mtuOsvqP63MGj2mZrNIItAttc207phjxiQGwevPfLjk4u1h62MG5xhsKxuOyuaejmmNEQ6qrH%2FZT4yFsQ%2FNXfY3S3Dl6eMq7uvi6pk%2F8EQTno9gj5DltRXNbYRQCOlMLjLr8wGOqUBpTC5qBeO5goyv0jY9kg8yXNK4Rbds9SJ4N9FqdYY6Mare99gcYfP%2B%2B0hT0a8yFR1tEXXSDb1WUeOyr4LZBPpKb5qfxBhoFGRczB35vjOI%2Fn6NXg8ndsyjTBZZxQksqCcU8xU%2FjYuiN5v6Q1Rc1U1MqafXS1mld6YRIHUbQXiFUF8wpAcER7HCqFWVjPZmbRcr1R%2BXozz4FkSEySdw5ZfCPy58nJq&X-Amz-Signature=383b6967ed47c3da81d069bbd1fad0abc7ca9b52f1cd51a6109871bdb61a8bee&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665SQSDDCP%2F20260211%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260211T041629Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIH1bStKNODXQusfPlw2c4rYM7xHOvN3Gzs53HNhbdVyxAiEApgid9vze1BenT4ZUhV6wrfD1r4%2Fm%2BGFF3mHZdHYcahIqiAQIs%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLEyvH1FXeRJdxyigyrcA1vpu7UfXrauJjRZcK%2BVoMb3yy0xkKdVLD%2BQQKrBVyCB7EjCKtxNVFjFJgC54HUalp6Aqd2sHXYFEZWt3EILfH3DoIvidQaSDLYAM7som4oRoHQNNfVM%2B9FJzroWR1jllYkp1YcW93p%2FRsXaeNy7mG3zTQ8MgzFmFhG10xXG%2F%2FdZgXbWHW07SzQR6oX1ZNfbpQxnjdP9rR60LIP7uEyUOzBVp03F81v3j%2BLGc41kkKlQDcHCpMrgGfqDfJw58KEAaaDlbufc398CtzBmfKkKRXPgZV%2BlqCW2C4NvYYOJHO085%2FLNQz4uXYqk4RNvNHVLWbtH40jCXB7Zt5fbFFudKIhn5VMsH8m5FXkRHZWTLt%2FGIfjxl4Wjt4yFIPs2ilLFe%2BMNF%2FKBGIuuH%2FEoU9d5O9em9dKyIoxmx31yA4qOawpx%2FJcnw5oDg5oMkgdgXIw%2FDeSFSQLKRA1NN4aOD4Tjs5bM9uNAAtErnYnKWEDDs%2Fv6OWVHbl%2FrFTfwcsOHH7mtuOsvqP63MGj2mZrNIItAttc207phjxiQGwevPfLjk4u1h62MG5xhsKxuOyuaejmmNEQ6qrH%2FZT4yFsQ%2FNXfY3S3Dl6eMq7uvi6pk%2F8EQTno9gj5DltRXNbYRQCOlMLjLr8wGOqUBpTC5qBeO5goyv0jY9kg8yXNK4Rbds9SJ4N9FqdYY6Mare99gcYfP%2B%2B0hT0a8yFR1tEXXSDb1WUeOyr4LZBPpKb5qfxBhoFGRczB35vjOI%2Fn6NXg8ndsyjTBZZxQksqCcU8xU%2FjYuiN5v6Q1Rc1U1MqafXS1mld6YRIHUbQXiFUF8wpAcER7HCqFWVjPZmbRcr1R%2BXozz4FkSEySdw5ZfCPy58nJq&X-Amz-Signature=1644c2556df6d5879a5f97bab4a29f1536615d92423c1eba25d7730251ab768a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
