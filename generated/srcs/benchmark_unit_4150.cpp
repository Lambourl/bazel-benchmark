#include "bench/fib.hpp"

// RE Benchmark TU 4150 of 20000 (depth=28, stamp="default")
namespace bench_tu_4150 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4150>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4150
