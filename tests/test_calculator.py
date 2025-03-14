import unittest
import subprocess

class TestCalculator(unittest.TestCase):
    def test_addition(self):
        result = subprocess.run(["./calculator", "+", "3", "4"], stdout=subprocess.PIPE, text=True)
        self.assertEqual(result.stdout.strip(), "7")

    def test_subtraction(self):
        result = subprocess.run(["./calculator", "-", "10", "3"], stdout=subprocess.PIPE, text=True)
        self.assertEqual(result.stdout.strip(), "7")

    def test_multiplication(self):
        result = subprocess.run(["./calculator", "*", "2", "3"], stdout=subprocess.PIPE, text=True)
        self.assertEqual(result.stdout.strip(), "6")

    def test_division(self):
        result = subprocess.run(["./calculator", "/", "8", "2"], stdout=subprocess.PIPE, text=True)
        self.assertEqual(result.stdout.strip(), "4.00")  

    def test_division_by_zero(self):
        result = subprocess.run(["./calculator", "/", "8", "0"], stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
        self.assertIn("Error: Division by zero", result.stderr)  

if __name__ == "__main__":
    unittest.main()

