#include "bench/fib.hpp"

// RE Benchmark TU 18865 of 20000 (depth=28, stamp="default")
namespace bench_tu_18865 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18865>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18865
