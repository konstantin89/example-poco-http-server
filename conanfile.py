from conans import ConanFile, CMake


class ExamplePocoHttpServer(ConanFile):

    description = "Example library package for conan.io"

    name = "example-poco-http-server"
    version = "1.0.0"
    url = "https://github.com/konstantin89/example-poco-http-server"
    settings = "os", "arch", "compiler", "build_type"
    generators = "cmake"
    license = "MIT"

    def build_requirements(self):
        self.build_requires("Poco/1.9.3@pocoproject/stable")

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()

    def source(self):
        self.run("git clone https://github.com/konstantin89/example-poco-http-server")
        self.run("cd example-poco-http-server")

    def package(self):
        self.copy("LICENSE", dst="licenses")
        self.copy("src/bin/*", dst="bin")

    def package_info(self):
        self.cpp_info.libs = []
