#include "bench/fib.hpp"

// RE Benchmark TU 380 of 20000 (depth=28, stamp="default")
namespace bench_tu_380 {
constexpr unsigned long long result = ::bench::slow_fib<28, 380>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_380
