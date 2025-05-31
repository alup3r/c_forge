import subprocess

def main():
    with open("/etc/redhat-release", "r") as fp:
        contents = fp.readlines()
        for line in contents:
            print(line.strip())

    result = subprocess.run(["uname", "-a"], capture_output=True, text=True)
    print(result.stdout)

if __name__ == "__main__":
    main()
