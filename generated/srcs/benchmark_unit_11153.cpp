#include "bench/fib.hpp"

// RE Benchmark TU 11153 of 20000 (depth=28, stamp="default")
namespace bench_tu_11153 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11153>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11153
