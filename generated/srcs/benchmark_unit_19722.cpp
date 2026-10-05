#include "bench/fib.hpp"

// RE Benchmark TU 19722 of 20000 (depth=28, stamp="default")
namespace bench_tu_19722 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19722>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19722
