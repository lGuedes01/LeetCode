class Solution(object):
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        carry = 0 
        ia = len(a) - 1 
        ib = len(b) - 1 
        c = []
        while (ia >= 0 or ib >= 0 or carry == '1'):
            inta = 0
            intb = 0
            if ia >= 0:
                inta = int(a[ia]) 
                ia -= 1
            if ib >= 0:
                intb = int(b[ib]) 
                ib -= 1
            step = inta + intb + int(carry) 
            carry = str(step // 2) 
            step = str(step%2) 
            c.insert(0,step)
        return ''.join(c)