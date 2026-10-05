#include "bench/fib.hpp"

// RE Benchmark TU 5144 of 20000 (depth=28, stamp="default")
namespace bench_tu_5144 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5144>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5144
