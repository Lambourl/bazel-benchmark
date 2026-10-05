#include "bench/fib.hpp"

// RE Benchmark TU 16084 of 20000 (depth=28, stamp="default")
namespace bench_tu_16084 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16084>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16084
