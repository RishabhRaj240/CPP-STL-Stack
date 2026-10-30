#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>

class TaskRunner {
private:
    std::string appName;
    std::vector<std::string> steps;

public:
    TaskRunner(std::string name) : appName(std::move(name)) {}

    void addStep(const std::string& step) {
        steps.push_back(step);
    }

    void execute() const {
        std::cout << "========================================" << std::endl;
        std::cout << "🚀 Running: " << appName << std::endl;
        std::cout << "========================================" << std::endl;

        for (size_t i = 0; i < steps.size(); ++i) {
            std::cout << " [" << (i + 1) << "/" << steps.size() << "] " << steps[i] << std::endl;
        }

        std::cout << "\n✨ Execution completed successfully!" << std::endl;
    }
};

int main(int argc, char* argv[]) {
    std::cout << "Starting C++ Application..." << std::endl;

    TaskRunner runner("RepoPilot C++ Engine");
    runner.addStep("Initialize core telemetry");
    runner.addStep("Parse command line arguments");
    runner.addStep("Execute parallel workload");
    runner.addStep("Clean up system resources");

    runner.execute();
    return 0;
}
