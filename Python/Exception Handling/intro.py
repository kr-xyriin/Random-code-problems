def exception(a,b):
    try:
        result=  a/b
    except ZeroDivisionError:
        print("EXCEPTION RAISED: Division by zero is not possible!")
    except FileNotFoundError:
        print("File not found")
    else:
        print(result)
    finally:
        print("Execution completed successfully...")

exception(12, 10)
print()
exception(12,0)