#include "bench/fib.hpp"

// RE Benchmark TU 6073 of 20000 (depth=28, stamp="default")
namespace bench_tu_6073 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6073>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6073
