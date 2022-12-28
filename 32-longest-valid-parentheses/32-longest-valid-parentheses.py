class Solution:
    def longestValidParentheses(self,s: str) -> int:
        stack = [-1]
        max_length = 0
        for i, c in enumerate(s):
            if c == '(':
                stack.append(i)
            else:
                stack.pop()
                if stack:
                    length = i - stack[-1]
                    max_length = max(max_length, length)
                else:
                    stack.append(i)
        return max_length

        